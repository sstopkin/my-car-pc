package robot.rules;

import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.webkit.WebView;
import android.webkit.WebViewClient;

public class viewlay extends Activity {
	
	public WebView webView;

	/** Called when the activity is first created. */
	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		Intent intent = getIntent();
		setContentView(R.layout.viewlay);
		String url = intent.getStringExtra("url");
		webView = (WebView)findViewById(R.id.webView1);
		webView.setWebViewClient(new WebViewClient());
		webView.getSettings().setJavaScriptEnabled(true);
		webView.loadUrl("http://" + url + ":7776/?action=snapshot");

		ScheduledExecutorService timer = Executors
				.newSingleThreadScheduledExecutor();
		timer.scheduleAtFixedRate(new Runnable() {

			public void run() {
				webView.reload();
			}

		}, 10, Long.parseLong("200"), TimeUnit.MILLISECONDS);
	}

}
