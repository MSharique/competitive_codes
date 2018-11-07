import java.lang.*;
import java.io.*;
import java.util.*;

class BRLADDER
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t--;
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int temp = Math.max(a, b);
            b = Math.min(a, b);
            String ans = "";
            a = temp-b;
            if(b%2==0)
            {
                if(a==2)
                    ans = "YES";
                else
                    ans = "NO";
            }
            else 
            {
                if(a<3)
                    ans ="YES";
                else
                    ans = "NO";
            }
            System.out.println(ans);
        }
        scanner.close();
    }
}