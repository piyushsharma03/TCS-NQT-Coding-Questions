
import java.util.Scanner;

public class washingmachine {
    public static void main(String arg[]) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int timeestimate = 0;

        if (n > 0 && n <= 2000) {
            timeestimate = 25;
            System.out.println("Time E2stimated:" + timeestimate);
        } else if (n > 2000 && n <= 4000) {
            timeestimate = 35;
            System.out.println("Time Estimated:" + timeestimate);
        } else if (n > 4000 && n <= 7000) {
            timeestimate = 45;
            System.out.println("Time Estimated:" + timeestimate);
        } else {
            System.out.println("INVALID INPUT");
        }
    }
}