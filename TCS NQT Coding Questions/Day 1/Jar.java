import java.util.Scanner;

public class Jar {

    static void BuyCandies(int capacity, int n) {
        int k = 5;
        if (n == 0 && n >= k) {
            System.out.println("INVALID INPUT");
            System.out.println("NUMBER OF CANDIES AVAILABLE = " + capacity);
            return;
        }
        k = capacity - n;
        System.out.println(" NUMBER OF CANDIES SOLD = " + n);
        System.out.println(" NUMBER OF CANDIES AVAILABLE = " + k);
        k = k + n;
    }

    public static void main(String arg[]) {

        Scanner sc = new Scanner(System.in);
        int capacity = 10;

        System.out.print("Enter number of candies you want to buy :");
        int n = sc.nextInt();

        BuyCandies(capacity, n);
    }

}