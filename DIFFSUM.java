import java.util.*;
import java.io.*;
import java.lang.*;

class DIFFSUM
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        if(num1>num2)
            num1 = num1 - num2;
        else
            num1 += num2;
        System.out.println(num1);
    }
}