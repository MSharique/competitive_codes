import java.io.*;
import java.lang.*;
import java.util.*;

class FBMT {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0) {
            t--;
            int n = scanner.nextInt();
            int score_a = 0, score_b = 0;
            String team_a = "", team_b = "";
            while(n>0) {
                n--;
                String temp = scanner.next();
                if(team_a.equals("")) {
                    team_a = temp;
                    score_a++;
                }
                else {
                    if(team_a.equals(temp)) {
                        score_a++;
                    }
                    else {
                        team_b = temp;
                        score_b++;
                    }
                }
            }
            if(score_a > score_b)
                System.out.println(team_a);
            else if(score_b > score_a)
                System.out.println(team_b);
            else 
                System.out.println("Draw");
        }
        scanner.close();
    }
}