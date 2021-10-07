import java.util.*;
public class Solution
{
    public static void main(String [] args)
    {
        Scanner sc = new Scanner (System.in);

        int arr[][]=new int [6][6];

        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
                arr[i][j]=sc.nextInt();
        }

        int sum=0;

        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                int temp=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];

                if(i==0 && j==0)
                sum=temp;
                else if(temp>sum)
                    sum=temp;
            }
        }

        System.out.println(sum);
    }
}
