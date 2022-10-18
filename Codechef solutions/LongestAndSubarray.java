import java.util.*;

public class LongestAndSubarray {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			int res = (int)Math.ceil(n / 2.0);
			System.out.println(res);
		}
		sc.close();
	}

}
