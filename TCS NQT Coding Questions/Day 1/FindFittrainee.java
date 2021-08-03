import java.util.Scanner;

public class FindFittrainee {
    public static void main(String arg[]) {

        Scanner sc = new Scanner(System.in);
        int[] trainee = new int[10];
        int[] Calc = new int[10];
        int oxy, i, j;
        int sum = 0;

        System.out.println("Round-1");
        for (i = 0; i < 3; i++) {
            System.out.print("Enter Oxygen level of " + (i + 1) + " trainee : ");
            oxy = sc.nextInt();
            if (oxy >= 1 && oxy <= 100)
                trainee[i] = oxy;
            else
                System.out.println("invalid input");
        }

        System.out.println("Round-2");
        for (j = i; j < 6; j++) {
            System.out.print("Enter Oxygen level of " + (j + 1) + " trainee : ");
            oxy = sc.nextInt();
            trainee[j] = oxy;
        }

        System.out.println("Round-3");
        for (int k = j; k < 9; k++) {
            System.out.print("Enter Oxygen level of " + (k + 1) + " trainee : ");
            oxy = sc.nextInt();
            trainee[k] = oxy;
        }

        for (int k = 0; k < 3; k++) {
            for (int c = k; c < 9; c++) {
                sum = sum + trainee[c];
                c = c + 2;
            }
            sum = sum / 3;
            Calc[k] = sum;
            System.out.println("Average value of trainee no  " + (k + 1) + " is : " + Calc[k]);
            sum = 0;
        }

    }

}
