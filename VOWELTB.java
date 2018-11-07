import java.lang.*;
import java.io.*;
import java.util.*;

class VOWELTB
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char c = scanner.next().charAt(0);
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            System.out.println("Vowel");
        }
        else {
            System.out.println("Consonant");
        }
        scanner.close();
    }
}