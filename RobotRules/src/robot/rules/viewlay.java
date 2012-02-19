package robot.rules;

import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.ImageButton;

public class viewlay extends Activity {

	public WebView webView;
	private ImageButton buttonleft;
	private ImageButton buttonright;
	private ImageButton buttonup;
	private ImageButton buttondown;
	private BufferedWriter out;
	private Socket s;

	/** Called when the activity is first created. */
	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		Intent intent = getIntent();
		setContentView(R.layout.viewlay);
		String url = intent.getStringExtra("url");
		webView = (WebView) findViewById(R.id.webView1);
		webView.setWebViewClient(new WebViewClient());
		webView.getSettings().setJavaScriptEnabled(true);
		webView.loadUrl("http://" + url + ":7776/?action=snapshot");
		buttondown = (ImageButton) findViewById(R.id.ImageButtonDown);
		buttonleft = (ImageButton) findViewById(R.id.ImageButtonLeft);
		buttonright = (ImageButton) findViewById(R.id.ImageButtonRight);
		buttonup = (ImageButton) findViewById(R.id.ImageButtonUp);

		
		buttondown.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
				try {
					netwsend("B200");
				} catch (UnknownHostException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		});

		buttonleft.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
				try {
					netwsend("S500");
				} catch (UnknownHostException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		});
		buttonright.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
				try {
					netwsend("S500");
				} catch (UnknownHostException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		});
		buttonup.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
				try {
					netwsend("F250");
				} catch (UnknownHostException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		});

		ScheduledExecutorService timer = Executors
				.newSingleThreadScheduledExecutor();
		timer.scheduleAtFixedRate(new Runnable() {

			public void run() {

				webView.reload();
				
			}

		}, 10, Long.parseLong("500"), TimeUnit.MILLISECONDS);
	}
	
	public void netwsend(String str) throws UnknownHostException, IOException{
		s = new Socket("192.168.0.20", 3000);
		out = new BufferedWriter(new OutputStreamWriter(s.getOutputStream()));
		out.write(str);
		out.write("F000S250");
		out.flush();
		
		s.close();
	}
}
