import java.util.*;
import java.lang.*;
import java.io.*;

class DWNLD
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numberOfTestCases = scanner.nextInt();
        while(numberOfTestCases>0)
        {
            numberOfTestCases--;
            int n = scanner.nextInt();
            int k = scanner.nextInt();
            int a, b, ans = 0;
            for(int i=0; i<n; i++)
            {
                a = scanner.nextInt();
                b = scanner.nextInt();
                if(k>=a)
                {
                    k -= a;
                    a = 0;
                }
                else {
                    a = a-k;
                    k=0;
                }
                ans += a*b;
            }
            System.out.println(ans);
        }
        scanner.close();
    }
}