import java.util.*;
import java.lang.*;
import java.io.*;

class STICKS
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numOfTestCase = scanner.nextInt();
        while(numOfTestCase > 0)
        {
            numOfTestCase--;
            int maxSize = 1001;
            int input[] = new int[maxSize];
            for(int i=0; i<maxSize; i++)
            {
                input[i] = 0;
            }
            int n = scanner.nextInt();
            while(n>0)
            {
                n--;
                int temp = scanner.nextInt();
                input[temp]++;                
            }

            int highest=0, high = 0;
            for(int i=0; i<maxSize; i++)
            {
                if(input[i]>3)
                {
                    high = highest = i;
                }
                else if(input[i] > 1)
                {
                    high = highest;
                    highest = i;
                }
            }
            high = highest * high;
            if(high == 0)
                System.out.println(-1);
            else
                System.out.println(high);
        }
        scanner.close();
    }
}