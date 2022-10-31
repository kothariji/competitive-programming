public class BuyAndSellStock {

    public static int maxProfit(int[] prices) {
       int min = Integer.MAX_VALUE;
       int profit = 0;
       int currprofit  = 0;
       
       for(int i = 0; i < prices.length; i++){
           if(prices[i] < min){
               min = prices[i];
           }
           currprofit = prices[i] - min;
           if(profit < currprofit){
               profit = currprofit;
           }
       }
       return profit;
   }
    public static void main(String[] args) {
        int prices[] = {7,1,5,3,6,4};
        System.out.println(maxProfit(prices));
    }
    
}
