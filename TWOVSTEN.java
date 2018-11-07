import java.util.*;
import java.lang.*;
import java.io.*;

class TWOVSTEN
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t--;
            int num = scanner.nextInt()%10;
            int ans = -1;
            if(num == 0)ans = 0;
            else if(num == 5)ans = 1;
            System.out.println(ans); 
        }
        scanner.close();
    }
}