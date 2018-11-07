import java.lang.*;
import java.util.*;
import java.io.*;

class NW1
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0) {
            t--;
            int days = scanner.nextInt();
            String startDay = scanner.next();
            int start;
            if(startDay.equals("mon"))
                start = 0;
            else if(startDay.equals("tues"))
                start = 1;
            else if(startDay.equals("wed"))
                start = 2;
            else if(startDay.equals("thurs"))
                start = 3;
            else if(startDay.equals("fri"))
                start = 4;
            else if(startDay.equals("sat"))
                start = 5;
            else start = 6;
            
            int [] arr = new int[7];
            for(int i=0; i<7; i++)
                arr[i] = 0;
            for(int i=1; i<=days; i++) {
                arr[start]++;
                start = (start+1)%7;
            }
            for(int i=0; i<7; i++)
                System.out.print(arr[i] + " ");
            System.out.println();
        }
        scanner.close();
    }
}