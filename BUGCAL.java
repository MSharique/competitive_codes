import java.util.*;
import java.lang.*;
import java.io.*;

class BUGCAL
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t--;
            int num1 = scanner.nextInt();
            int num2 = scanner.nextInt();
            int [] digit1 = new int[11];
            int [] digit2 = new int[11];
            int [] ans = new int[11];
            for(int i=0;i<11; i++) 
            {
                digit1[i] = 0;
                digit2[i] = 0;
                ans[i] = 0;
            }
            int it =  10;
            while(num1>0){
                digit1[it--] = num1%10;
                num1 = num1/10;
            } 
            it =  10;
            while(num2>0){
                digit2[it--] = num2%10;
                num2 = num2/10;
            }
            for(int i=0; i<11; i++)
            {
                ans[i] = (digit1[i] + digit2[i])%10;
            }
            it = 0;
            int final_answer = 0;
            while(it<11){
                final_answer = (final_answer*10) + ans[it];
                it++;
            }
            System.out.println(final_answer);
        }
        scanner.close();
    }
}
