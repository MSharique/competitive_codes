import java.util.*;
import java.io.*;
import java.lang.System;

class CO92JUDG {
    public static void main(String[] args) {
        Scanner scanner  = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0){
            t--;
            int n = scanner.nextInt();
            int aliceTime = 0, bobTime = 0, maxAlice = 0, maxBob = 0;
            for(int i=0; i<n; i++) {
                int temp = scanner.nextInt();
                aliceTime += temp;
                maxAlice = Math.max(maxAlice, temp);
            }
            for(int i=0; i<n; i++) {
                int temp = scanner.nextInt();
                bobTime += temp;
                maxBob = Math.max(maxBob, temp);
            }
            aliceTime -= maxAlice;
            bobTime -= maxBob;

            if(aliceTime < bobTime)
                System.out.println("Alice");
            else if(bobTime < aliceTime)
                System.out.println("Bob");
            else 
                System.out.println("Draw");
        }
    }
}