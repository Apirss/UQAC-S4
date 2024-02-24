package uqac.dim.personnage;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RadioGroup;
import android.widget.Switch;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private Mage mage;
    private Guerrier guerrier;
    private Personnage personnageCourant;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //Chargement des personnages
        mage = new Mage();
        guerrier = new Guerrier();
        personnageCourant = mage;
        chargerPersonnage();

        ((RadioGroup)findViewById(R.id.choix)).setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(RadioGroup group, int checkedId) {
                if(checkedId == R.id.radioButtonGuerrier)
                    personnageCourant = guerrier;
                else
                    personnageCourant = mage;
                chargerPersonnage();
            }
        });

        //Association du « onCheckedChangeListener »
        ((CheckBox)findViewById(R.id.toggle_stats)).setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                ((EditText)(findViewById(R.id.nom_input))).setEnabled(isChecked);
                ((Switch)findViewById(R.id.classe_input)).setEnabled(isChecked);
                ((EditText)(findViewById(R.id.pv_input))).setEnabled(isChecked);
                ((EditText)(findViewById(R.id.ca_input))).setEnabled(isChecked);
                ((EditText)(findViewById(R.id.damage_input))).setEnabled(isChecked);
                ((EditText)(findViewById(R.id.magie_input))).setEnabled(isChecked);
            }
        });

        Switch classe_input = ((Switch)findViewById(R.id.classe_input));
        classe_input.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                if(isChecked)
                    classe_input.setText(classe_input.getTextOn());
                else
                    classe_input.setText(classe_input.getTextOff());
            }
        });

    }

    private void chargerPersonnage()
    {
        ((EditText)(findViewById(R.id.nom_input))).setText(personnageCourant.getNom());
        ((TextView)(findViewById(R.id.classe_name))).setText(personnageCourant.getClasse());
        ((Switch)findViewById(R.id.classe_input)).setChecked(personnageCourant.getAlignement() != Personnage.Alignement.BON);
        ((EditText)(findViewById(R.id.pv_input))).setText(String.valueOf(personnageCourant.getPV()));
        ((EditText)(findViewById(R.id.ca_input))).setText(String.valueOf(personnageCourant.getCA()));
        ((EditText)(findViewById(R.id.damage_input))).setText(String.valueOf(personnageCourant.getDMG()));

        if(personnageCourant instanceof Mage) {
            ((RadioGroup)findViewById(R.id.choix)).check(R.id.radioButtonMage);
            ((LinearLayout) findViewById(R.id.magiestuff)).setVisibility(View.VISIBLE);
            ((ImageView)findViewById(R.id.photo)).setImageResource(R.drawable.mage);
            ((EditText)(findViewById(R.id.magie_input))).setText(String.valueOf(((Mage)personnageCourant).getPM()));
        }
        else {
            ((RadioGroup)findViewById(R.id.choix)).check(R.id.radioButtonGuerrier);
            ((LinearLayout) findViewById(R.id.magiestuff)).setVisibility(View.GONE);
            ((ImageView)findViewById(R.id.photo)).setImageResource(R.drawable.guerrier);
        }
    }
    public void save(View v)
    {
        personnageCourant.setNom((((EditText)(findViewById(R.id.nom_input))).getText()).toString());
        personnageCourant.setPV(Integer.parseInt((((EditText)(findViewById(R.id.pv_input))).getText()).toString()));
        personnageCourant.setCA(Integer.parseInt((((EditText)(findViewById(R.id.ca_input))).getText()).toString()));
        personnageCourant.setDMG(Integer.parseInt((((EditText)(findViewById(R.id.damage_input))).getText()).toString()));

        if(((Switch)findViewById(R.id.classe_input)).isChecked())
            personnageCourant.setAlignement(Personnage.Alignement.MAUVAIS);
        else
            personnageCourant.setAlignement(Personnage.Alignement.BON);

        if(personnageCourant instanceof Mage)
            ((Mage)personnageCourant).setPM(Integer.parseInt((((EditText)(findViewById(R.id.magie_input))).getText()).toString()));
        chargerPersonnage();
    }
    public void newProf(View v)
    {
        ((EditText)(findViewById(R.id.nom_input))).setText("");
        ((CheckBox)findViewById(R.id.toggle_stats)).setChecked(true);
        ((Switch)findViewById(R.id.classe_input)).setChecked(false);
        ((EditText)(findViewById(R.id.pv_input))).setText("5");
        ((EditText)(findViewById(R.id.ca_input))).setText("5");
        ((EditText)(findViewById(R.id.damage_input))).setText("5");

        if(personnageCourant instanceof Mage)
            ((EditText)(findViewById(R.id.magie_input))).setText("5");
    }
    public void reset(View v)
    {
        if(personnageCourant instanceof Mage)
        {
            mage = new Mage();
            personnageCourant = mage;
        }
        else
        {
            guerrier = new Guerrier();
            personnageCourant = guerrier;
        }
        chargerPersonnage();
    }
}