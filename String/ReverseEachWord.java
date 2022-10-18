// reversing a string while preserving the position 
/*
   input:  hello world
   output: olleh dlrow
*/  

import java.util.Scanner;

public class ReverseEachWord {

    public static String reverseSentence(String text)
    {
        String myText = text.toLowerCase();
        StringBuilder text2 = new StringBuilder();
        String []a = myText.split(" ");

        for (int i = 0; i < a.length; i++) {
            for (int j = a[i].length() -1; j >= 0; j--) {
                text2.append(a[i].charAt(j));
            }
            text2.append(" ");
        }
        return text2.toString();
    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.println("Enter a String: ");
        String str = in.nextLine();

        String result = reverseSentence(str);
        System.out.println("Reverse String while preserving the position: " +result);
    }
}

