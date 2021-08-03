import java.util.*;

public class DoctorEarn {
    public static void main(String... arg) {

        Scanner sc = new Scanner(System.in);
        int[] age = new int[20];
        int i = 0, count = 0;
        String c = "";

        while (i < age.length) {
            c = sc.nextLine();
            if (c.equals("")) {
                break;
            }

            count = Integer.parseInt(c);

            if (count <= 0 || count >= 120) {
                System.out.println("INVALID INPUT");
                System.exit(0);
            }

            age[i] = count;
            i++;
        }

        int j = 0;
        while (j < i) {
            if (age[i] >= 0 && age[i] <= 17) {
                count = count + 200;
            }
        }

        System.out.println("Exited");
    }
}