//this code returns the array containing applications in new configuration after K switches8 of given input postion 

import java.io.*;
class AltTab {
     public static int[] fun(int a,int b,int c[]){
          int appIndex = b-1;
          int appId = c[appIndex];
          for (int i = appIndex; i > 0; i--) {
               c[i] = c[i - 1];
          }
          c[0] = appId;
          return c;
  }
 public static void main(String[] args)
 {
  int[] num = { 4,1,3,7,6,8,5,2,10,9};
  int size = num.length;
  int d = 7;
  fun(size,d,num);

  for (int i = 0; i < num.length; i++) {
   System.out.print(" " + num[i]);

 }
}
}

