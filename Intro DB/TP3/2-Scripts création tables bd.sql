-- Création de la table 'université'
CREATE TABLE IF NOT EXISTS universite (
    id_universite int primary key,
    nom_universite varchar(255),
	sigle_université varchar(10),
    adresse_universite varchar(255)
);
-- Création de la table 'etudiant'
CREATE TABLE IF NOT EXISTS etudiant (
    id_etudiant int primary key,
    nom_etudiant varchar(255),
    prenom_etudiant varchar(255)
);

-- Création de la table 'agent'
CREATE TABLE IF NOT EXISTS agent (
    id_agent int primary key,
    nom_agent varchar(255),
    prenom_agent varchar(255)
);

-- Création de la table 'espace stationnement'
CREATE TABLE IF NOT EXISTS espace_stationnement (
    id_espace_stationnement int primary key,
	designation_espace_stationnement varchar(45) NULL,
    id_universite int,
    foreign key (id_universite) references universite(id_universite)
);

-- Création de la table 'allée'
CREATE TABLE IF NOT EXISTS allee (
    id_allee int primary key,
    id_espace_stationnement INT,
    designation_alle varchar(45),
    sens_de_circulation varchar(15),
    foreign key (id_espace_stationnement) references espace_stationnement(id_espace_stationnement)
);

-- Création de la table 'place'
CREATE TABLE IF NOT EXISTS place (
    id_place int primary key,
	type_de_place enum('standard', 'personnes à mobilité réduite', 'véhicules électriques'),
    id_allee int,
    foreign key (id_allee) references allee(id_allee)
);

-- Création de la table 'place_réserveé'
CREATE TABLE IF NOT EXISTS place_reservee (
    id_place int,
    id_etudiant int,
    date_reservation date,
    heure_debut_reservation time,
    heure_fin_reservation time,
    primary key (id_place, id_etudiant),
    foreign key (id_place) references place(id_place),
    foreign key (id_etudiant) references etudiant(id_etudiant)
);

-- Création de la table 'espace_surveillé'
CREATE TABLE IF NOT EXISTS espace_surveille (
    id_agent int,
    id_espace_stationnement int,
    date_surveillance date,
    heure_debut_surveillance time,
    heure_fin_surveillance time,
    primary key (id_agent, id_espace_stationnement),
    foreign key (id_agent) references agent(id_agent),
    foreign key (id_espace_stationnement) references espace_stationnement(id_espace_stationnement)
);

-- Création de la table 'cours'
CREATE TABLE IF NOT EXISTS cours (
    id_cours int primary key,
    nom_du_cours varchar(65),
    nombre_heures int
);


-- Création de la table 'cours_suivi'
CREATE TABLE IF NOT EXISTS cours_suivi (
    id_cours int,
    id_etudiant int,
    session varchar(50),
    local varchar(45),
    primary key (id_cours, id_etudiant),
    foreign key (id_cours) references cours(id_cours),
    foreign key (id_etudiant) references etudiant(id_etudiant)
);

ALTER TABLE universite
ADD ville VARCHAR(255);

ALTER TABLE universite
ADD code_postal VARCHAR(6);

ALTER TABLE etudiant
ADD abonnement DATETIME;

ALTER TABLE etudiant
ADD immatriculation VARCHAR(7);

ALTER TABLE espace_stationnement
ADD position VARCHAR(255);

ALTER TABLE place
ADD nom VARCHAR(255);

ALTER TABLE cours
ADD debut DATETIME;

ALTER TABLE cours
ADD fin DATETIME;