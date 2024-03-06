package uqac.dim.mafag;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.NotificationManagerCompat;

import android.content.Context;
import android.content.Intent;
import android.media.RingtoneManager;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;

public class MainActivity extends AppCompatActivity {

    static int REQUEST = 1;
    private NotificationManager nm;
    private static String CHANNEL_ID = "Mafag_Channel";
    private static String CHANNEL_NAME = "Mafag_Channel_Name";
    private static String CHANNEL_DESCRIPTION = "The Mafag Channel";
    private static int NOTIFICATION_ID = 44;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        createNotificationChannel();
    }
    @Override
    protected void onSaveInstanceState(Bundle outState) {
        super.onSaveInstanceState(outState);
        String nom = ((TextView) findViewById(R.id.ChoiceName)).getText().toString();
        String url = ((TextView) findViewById(R.id.ChoiceLink)).getText().toString();
        outState.putString("nom", nom);
        outState.putString("url", url);
    }

    @Override
    protected void onRestoreInstanceState(Bundle savedInstanceState) {
        super.onRestoreInstanceState(savedInstanceState);
        String nom = savedInstanceState.getString("nom");
        String url = savedInstanceState.getString("url");
        ((TextView) findViewById(R.id.ChoiceName)).setText(nom);
        ((TextView) findViewById(R.id.ChoiceLink)).setText(url);
    }
    private void createNotificationChannel() {

        // Create the NotificationChannel, but only on API 26+ because
        // the NotificationChannel class is new and not in the support library
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            int importance = NotificationManager.IMPORTANCE_DEFAULT;
            NotificationChannel channel = new NotificationChannel(CHANNEL_ID, CHANNEL_NAME, importance);
            channel.setDescription(CHANNEL_DESCRIPTION);
            // Register the channel with the system; you can't change the importance
            // or other notification behaviors after this
            nm = getSystemService(NotificationManager.class);
            //nm = (NotificationManager)getSystemService(NOTIFICATION_SERVICE);
            nm.createNotificationChannel(channel);
        }
        else
            Log.i("DIM", "VERSION ANDROID < API 26, Voir exemple Notification_25_moins");
    }

    public void mafag(View bouton){

        Intent intent = new Intent(MainActivity.this, mafag.class);

        TextView motPasse = (TextView) findViewById(R.id.ChoiceName);
        String CName = motPasse.getText().toString();
        startActivityForResult(intent,REQUEST);

    }

    public void openLink(View bouton){
        String urstring = String.valueOf(((TextView)findViewById(R.id.ChoiceLink)).getText());
        Uri url = Uri.parse(urstring);
        Intent webIntent = new Intent(Intent.ACTION_VIEW, url);
        startActivity(webIntent);
    }

    public void notifier(View bouton){
        String urstring = String.valueOf(((TextView)findViewById(R.id.ChoiceLink)).getText());
        Uri url = Uri.parse(urstring);
        Intent webIntent = new Intent(Intent.ACTION_VIEW, url);
        PendingIntent pIntent = PendingIntent.getActivity(this, REQUEST, webIntent, PendingIntent.FLAG_IMMUTABLE);
        Uri soundUri = RingtoneManager.getDefaultUri(RingtoneManager.TYPE_NOTIFICATION);
        Notification n = new Notification.Builder(this, CHANNEL_ID)
                .setContentTitle("Ouvrir le Lien")
                .setContentText(String.valueOf(((TextView)findViewById(R.id.ChoiceName)).getText()))
                .setSmallIcon(R.mipmap.ic_launcher)
                .setAutoCancel(true)
                .setContentIntent(pIntent)
                .setFullScreenIntent(pIntent, true)
                .setSound(soundUri)
                .build();
        nm.notify(NOTIFICATION_ID, n);
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {

        super.onActivityResult(requestCode, resultCode, data);
        if(requestCode == REQUEST && resultCode == RESULT_OK)
        {
            ((TextView) findViewById(R.id.ChoiceName)).setText(data.getStringExtra("nom"));
            ((TextView) findViewById(R.id.ChoiceLink)).setText(data.getStringExtra("url"));
        }
    }

    public static void toaster(String title, Context ctx)
    {
        Toast toast = Toast.makeText(ctx , title, Toast.LENGTH_SHORT);
        toast.show();
        Handler handler = new Handler();
        handler.postDelayed(new Runnable() {
            @Override
            public void run() {
                toast.cancel();
            }
        }, 1000);
    }
}