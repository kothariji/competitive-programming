/**
 * Counting a number of Special Character in a given string 
 * this logic totally works on ascii values 
 * 
 * Enter a String to Count Number of Special Characters: Hell# Wor$$
 * Number of Special Characters (including whitespaces): 4
 * 
 */


import java.util.Scanner;

public class CountSpecialCharacter
{
    public static int getNumOfSpecialCharacters(String text)
    {
        int count=1;
        int specialCharacters = 0;
        for (int i = 0; i < text.length(); i++) {
            char ch = text.charAt(i);
            if(ch>=32 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=126) {
                specialCharacters += count;
            }
        }
        return specialCharacters;
    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.println("Enter a String to Count Number of Special Characters: ");
        String str = in.nextLine();

        int result = getNumOfSpecialCharacters(str);
        System.out.println("Number of Special Characters (including whitespaces): " +result);

    }
}