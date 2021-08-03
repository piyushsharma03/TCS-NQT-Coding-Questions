import java.util.*;

public class ChainMarketing {
    public static void main(String arg[]) {

        String parent, check, child;
        String childs[] = new String[20];
        int[] comiss = new int[20];
        int fixedamount = 5000, i = 0, j = 0;

        Scanner sc = new Scanner(System.in);
        parent = sc.nextLine();
        check = sc.nextLine();

        check = check.toUpperCase();

        if (check.equals("Y")) {

            child = sc.nextLine();

            StringTokenizer st = new StringTokenizer(child, ",");

            while (st.hasMoreElements()) {
                childs[i] = st.nextToken();
                i++;
            }

            System.out.println("TOTAL MEMBERS:" + (i + 1));
            System.out.println("COMISSION DETAILS");

            while (j <= i) {
                if (j == 0) {
                    comiss[j] = ((fixedamount * 10) / 100) * i;
                } else {
                    comiss[j] = (fixedamount * 5) / 100;
                }
                j++;
            }

            j = 0;

            while (j <= i) {

                if (j == 0) {
                    System.out.println(parent + ":" + comiss[j] + " INR");
                } else {
                    System.out.println(childs[j - 1] + ":" + comiss[j] + " INR");
                }
                j++;
            }

        } else {
            System.out.println("TOTAL MEMBERS:1");
            System.out.println("COMISSION DETAILS");
            System.out.println(parent + ":250INR");
        }

    }
}