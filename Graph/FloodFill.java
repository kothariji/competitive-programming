import java.util.Scanner;

// This algorightm is used to fill color in picture in particular boundaries
public class FloodFill {
	// These columns(M) and rows(N)
	static int M = 8; 
	static int N = 8; 
	
	static void floodFill(int screen[][],int x,int y,int newSec,int prev) {
		if(x<0 || y<0 || x>=M || y>=N || screen[x][y] != prev) {
			return;
		}
		
		screen[x][y] = newSec;
		
		floodFill(screen,x-1,y,newSec,prev);
		floodFill(screen,x+1,y,newSec,prev);
		floodFill(screen,x, y+1,newSec,prev);
		floodFill(screen,x,y-1,newSec,prev);
	}

	public static void main(String[] args) {
        // You can also input this screen array but have to change value of M and N.
		int screen[][] = {{1, 1, 1, 1, 1, 1, 1, 1}, 
                {1, 1, 1, 1, 1, 1, 0, 0}, 
                {1, 0, 0, 1, 1, 0, 1, 1}, 
                {1, 2, 2, 2, 2, 0, 1, 0}, 
                {1, 1, 1, 2, 2, 0, 1, 0}, 
                {1, 1, 1, 2, 2, 2, 2, 0}, 
                {1, 1, 1, 1, 1, 2, 1, 1}, 
                {1, 1, 1, 1, 1, 2, 2, 1}, 
                }; 
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the character you want to replace: ");
		
		int prev = sc.nextInt();
		
		System.out.print("Enter the index(i,j) of : ");
		
		int x = sc.nextInt();
		int y = sc.nextInt();
		
		System.out.print("Enter the new number: ");
		
		int newC = sc.nextInt();
		
		floodFill(screen, x, y, newC,prev); 

		System.out.println("Updated screen after call to floodFill: "); 
			for (int i = 0; i < M; i++) 
				{ 
					for (int j = 0; j < N; j++) 
							System.out.print(screen[i][j] + " "); 
					System.out.println(); 
				} 
			
			sc.close();
	}

}