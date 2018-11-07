import java.util.*;
import java.lang.*;
import java.io.*;

class CHEFSTUD
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0) {
            t--;
            String talk = scanner.next();
            // System.out.println("initial: " + talk);
            talk = talk.replaceAll("<", "#");
            // System.out.println("it1: " + talk);
            talk = talk.replaceAll(">", "<");
            // System.out.println("it2: " + talk);
            talk = talk.replaceAll("#", ">");
            // System.out.println("final: " + talk);
            int ans = talk.split("><", -1).length-1;
            System.out.println(ans);
        }
    }
}