import java.util.Scanner;  
public class CheckPerfectSquareExample1  
{   
//user-defined method that checks the number is perfect square or not  
static boolean checkPerfectSquare(double number)    
{   
//calculating the square root of the given number  
double sqrt=Math.sqrt(number);   
//finds the floor value of the square root and comparing it with zero  
return ((sqrt - Math.floor(sqrt)) == 0);   
}   
//main method  
public static void main(String[] args)    
{   
System.out.print("Enter any number: ");  
//object of the Scanner class  
Scanner sc=new Scanner(System.in);  
//reading a number of type double from the user  
double number=sc.nextDouble();   
//calling the user defined method  
if (checkPerfectSquare(number))   
System.out.print("Yes, the given number is perfect square.");   
else  
System.out.print("No, the given number is not perfect square.");   
}   
}   
