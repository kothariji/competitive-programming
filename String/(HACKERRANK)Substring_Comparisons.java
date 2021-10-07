

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        
        int len=s.length();
        int t=len-k+1;

        String arr[]=new String[t];
        for(int i=0;i<t;i++)
        {
            arr[i]=s.substring(i,i+k);
        }

        for (int i = 0 ;i< t-1; i++)
        {
         int min = i;

         for (int j = i+1; j<t; j++)
         {
            if (arr[j].compareTo(arr[min])<0)
            {
             min = j;
            }
         }
         String temp = arr[min];
         arr[min] = arr[i];
         arr[i] = temp;
      }
        
        smallest=arr[0];
        largest=arr[t-1];
        return smallest + "\n" + largest;
    }
