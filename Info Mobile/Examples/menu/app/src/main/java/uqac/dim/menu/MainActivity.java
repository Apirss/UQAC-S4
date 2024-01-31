package uqac.dim.menu;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.menu, menu);
        return true;
    }
    @Override
    public boolean onOptionsItemSelected(MenuItem item) {

        // https://stackoverflow.com/questions/76334499/error-constant-expression-required-android-studio
        int id = item.getItemId();
        if (id == R.id.menu_preferences)
            return faireToast("Sélection des préférences");
        if (id == R.id.menu_etudiants)
            return faireToast("Sélection des étudiants");
        if (id == R.id.menu_apropos)
            return faireToast("Sélection du a propos");
        if (id == R.id.menu_coche)
            return faireToast("menu_coche : " + item.isChecked());
        if (id == R.id.menu_choix_1)
            return faireToast("menu_choix_1 : " + item.isChecked());
        if (id == R.id.menu_choix_2)
            return faireToast("menu_choix_2 : " + item.isChecked());
        return super.onOptionsItemSelected(item);

        /*
        switch (item.getItemId())
        {
            case R.id.menu_preferences:
                Toast.makeText(MainActivity.this, "Sélection des préférences",
                        Toast.LENGTH_SHORT).show();
                return true;

            case R.id.menu_etudiants:
                Toast.makeText(MainActivity.this, "Sélection des étudiants",
                        Toast.LENGTH_SHORT).show();
                return true;

            case R.id.menu_apropos:
                Toast.makeText(MainActivity.this, "Sélection du a propos",
                        Toast.LENGTH_SHORT).show();
                return true;

            case R.id.menu_coche:
                Toast.makeText(MainActivity.this, "menu_coche : " + item.isChecked(),
                        Toast.LENGTH_SHORT).show();
                return true;

            case R.id.menu_choix_1:
                Toast.makeText(MainActivity.this, "menu_choix_1 : " + item.isChecked(),
                        Toast.LENGTH_SHORT).show();
                return true;

            case R.id.menu_choix_2:
                Toast.makeText(MainActivity.this, "menu_choix_2 : " + item.isChecked(),
                        Toast.LENGTH_SHORT).show();
                return true;

            default:
                return super.onOptionsItemSelected(item);
        }
        */
    }

    private boolean faireToast(String message){
        Toast.makeText(MainActivity.this, message, Toast.LENGTH_SHORT).show();
        return true;
    }
}
