import java.util.*;
import java.io.*;
import java.lang.*;

class ALTARAY
{
    private int values[];
    private int result[];

    public boolean isAlternating(int a, int b)
    {
        if((a<0 && b>=0) || (a>=0 && b<0))
            return true;
        return false;
    }

    public static void main(String[] args) {
        ALTARAY obj = new ALTARAY();
        Scanner scanner = new Scanner(System.in);
        int numberOfTestCases = scanner.nextInt();
        while(numberOfTestCases>0)
        {
            numberOfTestCases--;
            int n = scanner.nextInt();
            obj.values = new int[n];
            obj.result = new int[n];
            for(int i=0; i<n; i++) 
            {
                obj.result[i] = 1;
                obj.values[i] = scanner.nextInt();
            }
            // logic
            for(int i=n-2; i>=0; i--)
            {
                if(obj.isAlternating(obj.values[i], obj.values[i+1]))
                    obj.result[i] = obj.result[i+1]+1;
            }
            for(int i=0; i<n;i++) 
                System.out.print(obj.result[i] + " "); 
            System.out.println();  
        }    
        scanner.close();
    }
}