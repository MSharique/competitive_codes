import java.io.*;
import java.lang.*;
import java.util.*;

class NOTINCOM
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t--;
            int n = scanner.nextInt();
            int m = scanner.nextInt();
            Set<Integer> st = new HashSet<>();
            n+=m;
            for(int i=0;i<n;i++)
            {
                int temp = scanner.nextInt();
                st.add(temp);
            }
            System.out.println(n-st.size());
        }
        scanner.close();
    }
}