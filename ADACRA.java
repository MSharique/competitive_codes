import java.lang.*;
import java.util.*;
import java.io.*;

class ADACRA
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t--;
            String crayons = scanner.next();
            int upCount =0;
            int downCount=0;
            if(crayons.charAt(0) == 'U')
                upCount++;
            else
                downCount++;

            for(int i=1;i<crayons.length(); i++)
            {
                if(crayons.charAt(i) != crayons.charAt(i-1)){
                    if(crayons.charAt(i) == 'U')
                        upCount++;
                    else
                        downCount++;
                }
            }
            System.out.println(Math.min(upCount, downCount));
        }
        scanner.close();
    }
}