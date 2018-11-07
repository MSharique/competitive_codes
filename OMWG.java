import java.util.*;
import java.lang.*;
import java.io.*;

class OMWG
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t--;
            int n = scanner.nextInt();
            int m = scanner.nextInt();
            n = (n-1)*(m-1)*2 + n + m -2;
            System.out.println(n);
        }
        scanner.close();
    }
}