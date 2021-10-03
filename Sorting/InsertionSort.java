// Java Code to illustate Insertion sorting

import java.util.*;
import java.io.*;

public class InsertionSort{

public static void main(String args[]){
  //Declarartion of required variables
  int size;
  Scanner sc=new Scanner(System.in);
  //Reading Input
  System.out.println("Input :\n");
  System.out.println("Enter the size of an array : \n");
   size=sc.nextInt();
   sc.nextLine();
    int arr[]=new int[size];
  System.out.println("Enter the elements of an array :\n");
  for(int index = 0; index < size; index++) {
          arr[index]=sc.nextInt();
  }
  for (int index =1; index < size; index++) {
    int temp=arr[index];
    int j=index-1;
    while(j>=0 && arr[j] > temp) {
        //Swapping the elements, temp is used to store the temporary variable
        arr[j + 1] = arr[j];
        j=j-1;
      }
      arr[j+1]=temp;
    }
  //Displaying Output
  System.out.println("Output :\n");
  System.out.println("The sorted array is :\n");
  for (int index = 0; index < size; index++) {
   System.out.print(arr[index]+" ");
  }
 
}
}

/*
 Input:
 Enter the size of an array: 4
 Enter the elements of an array :
 10 8 1 4
 Output :
 1 4 8 10 
 Time Complexity :O(n^2)
 Space Complexity :O(1)
*/