import java.io.*;
import java.lang.*;
import java.util.*;

class SNAKPROC
{
    public static void main(String[] args) {
        int t, n;
        String input, ht;
        Scanner scanner = new Scanner(System.in);
        t = scanner.nextInt();
        while(t>0) {
            t--;
            n = scanner.nextInt();
            input = scanner.next();
            ht = "";
            for(int i=0; i<n; i++) {
                if(input.charAt(i) != '.') ht+= input.charAt(i);
            }
            n = ht.split("HT", -1).length-1;
            if(n*2 == ht.length())
                System.out.println("Valid");
            else
                System.out.println("Invalid");
        }
    }
}