/**
 * Caesar Cipher => Encryption: CipherText = (PlainText+Key)mod26
 *               => Decryption: PlainText = (CipherText-Key)mod26
 * 
 * value of Key: 3
 * Enter the message: hello world 
 * Encryption Message: KHOOR ZRUOG 
 * Decryption Message: HELLO WORLD 
 */

import java.util.Scanner;

class Encrypt
{
    int pVal, encryptFormula;
    char encryptChar;
    
//    CipherText = (PlainText+Key)mod26
    public String getEncryptText(String alpha, int key, String message)
    {
        StringBuilder encryptText = new StringBuilder();
        for (int i = 0; i < message.length(); i++) {

            if(message.charAt(i) == ' ') {
                encryptText.append(' ');
            } else {
                pVal = alpha.indexOf(message.charAt(i));
                //encrypt formula
                encryptFormula = (pVal+key)%26;
                encryptChar = alpha.charAt(encryptFormula);
                encryptText.append(encryptChar);
            }
        }
        return encryptText.toString();
    }
}

class Decrypt
{
//    PlainText = (CipherText-Key)mod26
    int cVal, decryptFormula;
    char decryptChar;
    public String getDecryptText(String alpha, int key, String message)
    {
        StringBuilder decryptText = new StringBuilder();
        for (int i = 0; i < message.length(); i++) {
            if(message.charAt(i) == ' ') {
                decryptText.append(' ');
            } else {
                cVal = alpha.indexOf(message.charAt(i));
                //decrypt formula
                decryptFormula = (cVal-key)%26;
                decryptChar = alpha.charAt(decryptFormula);
                decryptText.append(decryptChar);
            }
        }
        return decryptText.toString();
    }
}

public class CaesarCipher {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        String alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        System.out.println("Enter the value of Key: (in int only)");
        int valOfKey=in.nextInt();
        in.nextLine();
        System.out.println("Enter the message: ");
        String message = in.nextLine();
        String convertToUpperCase = message.toUpperCase();

        Encrypt encrypt = new Encrypt();
        String cipherText = encrypt.getEncryptText(alphabets, valOfKey, convertToUpperCase);
        System.out.println("Encryption Message: " +cipherText);

        Decrypt decrypt = new Decrypt();
        String plainText = decrypt.getDecryptText(alphabets, valOfKey, cipherText);
        System.out.println("Decryption Message: " +plainText);
        
    }
}

