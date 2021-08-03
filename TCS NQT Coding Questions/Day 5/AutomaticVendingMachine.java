import java.util.Scanner;

public class AutomaticVendingMachine {

    public static void main(String... arg) {

        Scanner sc = new Scanner(System.in);

        String Coffee[] = { "Espresso Coffee", "Cappuccino Coffee", "Latte Coffee" };
        String Tea[] = { "Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea", "Masala Tea", "Lemon tea" };
        String Soup[] = { "Hot and Sour Soup", "Veg Corn Soup", "Tomate Soup" };

        String choose = sc.next();
        choose = choose.toUpperCase();
        int number = sc.nextInt();

        if (choose.equals("C")) {

            if (number > Coffee.length || number <= 0) {
                System.out.println("INVALID INPUT!");
            } else {
                System.out.println("WELCOME TO CCD");
                System.out.println("ENJOY YOUR " + Coffee[number - 1]);
            }

        } else if (choose.equals("T")) {
            if (number > Tea.length || number <= 0) {
                System.out.println("INVALID INPUT!");
            } else {
                System.out.println("WELCOME TO CCD");
                System.out.println("ENJOY YOUR " + Tea[number - 1]);
            }

        } else if (choose.equals("S")) {
            if (number > Soup.length || number <= 0) {
                System.out.println("INVALID INPUT!");
            } else {
                System.out.println("WELCOME TO CCD");
                System.out.println("ENJOY YOUR " + Soup[number - 1]);
            }
        } else {
            System.out.println("INVALID OUTPUT!");
        }
    }

}