-- Requête 1
SELECT 
    cs.id_etudiant,
    SUM(c.nombre_heures) AS total_heures,
    AVG(c.nombre_heures) AS moyenne_heures
FROM 
    cours_suivi cs
JOIN 
    cours c ON cs.id_cours = c.id_cours
GROUP BY 
    cs.id_etudiant
HAVING 
    total_heures > 20 AND moyenne_heures > 2;
    
-- Requête 2
SELECT 
    COUNT(p.id_place) AS nombre_places_pmr
FROM 
    place p
JOIN 
    allee a ON p.id_allee = a.id_allee
JOIN 
    espace_stationnement es ON a.id_espace_stationnement = es.id_espace_stationnement
JOIN 
    universite u ON es.id_universite = u.id_universite
WHERE 
    p.type_de_place = 'personnes à mobilité réduite' AND u.sigle_université = 'UQAM';
    
-- Requête 3
SELECT 
    u.id_universite, 
    u.nom_universite
FROM 
    universite u
LEFT JOIN 
    espace_stationnement es ON u.id_universite = es.id_universite
WHERE 
    es.id_espace_stationnement IS NULL;
    
-- Requête 4
SELECT 
    p.nom, 
    r.date_reservation
FROM 
    etudiant e
JOIN 
	place_reservee r ON e.id_etudiant = r.id_etudiant
JOIN 
    place p ON r.id_place = p.id_place
JOIN 
    allee a ON p.id_allee = a.id_allee
JOIN 
    espace_stationnement es ON a.id_espace_stationnement = es.id_espace_stationnement
JOIN 
    espace_surveille s ON es.id_espace_stationnement = s.id_espace_stationnement
JOIN 
    agent ag ON s.id_agent = ag.id_agent
WHERE 
    e.nom_etudiant = 'Jean' AND e.prenom_etudiant = 'Jordan' AND ag.nom_agent = 'Courtois' AND ag.prenom_agent = 'Nadine';
    
-- Requête 5
SELECT 
    u.nom_universite,
    e.nom_etudiant,
    e.prenom_etudiant,
    es.designation_espace_stationnement,
    a.designation_alle,
    p.nom,
    r.date_reservation,
    r.heure_debut_reservation,
    r.heure_fin_reservation
FROM 
    universite u
JOIN 
    espace_stationnement es ON u.id_universite = es.id_universite
JOIN 
    allee a ON es.id_espace_stationnement = a.id_espace_stationnement
JOIN 
    place p ON a.id_allee = p.id_allee
JOIN 
    place_reservee r ON p.id_place = r.id_place
JOIN 
    etudiant e ON r.id_etudiant = e.id_etudiant
WHERE 
    YEAR(r.date_reservation) = 2023;
    
-- Requête 6
SELECT 
    u.nom_universite,
    MONTH(r.date_reservation) AS mois,
    COUNT(r.id_place) AS nombre_reservations
FROM 
    universite u
JOIN 
    espace_stationnement es ON u.id_universite = es.id_universite
JOIN 
    allee a ON es.id_espace_stationnement = a.id_espace_stationnement
JOIN 
    place p ON a.id_allee = p.id_allee
JOIN 
    place_reservee r ON p.id_place = r.id_place
WHERE 
    YEAR(r.date_reservation) = 2023
GROUP BY 
    u.nom_universite, 
    mois;
    
-- Requête 7
WITH reservation_counts AS (
    SELECT 
        u.nom_universite,
        COUNT(r.id_place) AS nombre_reservations
    FROM 
        universite u
    JOIN 
        espace_stationnement es ON u.id_universite = es.id_universite
    JOIN 
        allee a ON es.id_espace_stationnement = a.id_espace_stationnement
    JOIN 
        place p ON a.id_allee = p.id_allee
    JOIN 
        place_reservee r ON p.id_place = r.id_place
    WHERE 
        YEAR(r.date_reservation) = 2023 AND MONTH(r.date_reservation) <= 6
    GROUP BY 
        u.nom_universite
)

SELECT 
    nom_universite, 
    nombre_reservations AS max_reservations
FROM 
    reservation_counts
WHERE 
    nombre_reservations = (SELECT MAX(nombre_reservations) FROM reservation_counts)
UNION ALL
SELECT 
    nom_universite, 
    nombre_reservations AS min_reservations
FROM 
    reservation_counts
WHERE 
    nombre_reservations = (SELECT MIN(nombre_reservations) FROM reservation_counts);
    
-- Requête 8
SELECT 
    e.id_etudiant,
    e.nom_etudiant,
    e.prenom_etudiant,
    COUNT(cs.id_cours) AS nombre_cours_suivis
FROM 
    etudiant e
LEFT JOIN 
    place_reservee r ON e.id_etudiant = r.id_etudiant
LEFT JOIN 
    cours_suivi cs ON e.id_etudiant = cs.id_etudiant
WHERE 
    r.id_place IS NULL
GROUP BY 
    e.id_etudiant;
    
-- Requête 9
SELECT 
    e.id_etudiant,
    e.nom_etudiant,
    e.prenom_etudiant
FROM 
    etudiant e
JOIN 
    cours_suivi cs ON e.id_etudiant = cs.id_etudiant
JOIN 
    cours c ON cs.id_cours = c.id_cours
WHERE 
    c.nom_du_cours = 'IntroDB' AND e.id_etudiant NOT IN (
        SELECT 
            pr.id_etudiant
        FROM 
            place_reservee pr
        WHERE 
            DAYOFWEEK(pr.date_reservation) = 4 AND 
            ((pr.heure_debut_reservation >= '16:00:00' AND pr.heure_debut_reservation <= '18:45:00') OR
	    (pr.heure_fin_reservation <= '18:45:00' AND pr.heure_fin_reservation >= '16:00:00') OR 
	    (pr.heure_debut_reservation < '16:00:00' AND pr.heure_fin_reservation > '18:45:00'))
    );
    
-- Requête 10
SELECT 
    es.id_agent,
    a.nom_agent,
    a.prenom_agent,
    COUNT(DISTINCT es.id_espace_stationnement) AS nombre_espaces_surveilles
FROM 
    espace_surveille es
JOIN 
    agent a ON es.id_agent = a.id_agent
GROUP BY 
    es.id_agent
HAVING 
    nombre_espaces_surveilles = (
        SELECT 
            MAX(nombre_espaces_surveilles)
        FROM (
            SELECT 
                id_agent,
                COUNT(DISTINCT id_espace_stationnement) AS nombre_espaces_surveilles
            FROM 
                espace_surveille
            GROUP BY 
                id_agent
        ) AS subquery
    );
    
-- Requête 11
-- Création de la table 'agent_archive'
CREATE TABLE IF NOT EXISTS agent_archive AS
SELECT * FROM agent WHERE 1=0;

-- Archivage des agents n'ayant pas surveillé d'espace de stationnement depuis plus de 12 mois
INSERT INTO agent_archive
SELECT a.*
FROM agent a
LEFT JOIN espace_surveille es ON a.id_agent = es.id_agent
WHERE es.date_surveillance < DATE_SUB(CURDATE(), INTERVAL 1 YEAR) OR es.date_surveillance IS NULL;

-- Suppression de ces agents de la table 'agent'
DELETE a FROM agent a
LEFT JOIN espace_surveille es ON a.id_agent = es.id_agent
WHERE es.date_surveillance < DATE_SUB(CURDATE(), INTERVAL 1 YEAR) OR es.date_surveillance IS NULL;

-- Requête 12
UPDATE 
    place_reservee pr
JOIN 
    etudiant e ON pr.id_etudiant = e.id_etudiant
JOIN
	place p ON p.id_place = pr.id_place
JOIN
	allee a ON a.id_allee = p.id_allee
JOIN
	espace_stationnement es ON es.id_espace_stationnement = a.id_espace_stationnement
JOIN 
    universite u ON u.id_universite = es.id_universite
SET 
    pr.date_reservation = CONCAT('2024-05-10 ', TIME(pr.date_reservation))
WHERE 
    u.nom_universite = 'Université Laval' AND pr.date_reservation < CURDATE();
    
-- Requête 13
-- Insérer une nouvelle université
INSERT INTO universite (id_universite, nom_universite, sigle_université, adresse_universite, ville, code_postal)
VALUES (8, 'Université Test', 'UT', '2325 Rue de la Testière', 'Québec', 'G1V0A6');

-- Insérer un nouvel étudiant
INSERT INTO etudiant (id_etudiant, nom_etudiant, prenom_etudiant)
VALUES (5705, 'Dupont', 'Jean');

-- Insérer un nouvel agent
INSERT INTO agent (id_agent, nom_agent, prenom_agent)
VALUES (32, 'Lefevre', 'Pierre');

-- Insérer un nouvel espace de stationnement
INSERT INTO espace_stationnement (id_espace_stationnement, designation_espace_stationnement, id_universite, position)
VALUES (130, 'ESPACE-31', 8,'2325 Rue de la Testière');

-- Insérer une nouvelle allée
INSERT INTO allee (id_allee, id_espace_stationnement, designation_alle, sens_de_circulation)
VALUES (31, 130, 'Allée Test', 'unique');

-- Insérer une nouvelle place
INSERT INTO place (id_place, type_de_place, id_allee,nom)
VALUES (51, 'standard', 31, "G823");

-- Insérer une nouvelle réservation
INSERT INTO place_reservee (id_place, id_etudiant, date_reservation, heure_debut_reservation, heure_fin_reservation)
VALUES (51, 5705, '2024-04-24', '10:00:00', '13:00:00');

-- Insérer un nouvel espace surveillé
INSERT INTO espace_surveille (id_agent, id_espace_stationnement, date_surveillance, heure_debut_surveillance, heure_fin_surveillance)
VALUES (32, 130, '2024-04-24', '08:00:00', '16:00:00');

-- Insérer un nouveau cours
INSERT INTO cours (id_cours, nom_du_cours, nombre_heures, debut, fin)
VALUES (430, 'Introduction aux bases de données 2', 4, "2025-03-24 08:00:00", DATE_ADD("2025-03-24 08:00:00", INTERVAL 4 HOUR));

-- Insérer un nouveau cours suivi
INSERT INTO cours_suivi (id_cours, id_etudiant, session, local)
VALUES (430, 5705, 'Hiver 2024', 'P0-3373');

-- Requête 14
SELECT e.*
FROM etudiant e
JOIN cours_suivi cs ON e.id_etudiant = cs.id_etudiant
JOIN cours c ON cs.id_cours = c.id_cours
JOIN place_reservee pr ON e.id_etudiant = pr.id_etudiant
JOIN place p ON pr.id_place = p.id_place
JOIN allee a ON p.id_allee = a.id_allee
JOIN espace_stationnement es ON a.id_espace_stationnement = es.id_espace_stationnement
JOIN universite u ON es.id_universite = u.id_universite
WHERE c.nom_du_cours = 'Programmation jeux vidéo'
AND pr.date_reservation = '2024-03-18'
AND u.sigle_université = 'UQAC'
AND es.id_espace_stationnement = (SELECT MIN(id_espace_stationnement) FROM espace_stationnement WHERE id_universite = u.id_universite);

-- Requête 15
SELECT ag.*
FROM agent ag
JOIN espace_surveille es ON ag.id_agent = es.id_agent
JOIN espace_stationnement est ON es.id_espace_stationnement = est.id_espace_stationnement
JOIN allee al ON est.id_espace_stationnement = al.id_espace_stationnement
JOIN place pl ON al.id_allee = pl.id_allee
GROUP BY est.id_espace_stationnement, ag.id_agent
HAVING COUNT(pl.id_place) > 45;

-- Requête 16
SELECT 
    u.nom_universite, 
    p.type_de_place, 
    COUNT(pr.id_place) / COUNT(p.id_place) AS taux_occupation_moyen
FROM 
    universite u
JOIN 
    espace_stationnement es ON u.id_universite = es.id_universite
JOIN 
    allee a ON es.id_espace_stationnement = a.id_espace_stationnement
JOIN 
    place p ON a.id_allee = p.id_allee
LEFT JOIN 
    place_reservee pr ON p.id_place = pr.id_place
LEFT JOIN 
    etudiant e ON e.id_etudiant = pr.id_etudiant
LEFT JOIN 
    cours_suivi cs ON e.id_etudiant = cs.id_etudiant
WHERE 
    cs.session = (SELECT MAX(session) FROM cours_suivi)
GROUP BY 
    u.nom_universite, 
    p.type_de_place;

-- Requête 17
WITH reservation_par_universite AS (
    SELECT u.nom_universite, COUNT(pr.id_place) AS nombre_reservations, COUNT(DISTINCT e.id_etudiant) AS nombre_etudiants
    FROM universite u
    JOIN espace_stationnement es ON u.id_universite = es.id_universite
    JOIN allee a ON es.id_espace_stationnement = a.id_espace_stationnement
    JOIN place p ON a.id_allee = p.id_allee
    JOIN place_reservee pr ON p.id_place = pr.id_place
    JOIN etudiant e ON pr.id_etudiant = e.id_etudiant
    GROUP BY u.nom_universite
),
ratio_reservation AS (
    SELECT nom_universite, nombre_reservations / nombre_etudiants AS ratio
    FROM reservation_par_universite
)
SELECT nom_universite, ratio AS meilleur_ratio
FROM ratio_reservation
WHERE ratio = (SELECT MAX(ratio) FROM ratio_reservation)
UNION ALL
SELECT nom_universite, ratio AS pire_ratio
FROM ratio_reservation
WHERE ratio = (SELECT MIN(ratio) FROM ratio_reservation);
