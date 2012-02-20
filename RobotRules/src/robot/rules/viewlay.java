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
	private ImageButton buttonstop;
	private ImageButton buttonstop1;
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
		
		try {
			s = new Socket("url", 3000);
		} catch (UnknownHostException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		} catch (IOException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
		
		buttondown = (ImageButton) findViewById(R.id.ImageButtonDown);
		buttonleft = (ImageButton) findViewById(R.id.ImageButtonLeft);
		buttonright = (ImageButton) findViewById(R.id.ImageButtonRight);
		buttonup = (ImageButton) findViewById(R.id.ImageButtonUp);
		buttonstop = (ImageButton) findViewById(R.id.ImageButtonStop);
		buttonstop1 = (ImageButton) findViewById(R.id.ImageButtonStop01);

		
		buttondown.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
				try {
					netwsend("R250");
				} catch (UnknownHostException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		});
		
		buttonstop.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
				try {
					netwsend("F000S250");
				} catch (UnknownHostException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		});

		buttonstop1.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
				try {
					netwsend("F000S250");
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
					netwsend("S000");
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
		
		out = new BufferedWriter(new OutputStreamWriter(s.getOutputStream()));
		out.write(str);
		out.flush();

	}
	
	public void onStop(){
		try {
			s.close();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
