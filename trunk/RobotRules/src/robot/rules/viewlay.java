package robot.rules;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.webkit.WebView;
import android.webkit.WebViewClient;

public class viewlay extends Activity {

	/** Called when the activity is first created. */
	@Override
	public void onCreate(Bundle savedInstanceState) {
	    super.onCreate(savedInstanceState);
	    Intent intent = getIntent();
	    String url = intent.getStringExtra("url");
	    WebView webView = new WebView(this);
	    setContentView(webView);
	    webView.setWebViewClient(new WebViewClient());
	    webView.getSettings().setJavaScriptEnabled(true);
	    webView.loadUrl("http://"+url+":7776/?action=stream");
	    //webView.loadUrl("http://"+url+":7776/?action=snapshot");
	}

}
