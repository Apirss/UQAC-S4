/*DROP Table horaires;
DROP Table Agents_de_surveillance_du_parking;

DROP Table Places;
DROP Table Allees;
DROP Table Espaces_de_stationnement;
DROP Table Universites;

DROP Table Assister;
DROP Table Cours;
DROP Table Etudiants;*/




CREATE TABLE IF NOT EXISTS Universites (
	id_universite 	INT NOT NULL AUTO_INCREMENT,
	Nom		VARCHAR(40) NOT NULL,
	Adresse	VARCHAR(60) NOT NULL,
	Ville		VARCHAR(30) NOT NULL,
	Code_postal	VARCHAR(6) NOT NULL,
	PRIMARY KEY (id_universite)
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS Agents_de_surveillance_du_parking(
	id_agent	INT NOT NULL AUTO_INCREMENT,
	Nom		VARCHAR(30) NOT NULL,
	Prenom	VARCHAR(20) NOT NULL,
	universite	INT NOT NULL,
	PRIMARY KEY (id_agent),
	FOREIGN KEY (universite) REFERENCES Universites(id_universite)
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS horaires(
	agent		INT NOT NULL,
	horaire_debut	DATETIME NOT NULL,
	horaire_fin	DATETIME NOT NULL,
	PRIMARY KEY (agent, horaire_debut),
	FOREIGN KEY (agent) REFERENCES Agents_de_surveillance_du_parking(id_agent)
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS Espaces_de_stationnement(
	id_espace	INT NOT NULL AUTO_INCREMENT,
	Nom		VARCHAR(20) NOT NULL,
	universite	INT NOT NULL,
	PRIMARY KEY (id_espace),
	FOREIGN KEY (universite) REFERENCES Universites(id_universite)
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS Allees(
	id_allee	INT NOT NULL AUTO_INCREMENT,
	Nom		VARCHAR(20) NOT NULL,
	Espaces_de_stationnement	INT NOT NULL,
	PRIMARY KEY (id_allee),
	FOREIGN KEY (Espaces_de_stationnement) REFERENCES Espaces_de_stationnement(id_espace)
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS Etudiants(
	id_etudiant	INT NOT NULL AUTO_INCREMENT,
	Nom		VARCHAR(30) NOT NULL,
	Prenom	VARCHAR(20) NOT NULL,
Abonnement	DATETIME,
Immatriculation	VARCHAR(7) NOT NULL,
	PRIMARY KEY (id_etudiant)
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS Places(
	id_place	INT NOT NULL AUTO_INCREMENT,
	Nom		VARCHAR(4) NOT NULL,
	Status		VARCHAR(10) NOT NULL,
Allee		INT NOT NULL,
id_etudiant INT NOT NULL,
FOREIGN KEY (id_etudiant) REFERENCES Etudiants(id_etudiant),
	PRIMARY KEY (id_place),
	FOREIGN KEY (Allee) REFERENCES Allees(id_allee)
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS Cours(
	id_cours	INT NOT NULL AUTO_INCREMENT,
	Nom		VARCHAR(40) NOT NULL,
Debut		DATETIME,
Fin		DATETIME,
	PRIMARY KEY (id_cours)
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS Assister(
	id_etudiant	INT NOT NULL,
	id_cours	INT NOT NULL,
	PRIMARY KEY (id_etudiant, id_cours),
FOREIGN KEY (id_etudiant) REFERENCES Etudiants(id_etudiant),
FOREIGN KEY (id_cours) REFERENCES Cours(id_cours)
) ENGINE=InnoDB;