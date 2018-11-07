import java.util.*;
import java.lang.*;
import java.io.*;

class TEMPLEA
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t -= 1;
            int n = scanner.nextInt();
            int step = 1;
            int expNUm = 1;
            int ans = 0;
            for(int i=0;i<n;i++)
            {
                int num = scanner.nextInt();
                // System.out.println("comparing " + num + " with " + expNUm);
                if(num != expNUm) {
                    ans = 1;
                }

                if(i == (n/2)){
                    step = -1;
                }
                expNUm += step;
            }

            if(ans == 0 && expNUm == 0) {
                System.out.println("yes");
            }
            else 
                System.out.println("no");
        }
    }
}