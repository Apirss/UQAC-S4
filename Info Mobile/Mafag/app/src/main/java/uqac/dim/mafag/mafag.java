package uqac.dim.mafag;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;

public class mafag extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.mafag);

        ((ImageView) findViewById(R.id.microsoft)).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String nom = "Microsoft";
                String url = "https://www.microsoft.com";
                Intent intent = new Intent();
                intent.putExtra("nom", nom);
                intent.putExtra("url", url);
                setResult(RESULT_OK, intent);
                finish();
            }
        });

        ((ImageView) findViewById(R.id.amazon)).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String nom = "Amazon";
                String url = "https://www.amazon.com";
                Intent intent = new Intent();
                intent.putExtra("nom", nom);
                intent.putExtra("url", url);
                setResult(RESULT_OK, intent);
                finish();
            }
        });

        ((ImageView) findViewById(R.id.facebook)).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String nom = "Facebook";
                String url = "https://www.facebook.com";
                Intent intent = new Intent();
                intent.putExtra("nom", nom);
                intent.putExtra("url", url);
                setResult(RESULT_OK, intent);
                finish();
            }
        });

        ((ImageView) findViewById(R.id.apple)).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String nom = "Apple";
                String url = "https://www.apple.com";
                Intent intent = new Intent();
                intent.putExtra("nom", nom);
                intent.putExtra("url", url);
                setResult(RESULT_OK, intent);
                finish();
            }
        });

        ((ImageView) findViewById(R.id.google)).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String nom = "Google";
                String url = "https://www.google.com";
                Intent intent = new Intent();
                intent.putExtra("nom", nom);
                intent.putExtra("url", url);
                setResult(RESULT_OK, intent);
                finish();
            }
        });
    }
}
