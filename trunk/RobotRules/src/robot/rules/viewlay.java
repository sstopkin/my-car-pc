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
import android.view.MotionEvent;
import android.view.View;
import android.view.View.OnClickListener;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.ImageButton;

public class viewlay extends Activity{

	public WebView webView;
	private ImageButton buttonleft;
	private ImageButton buttonright;
	private ImageButton buttonup;
	private ImageButton buttondown;
	private ImageButton buttonstop;
	private ImageButton buttonstop1;
	private BufferedWriter out;
	private Socket s;
	public int mov_state=0;
	public int rot_state=0;
	

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
		webView.loadUrl("http://" + url + ":55001/?action=snapshot");//7776
		
		try {
			s = new Socket("url", 55002);
		} catch (UnknownHostException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		} catch (IOException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}//3000
		
		buttondown = (ImageButton) findViewById(R.id.ImageButtonDown);
		buttonleft = (ImageButton) findViewById(R.id.ImageButtonLeft);
		buttonright = (ImageButton) findViewById(R.id.ImageButtonRight);
		buttonup = (ImageButton) findViewById(R.id.ImageButtonUp);
		buttonstop = (ImageButton) findViewById(R.id.ImageButtonStop);
		buttonstop1 = (ImageButton) findViewById(R.id.ImageButtonStop01);

		
		buttondown.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
//				// TODO Auto-generated method stub
//				try {
//					netwsend("R250");
//				} catch (UnknownHostException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				} catch (IOException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				}
				mov_state=2;
			}
		});
		
		buttonstop.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
//				try {
//					netwsend("F000S250");
//				} catch (UnknownHostException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				} catch (IOException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				}
				mov_state=0;
			}
		});

		buttonstop1.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
//				try {
//					netwsend("F000S250");
//				} catch (UnknownHostException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				} catch (IOException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				}
				mov_state=0;
			}
		});
		
		buttonleft.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
//				try {
//					netwsend("S500");
//				} catch (UnknownHostException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				} catch (IOException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				}
				rot_state=1;
			}
		});
		buttonright.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
//				try {
//					netwsend("S000");
//				} catch (UnknownHostException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				} catch (IOException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				}
				rot_state=2;
			}
		});
		buttonup.setOnClickListener(new OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
//				try {
//					netwsend("F250");
//				} catch (UnknownHostException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				} catch (IOException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				}
				rot_state=1;
			}
		});
		
		ScheduledExecutorService timer = Executors
				.newSingleThreadScheduledExecutor();
		timer.scheduleAtFixedRate(new Runnable() {

			public void run() {

				webView.reload();
				
			}

		}, 10, Long.parseLong("500"), TimeUnit.MILLISECONDS);
		
		ScheduledExecutorService timer1 = Executors
				.newSingleThreadScheduledExecutor();
		timer1.scheduleAtFixedRate(new Runnable() {

			public void run() {
				switch (mov_state) {
				case 1:
					try {
						netwsend("F250");
					} catch (UnknownHostException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					break;
				case 2:
					try {
						netwsend("R250");
					} catch (UnknownHostException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					break;
				default:
					try {
						netwsend("F000");
					} catch (UnknownHostException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}					
					break;
				}			
				switch (rot_state) {
				case 1:
					try {
						netwsend("S000");
					} catch (UnknownHostException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					break;
				case 2:
					try {
						netwsend("S500");
					} catch (UnknownHostException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					break;
				default:
					try {
						netwsend("S250");
					} catch (UnknownHostException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					break;
				}
			}

		}, 10, Long.parseLong("100"), TimeUnit.MILLISECONDS);
	}
	
	public void netwsend(String str) throws UnknownHostException, IOException{
		out = new BufferedWriter(new OutputStreamWriter(s.getOutputStream()));
		out.write(str);
		out.write("F");
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
