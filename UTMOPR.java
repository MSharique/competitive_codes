import java.util.*;
import java.lang.*;
import java.io.*;

class UTMOPR
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t--;
            int n = scanner.nextInt();
            int k = scanner.nextInt();
            int ans = 0;
            for(int i=0; i<n; i++)
            {
                int num = scanner.nextInt();
                ans = (ans + (num%2))%2;
            }
            String toPrint = "even";
            if(k==1) {
                toPrint = (ans == 0 ? "odd" : "even");
            }
            System.out.println(toPrint);
        }
        scanner.close();
    }
}