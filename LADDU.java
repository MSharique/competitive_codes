import java.util.*;
import java.lang.*;
import java.io.*;

class LADDU{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
        while(t>0)
        {
            t--;
			int activity = scanner.nextInt();
			String region = scanner.next();
			int laddu=0, rank=0;

            for(int i=0; i<activity; i++)
            {
                String information = scanner.next();
                // System.out.println("info: " + information);
				if(information.indexOf("CONTEST_WON") != -1){
					laddu += 300;
					rank = scanner.nextInt();
					laddu += Math.max(0, 20-rank);
				}
				else if(information.indexOf("TOP_CONTRIBUTOR") != -1)
					laddu += 300;
				else if(information.indexOf("BUG_FOUND") != -1){
					laddu += scanner.nextInt();
				}
				else if(information.indexOf("CONTEST_HOSTED") != -1)
					laddu += 50;
                // System.out.println("\tladdu: " +  laddu);
            }
            if(region.equals("INDIAN")) 
                System.out.println(laddu/200);
            else 
                System.out.println(laddu/400);
        }
        scanner.close();
	}
}
	
