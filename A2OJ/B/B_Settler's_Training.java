import java.io.*;
import java.util.*;

public class Codeforces {
	
	static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
	
	public static void main(String args[]) {
		
		FastReader sc = new FastReader();
		
		int n = sc.nextInt();
		int k = sc.nextInt();
		int count[] = new int[k+1];
		
		for(int i=1;i<=n;i++) {
			int x = sc.nextInt();
			count[x]++;
		}
		int ans = 0;
		
		while(count[k]<n) {
			ans++;
            for(int i=k-1;i>=1;i--)
            {
                if(count[i] > 0) {
                	count[i]--;
                    count[i+1]++;
                }
            }
		}
	    
		System.out.print(ans);
	    
    }
}