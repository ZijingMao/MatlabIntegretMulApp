package com.example.matlabintegretmulapp;

import android.net.Uri;
import android.os.Bundle;
import android.support.design.widget.FloatingActionButton;
import android.support.design.widget.Snackbar;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.util.Log;
import android.view.View;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;

import com.bandpowercalc.*;
import com.google.android.gms.appindexing.Action;
import com.google.android.gms.appindexing.AppIndex;
import com.google.android.gms.common.api.GoogleApiClient;

import java.util.Arrays;
import java.util.Random;

import com.matrixmultiplication.MatrixMultiplication;
import com.getcoherence.GetCoherence;
import com.fir1window.Fir1Window;


public class MainActivity extends AppCompatActivity {

    private static final String TAG = "MainActivity";

    private TextView textViewMultiplyElement1;
    private TextView textViewMultiplyElement2;
    private TextView textViewOutput;
    private TextView textViewPowerRatio;

    private double[][] multiplyDoubleElement1 = {{1, 2, 3}, {4, 5, 6}};
    private double[][] multiplyDoubleElement2 = {{1, 2}, {3, 4}, {5, 6}};
    private double[][] multiplyOutput;

    private double[] a = {1, 2, 3, 4, 5, 6};
    private double[] b = {1, 2, 3, 4, 5, 6};
    private double[] c = new double[4];

    private double[] randomNumbers = new double[256];

    private double[] mscxy = new double[513];
    private double[] frequency_list = new double[513];

    private double[] x = new double[768];
    private double[] y = new double[768];
    private double fs = 256;

    private double[] input = new double[768];
    private double low = 0.5;
    private double high = 50;


//    private MatrixMultiplication mm;
//    private BandpowerCalc bc;

    /**
     * ATTENTION: This was auto-generated to implement the App Indexing API.
     * See https://g.co/AppIndexing/AndroidStudio for more information.
     */
    private GoogleApiClient client;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        textViewMultiplyElement1 = (TextView) findViewById(R.id.textViewMul1);
        textViewMultiplyElement2 = (TextView) findViewById(R.id.textViewMul2);
        textViewOutput = (TextView) findViewById(R.id.textViewOutput);
        textViewPowerRatio = (TextView) findViewById(R.id.textViewPowerRatio);

        //TODO replace the function to MATLAB multiplication function here
        multiplyOutput = matrixMultiplication(multiplyDoubleElement1, multiplyDoubleElement2);

        MatrixMultiplication.matrix_multiplication(a, b, c);

        //TODO test the second library is working or not
        Random randSignal = new Random();
        for (int i = 0; i < randomNumbers.length; i++) {
            int n = randSignal.nextInt(100);
            randomNumbers[i] = n;
        }
        double Fs = 256;
        double[] band = {0, 128};
        SWIGTYPE_p_double totalPower = BandpowerCalc.new_doubleArray(1);
        SWIGTYPE_p_double pBand = BandpowerCalc.new_doubleArray(1);
        BandpowerCalc.fft_bandpower_calculate(randomNumbers, Fs, band, totalPower, pBand);

        Log.d(TAG, Arrays.toString(c));
        //String totalPowerDoubleOld = Long.toHexString(SWIGTYPE_p_double.getCPtr(totalPower));
        double totalPowerDouble = BandpowerCalc.doubleArray_getitem(totalPower, 0);
        double pBandDouble = BandpowerCalc.doubleArray_getitem(pBand, 0);
        Log.d(TAG, Double.toString(pBandDouble / totalPowerDouble));

        textViewPowerRatio.setText(Double.toString(pBandDouble / totalPowerDouble));

        textViewMultiplyElement1.setText(Arrays.deepToString(multiplyDoubleElement1));
        textViewMultiplyElement2.setText(Arrays.deepToString(multiplyDoubleElement2));
        textViewOutput.setText(Arrays.toString(c));

        // calculate the coherence

//        for (int i = 0; i < x.length; i++) {
//            int n = randSignal.nextInt(100);
//            x[i] = n;
//            n = randSignal.nextInt(100);
//            y[i] = n;
//        }
//        GetCoherence.get_coherence(x, y, fs, mscxy, frequency_list);
//        for (int idx = 0; idx < 768; idx++){
//            Log.d(TAG, Double.toString(x[idx]));
//        }
//        Log.d(TAG, "====================");
//        for (int idx = 0; idx < 768; idx++){
//            Log.d(TAG, Double.toString(y[idx]));
//        }
//        Log.d(TAG, Arrays.toString(mscxy));

        // calculate the filtered data
        for (int i = 0; i < x.length; i++) {
            int n = randSignal.nextInt(100);
            input[i] = n;
        }
        for (int idx = 0; idx < 768; idx++){
            Log.d(TAG, Double.toString(input[idx]));
        }
        Log.d(TAG, "====================");
        Fir1Window.fir1_window(input, low, high);
        for (int idx = 0; idx < 768; idx++){
            Log.d(TAG, Double.toString(input[idx]));
        }

        FloatingActionButton fab = (FloatingActionButton) findViewById(R.id.fab);
        fab.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Snackbar.make(view, "Replace with your own action", Snackbar.LENGTH_LONG)
                        .setAction("Action", null).show();
            }
        });
        // ATTENTION: This was auto-generated to implement the App Indexing API.
        // See https://g.co/AppIndexing/AndroidStudio for more information.
        client = new GoogleApiClient.Builder(this).addApi(AppIndex.API).build();
    }

    public double[][] matrixMultiplication(double[][] A, double[][] B) {

        int aRows = A.length;
        int aColumns = A[0].length;
        int bRows = B.length;
        int bColumns = B[0].length;

        if (aColumns != bRows) {
            throw new IllegalArgumentException("A:Rows: " + aColumns + " did not match B:Columns " + bRows + ".");
        }

        double[][] C = new double[aRows][bColumns];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                C[i][j] = 0.00000;
            }
        }

        for (int i = 0; i < aRows; i++) { // aRow
            for (int j = 0; j < bColumns; j++) { // bColumn
                for (int k = 0; k < aColumns; k++) { // aColumn
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        return C;
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }

    @Override
    public void onStart() {
        super.onStart();

        // ATTENTION: This was auto-generated to implement the App Indexing API.
        // See https://g.co/AppIndexing/AndroidStudio for more information.
        client.connect();
        Action viewAction = Action.newAction(
                Action.TYPE_VIEW, // TODO: choose an action type.
                "Main Page", // TODO: Define a title for the content shown.
                // TODO: If you have web page content that matches this app activity's content,
                // make sure this auto-generated web page URL is correct.
                // Otherwise, set the URL to null.
                Uri.parse("http://host/path"),
                // TODO: Make sure this auto-generated app deep link URI is correct.
                Uri.parse("android-app://com.example.matlabintegretmulapp/http/host/path")
        );
        AppIndex.AppIndexApi.start(client, viewAction);
    }

    @Override
    public void onStop() {
        super.onStop();

        // ATTENTION: This was auto-generated to implement the App Indexing API.
        // See https://g.co/AppIndexing/AndroidStudio for more information.
        Action viewAction = Action.newAction(
                Action.TYPE_VIEW, // TODO: choose an action type.
                "Main Page", // TODO: Define a title for the content shown.
                // TODO: If you have web page content that matches this app activity's content,
                // make sure this auto-generated web page URL is correct.
                // Otherwise, set the URL to null.
                Uri.parse("http://host/path"),
                // TODO: Make sure this auto-generated app deep link URI is correct.
                Uri.parse("android-app://com.example.matlabintegretmulapp/http/host/path")
        );
        AppIndex.AppIndexApi.end(client, viewAction);
        client.disconnect();
    }

    static {
        System.loadLibrary("MatrixMultiplication");
        System.loadLibrary("BandpowerCalc");
        System.loadLibrary("CoherenceCalc");
        System.loadLibrary("Fir1Window");
        System.loadLibrary("CalcBandpower");
    }

//    public interface dll extends Library {
//        void matrix_multiplication(double[] dv0, double[] dv1, double[] c);
//    }
//
//    public static dll inst;
//    static {
//        inst = (dll)Native.loadLibrary("MatrixMultiplication", dll.class);
//    }

}
