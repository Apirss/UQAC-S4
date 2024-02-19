package uqac.dim.personnage;

public abstract class Personnage {

    public enum Alignement{BON, MAUVAIS};
    private String classe;
    private Alignement alignement;
    private String nom;
    private int ca;
    private int pv;
    private int dmg;

    public Personnage(String classe, Alignement alignement, String nom, int ca, int pv, int dmg){

        this.classe = classe;
        this.alignement = alignement;
        this.nom = nom;
        this.ca = ca;
        this.pv = pv;
        this.dmg = dmg;
    }

    public final Alignement getAlignement(){

        return alignement;
    }

    public final String getClasse(){

        return classe;
    }

    public final String getNom(){

        return nom;
    }

    public final int getCA(){

        return ca;
    }

    public final int getDMG(){

        return dmg;
    }

    public final int getPV(){

        return pv;
    }

    public final void setAlignement(Alignement alignement){

        this.alignement = alignement;
    }

    public final void setNom(String nom){

        this.nom = nom;
    }

    public final void setCA(int ca){

        this.ca = validerValeur(ca);
    }

    public final void setDMG(int dmg){

        this.dmg = validerValeur(dmg);
    }

    public final void setPV(int pv){

        this.pv = validerValeur(pv);
    }

    protected final int validerValeur(int v){

        if (v < 0)
            return 0;
        if (v > 10)
            return 10;
        return v;
    }
}