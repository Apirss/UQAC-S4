package uqac.dim.hellodroide;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
    public void afficherHello(View v){
        Log.i("DIM", "HELLO!");
        TextView texteHello = (TextView)findViewById(R.id.texte_hello);
        ((Button)v).setText(texteHello.getText());
    }
}