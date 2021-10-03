// Java Code to illustate Optimized Bubble Sorting

import java.util.*;
import java.io.*;

public class BubbleSort{

public static void main(String args[]){
  //Declarartion of required variables
  int size,temp;
  Scanner sc=new Scanner(System.in);
  int c=0;
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
  //Outer Loop
  for (int index = 0; index < size; index++) {
    //Inner Loop
    for (int j = 0; j < size - 1 - index; j++) {
      //Checking if the adjacent element is larger 
      if (arr[j] > arr[j + 1]) {
        //Swapping the elements, temp is used to store the temporary variable
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        c++;
      }
    }
    if(c<1){
      break;
    }
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
 Enter the size of an array: 5
 Enter the elements of an array :
 7 9 8 2 4
 Output :
 2 4 7 8 9
 Time Complexity :O(n)
 Space Complexity :O(1)
*/
