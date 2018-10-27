import java.util.*;
import java.io.*;
import java.lang.*;

class TWONMS
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t--;
            long A = scanner.nextLong();
            long B = scanner.nextLong();
            int turns = scanner.nextInt();
            if(turns%2==1) {
                A = A + A;
            }
            long temp = Math.max(A, B);
            A = Math.min(A, B);
            temp = temp/A;
            System.out.println(temp);
        }
        scanner.close();
    }
}