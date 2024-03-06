package uqac.dim.mafag;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

public class mafag extends AppCompatActivity {
    public static int AppleCount = 0;
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
                ((ImageView) findViewById(R.id.microsoft)).setEnabled(false);
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
                ((ImageView) findViewById(R.id.amazon)).setEnabled(false);
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
                ((ImageView) findViewById(R.id.facebook)).setEnabled(false);
                finish();
            }
        });

        ((ImageView) findViewById(R.id.apple)).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(AppleCount == 0)
                {
                    MainActivity.toaster("J'ai dis pas APPLE !", getApplicationContext());
                    AppleCount++;
                }
                else if(AppleCount == 1)
                {
                    MainActivity.toaster("4 To go", getApplicationContext());
                    AppleCount++;
                }
                else if(AppleCount == 2)
                {
                    MainActivity.toaster("3 To go", getApplicationContext());
                    AppleCount++;
                }
                else if(AppleCount == 3)
                {
                    MainActivity.toaster("2 To go",getApplicationContext());
                    AppleCount++;
                }
                else if(AppleCount == 4)
                {
                    MainActivity.toaster("1 To go", getApplicationContext());
                    AppleCount++;
                }
                else
                {
                    MainActivity.toaster("Bon vraiment parce que t'insiste !", getApplicationContext());
                    String nom = "Apple";
                    String url = "https://www.apple.com";
                    Intent intent = new Intent();
                    intent.putExtra("nom", nom);
                    intent.putExtra("url", url);
                    setResult(RESULT_OK, intent);
                    ((ImageView) findViewById(R.id.apple)).setEnabled(false);
                    AppleCount = 0;
                    finish();
                }
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
                ((ImageView) findViewById(R.id.google)).setEnabled(false);
                finish();
            }
        });
    }
}
