import java.util.*;
import java.lang.*;
import java.io.*;

class KOL16J
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0) {
            t--;
            int n = scanner.nextInt();
            ArrayList<Integer> arrayList = new ArrayList<>();
            ArrayList<Integer> sortedList = new ArrayList<>();
            for(int i=0; i<n; i++) 
            {
                int temp = scanner.nextInt();
                arrayList.add(temp);
                sortedList.add(temp);
            }
            Collections.sort(sortedList);

            String ans = "yes";
            for(int i=0; i<n; i++) {
                if(i+1 != sortedList.get(i)) {
                    ans = "no";
                    break;
                }
            }
            if(ans.equals("yes")) {
                int cnt = 0;
                for(int i=0; i<n; i++) {
                    if(sortedList.get(i) != arrayList.get(i)) {
                        cnt++;
                        break;
                    }
                }
                if(cnt == 0)
                    ans = "no";
                else 
                    ans = "yes";
            }
            System.out.println(ans);
        }
        scanner.close();
    }
}