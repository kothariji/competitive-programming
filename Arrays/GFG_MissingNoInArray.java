package geeksforgeeks;
import java.util.*;
public class MissingNoInArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		
		while(t>0) {
			int arrSum = 0;
			int agg = 0;
			int N = scanner.nextInt();
			int []C = new int[N];
			agg = (N * (N+1)) / 2;
			for(int i=0;i<N-1;i++) {
				
				C[i] = scanner.nextInt();
				if(C[i] <= N && C[i] > 0)  {
				arrSum  = arrSum  + C[i];
				}
				else 
				{
					}
			
			
			}
			System.out.println(agg - arrSum +" ");
			
			t--;
		
	}

	}}
