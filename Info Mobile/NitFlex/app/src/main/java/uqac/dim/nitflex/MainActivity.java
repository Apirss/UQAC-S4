package uqac.dim.nitflex;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void afficherHello(View v){
        Log.i("DIM", "HELLO!");
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
        if (id == R.id.menu_very_useful){
            Log.i("DIM", "Menu Very Useful !");
            return faireToast("YES ! Very Useful !");}
        if (id == R.id.menu_settings){
            Log.i("DIM", "Menu Settings !");
            return faireToast("SETTINGS"); }
        return super.onOptionsItemSelected(item);
    }

    private boolean faireToast(String message){
        Toast.makeText(MainActivity.this, message, Toast.LENGTH_SHORT).show();
        return true;
    }
}