import java.math.BigInteger;
import java.util.*;
public class solution2
{
    public static void main(String [] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        BigInteger ans= BigInteger.valueOf(1);

        for(int i=1;i<=n;i++)
            ans=ans.multiply(BigInteger.valueOf(i));

        System.out.println(ans);


    }
}
