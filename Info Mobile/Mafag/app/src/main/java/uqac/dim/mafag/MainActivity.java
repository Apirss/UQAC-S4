package uqac.dim.mafag;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    static int REQUEST = 1;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void mafag(View bouton){

        Intent intent = new Intent(MainActivity.this, mafag.class);

        TextView motPasse = (TextView) findViewById(R.id.ChoiceName);
        String CName = motPasse.getText().toString();
        startActivityForResult(intent,REQUEST);

    }
}