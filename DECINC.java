import java.util.*;
import java.lang.*;
import java.io.*;

class DECINC
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        num = (num%4==0? num+1 : num-1);
        System.out.print(num);
        scanner.close();
    }
}