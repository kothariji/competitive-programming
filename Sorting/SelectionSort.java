// Java Code to implement Selection Sorting Technique

import java.util.*;
public class SelectionSort{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Input:\n");
        System.out.println("Enter the size of an array : \n");
        int size=sc.nextInt();
        sc.nextLine();
        int arr[]=new int[size];
        System.out.println("Enter the elements of an array :\n");
        for(int index = 0; index < size; index++) {
             arr[index]=sc.nextInt();
        }
        //Algorithms for Selection Sorting
        for(int k=0;k<size-1;k++)
        {
            int indx=k;
            for(int j=k+1;j<size;j++)
            {
                if(arr[indx]>arr[j])
                {
                    indx=j;
                }
            }
            //Swapping of values when found minimum 
            int temp=arr[indx];
            arr[indx]=arr[k];
            arr[k]=temp;
        }
        //Displaying Output
        System.out.println("Output:\n");
        for(int i=0;i<size;i++)
        {
            System.out.print(arr[i]+" ");
        }
        
    }
}

/*
Input:

Enter the size of an array : 5 

Enter the elements of an array :
64 22 12 25 11

Output:

11 12 22 25 64 

Time Complexity: O(n^2)
Space Complexity: O(1)

*/
