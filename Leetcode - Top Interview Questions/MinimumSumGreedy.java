import java.util.*;
class MinimumSumGreedy{
    public static void main(String[] args) {
        int n = 6;
        int arr[] = {6, 8, 4, 5, 2, 3};
        Solution s  = new Solution();
       long a = s.minSum(arr,n);
       System.out.print(a);
    }
}

class Solution {
    
    public static long minSum(int arr[], int n)
    {
        // Your code goes here
        PriorityQueue<Integer>pq = new PriorityQueue<>();
        for(int i = 0; i<n ; i++){
            pq.offer(arr[i]);
        }
        String num1 = "" ;
        String num2 = "";
        while(pq.size() > 0){
          num1 += pq.poll().toString();
          if(pq.size() > 0) num2 += pq.poll().toString();
        }
        if(num1.length() == 0) num1 += '0';
         if(num2.length() == 0) num2 += '0';
       long i= Long.parseLong(num1); 
       long j= Long.parseLong(num2); 
       long sum = i + j;
        return sum;
        
    }
}
