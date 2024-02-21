
-- Insertions pour la table Etat
INSERT INTO Etat (description_etat) VALUES 
('Disponible'),
('Emprunté'),
('En réparation'),
('Perdu'),
('Usé'),
('Endommagé');

-- Insertions pour la table Categorie
INSERT INTO Categorie (nom_categorie) VALUES 
('Science-fiction'),
('Fantastique'),
('Policier'),
('Romance'),
('Histoire'),
('Biographie'),
('Technologie'),
('Éducation'),
('Santé'),
('Art');

-- Insertions pour la table Nationalite
INSERT INTO Nationalite (nom_pays) VALUES 
('France'),
('États-Unis'),
('Canada'),
('Japon'),
('Allemagne'),
('Italie'),
('Royaume-Uni'),
('Australie'),
('Chine'),
('Brésil');

-- Insertions pour la table Etudiant
INSERT INTO Etudiant (nom, prenom, adresse_courriel, telephone) VALUES 
('Dupont', 'Jean', 'jean.dupont@email.com', '0123456789'),
('Martin', 'Alice', 'alice.martin@email.com', '9876543210'),
('Durand', 'Lucas', 'lucas.durand@email.com', '1122334455'),
('Leroy', 'Chloé', 'chloe.leroy@email.com', '5566778899');

-- Insertions pour la table Livre
-- Note: Les id_categorie et id_etat sont choisis arbitrairement parmi les valeurs possibles déjà insérées.
INSERT INTO Livre (ISBN, titre, edition, annee_publication, id_categorie, id_etat, etage) VALUES 
('978-3-16-148410-0', 'Les mystères de l''univers', 'Galaxie', 2020, 1, 1, 2),
('978-0-13-110362-7', 'La programmation pour tous', 'TechEdition', 2021, 7, 2, 1),
('978-2-266-11156-6', 'L''histoire secrète du monde', 'HistoireVivante', 2019, 5, 3, 3);

-- Insertions pour la table Auteur
INSERT INTO Auteur (nom, prenom, date_naissance, id_pays, biographie) VALUES 
('Roux', 'Michel', '1975-02-15', 1, 'Un passionné d''histoire.'),
('Smith', 'Anna', '1980-06-24', 3, 'Spécialiste en science-fiction.');
