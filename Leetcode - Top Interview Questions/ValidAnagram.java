import java.util.Arrays;

public class ValidAnagram {
    public boolean isAnagram(String s, String t) {
        int[] str=new int[26];
        int[] temp=new int[26];
        for(int i=0;i<s.length();i++)
        {
            str[s.charAt(i)-'a']++;
        }
        for(int i=0;i<t.length();i++)
        {
            temp[t.charAt(i)-'a']++;
        }

        if(Arrays.equals(str,temp))
            return true;
        else
            return false;
    }
}
