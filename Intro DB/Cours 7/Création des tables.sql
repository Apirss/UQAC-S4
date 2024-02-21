-- Création de la table Etat- liste des états possibles
CREATE TABLE IF NOT EXISTS Etat (
    id_etat TINYINT NOT NULL AUTO_INCREMENT,
    description_etat VARCHAR(50) NOT NULL,
    CONSTRAINT PK_Etat PRIMARY KEY (id_etat)
);

-- Création de la table Categorie- liste des catégories de livre
CREATE TABLE IF NOT EXISTS  Categorie (
    id_categorie TINYINT  NOT NULL AUTO_INCREMENT,
    nom_categorie VARCHAR(50) NOT NULL,
    CONSTRAINT PK_Categorie PRIMARY KEY (id_categorie)
);

-- Création de la table Nationalite- Liste des pays desservis par le système
CREATE TABLE IF NOT EXISTS  Nationalite (
    id_pays SMALLINT  NOT NULL AUTO_INCREMENT,
    nom_pays VARCHAR(50) NOT NULL,
    CONSTRAINT PK_Nationalite PRIMARY KEY (id_pays)
);

-- Création de la table Etudiant
CREATE TABLE IF NOT EXISTS  Etudiant (
    id_etudiant INT  NOT NULL AUTO_INCREMENT,
    nom VARCHAR(45) NOT NULL,
    prenom VARCHAR(75) NOT NULL,
    adresse_courriel VARCHAR(45) NOT NULL,
    telephone VARCHAR(20) NOT NULL,
    CONSTRAINT PK_Etudiant PRIMARY KEY (id_etudiant)
);

-- Création de la table Livre
CREATE TABLE  IF NOT EXISTS Livre (
    id_livre INT NOT NULL AUTO_INCREMENT,
    ISBN VARCHAR(20) NOT NULL,
    titre VARCHAR(65) NOT NULL,
    edition VARCHAR(50) NOT NULL,
    annee_publication YEAR NOT NULL,
    id_categorie TINYINT NOT NULL,
    id_etat TINYINT NOT NULL,
    etage INT  NOT NULL,
    CONSTRAINT PK_Livre PRIMARY KEY (id_livre),
    CONSTRAINT FK_Livre_Categorie FOREIGN KEY (id_categorie) REFERENCES Categorie(id_categorie),
    CONSTRAINT FK_Livre_Etat FOREIGN KEY (id_etat) REFERENCES Etat(id_etat)
);

-- Création de la table Auteur
CREATE TABLE  IF NOT EXISTS  Auteur (
    id_auteur INT NOT NULL AUTO_INCREMENT,
    nom VARCHAR(45) NOT NULL,
    prenom VARCHAR(75) NOT NULL,
    date_naissance DATE NULL, -- la date de naissance est facultative
    id_pays SMALLINT NOT NULL,
    biographie VARCHAR(255) NULL,-- la bigraphie n'est pas obligatoire
    PRIMARY KEY (id_auteur), -- il est également possible de ne pas nommer la contrainte. Mais c recommandé 
    CONSTRAINT FK_Auteur_Nationalite FOREIGN KEY (id_pays) REFERENCES Nationalite(id_pays)
);

-- Création de la table Emprunter
CREATE TABLE  IF NOT EXISTS Emprunter (
    id_etudiant INT NOT NULL,
    id_livre INT NOT NULL,
    date_emprunt DATE NOT NULL,
    date_retour DATE NOT NULL,
    CONSTRAINT PK_Emprunter PRIMARY KEY (id_etudiant, id_livre),
    CONSTRAINT FK_Emprunt_Etudiant FOREIGN KEY (id_etudiant) REFERENCES Etudiant(id_etudiant),
    CONSTRAINT FK_Livre_Emprunte FOREIGN KEY (id_livre) REFERENCES Livre(id_livre)
);

-- Création de la table Ecrire
CREATE TABLE  IF NOT EXISTS Ecrire (
    id_auteur INT NOT NULL,
    id_livre INT NOT NULL,
    PRIMARY KEY (id_auteur, id_livre), -- il est également possible de ne pas nommer la contrainte. Mais c recommandé 
    FOREIGN KEY (id_auteur) REFERENCES Auteur(id_auteur),
    FOREIGN KEY (id_livre) REFERENCES Livre(id_livre)
);
