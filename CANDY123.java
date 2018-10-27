import java.util.*;
import java.lang.*;
import java.io.*;

class CANDY123
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0)
        {
            t--;
            int a = sc.nextInt();
            int b = sc.nextInt();
            for(int i=1;i<=1000;i++)
            {
                // odd - Limak turn 
                if(i%2 == 1) {
                    if(a>=i)
                        a = a-i;
                    else {
                        System.out.println("Bob");
                        break;
                    }
                }
                // even - Bob turn
                else {
                    if(b>=i)
                        b = b - i;
                    else {
                        System.out.println("Limak");
                        break;
                    }
                }
            }
        }
        sc.close();
    }
}