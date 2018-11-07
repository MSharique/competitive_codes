import java.util.*;
import java.io.*;
import java.lang.*;

class CK87MEDI
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0)
        {
            t--;
            int n = scanner.nextInt();
            int k = scanner.nextInt();
            ArrayList<Integer> arrayList = new ArrayList<>();
            for(int i=0;i<n;i++)
            {
                int temp = scanner.nextInt();
                arrayList.add(temp);
            }
            Collections.sort(arrayList);
            k += n;
            k /= 2;
            if(k<n)
                System.out.println(arrayList.get(k));
            else
                System.out.println(arrayList.get(n-1));
        }
        scanner.close();
    }
}