import java.util.*;
import java.lang.*;
import java.io.*;

class ELEVSTRS
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0) 
        {
            t--;
            double n = scanner.nextDouble();
            double v1 = scanner.nextDouble();
            double v2 = scanner.nextDouble();
            v1 *= v1 * 2;
            v2 *= v2;
            String toPrint = "";
            if(v1 < v2) 
                toPrint = "Elevator";
            else
                toPrint = "Stairs";
            System.out.println(toPrint); 
        }
    }
}