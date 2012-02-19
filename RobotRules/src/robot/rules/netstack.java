package robot.rules;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.UnknownHostException;

import android.util.Log;

public class netstack {
	
	public String url;
	public int port;
	public netstack(String url, int i) {
		// TODO Auto-generated constructor stub
		this.url=url;
		this.port=i;
	}

	public void onCreate() throws UnknownHostException, IOException{
		try {
	        Boolean end = false;
	        ServerSocket ss = new ServerSocket();
	        while(!end){
	                //Server is waiting for client here, if needed
	                Socket s = ss.accept();
	                BufferedReader input = new BufferedReader(new InputStreamReader(s.getInputStream()));
	                PrintWriter output = new PrintWriter(s.getOutputStream(),true); //Autoflush
	                String st = input.readLine();
	                Log.d("Tcp Example", "From client: "+st);
	                output.println("Good bye and thanks for all the fish :)");
	                s.close();
	        }
	ss.close();
	       
	       
	} catch (UnknownHostException e) {
	        // TODO Auto-generated catch block
	        e.printStackTrace();
	} catch (IOException e) {
	        // TODO Auto-generated catch block
	        e.printStackTrace();
	}	
	}
	
}
