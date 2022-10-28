public class RansomNote {
    
    public static boolean canConstruct(String r, String m) {
        
        int a[]=new int[26];
   
        int b[]=new int[26];
        for(int i =0; i<m.length();i++){
           a[ m.charAt(i)-'a']++;        
            
 
        }
        for(int i =0; i<r.length();i++){
                  
            b[r.charAt(i) - 'a']++;
 
        }
        
        for(int i =0; i<26;i++){
            
        a[i] =a[i] -b[i];
        }
        
        for(int i =0; i<26;i++){
            
         if(a[i]<0){
             return false;
         }
        }
        
        
        return true;
    }
    public static void main(String[] args) {
        String a = "aa";
        String b = "aab";
        System.out.println(canConstruct(a,b));
        System.out.println(canConstruct("a","b"));

    }
}
