import java.util.*;
import java.lang.*;
import java.io.*;

class SEGM01
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t--;
            String val = scanner.next();
            int startIndex = val.indexOf('1');
            int lastIndex = val.lastIndexOf('1');
            if(startIndex == -1)
            {
                System.out.println("NO");
            }
            else {
                String subVal = val.substring(startIndex, lastIndex+1);
                if(subVal.indexOf('0') == -1){
                    System.out.println("YES");
                }
                else {
                    System.out.println("NO");
                }
            }
        }
        scanner.close();
    }
}