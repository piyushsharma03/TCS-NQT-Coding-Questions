import java.util.Scanner;
import java.util.StringTokenizer;

public class CaiserCyphertextConvertor {

    static int CustomCaesarCipher(int key, String s) {

        StringTokenizer st = new StringTokenizer(s, " ");
        String s1[] = new String[10];
        int i = 0;
        String temp = "";

        while (st.hasMoreTokens()) {
            s1[i] = st.nextToken();
            temp = temp + s1[i];
            i++;
        }

        char c[] = temp.toCharArray();

        if (key == 0 && key > 25) {
            System.out.println("INVALID INPUTs");
            return 0;
        }

        int ascii = 0;
        i = 0;

        for (i = 0; i < c.length; i++) {
            ascii = c[i];
            if (ascii >= 97 || ascii <= 122) {
                ascii = ascii + key;
                c[i] = c[ascii];
            }
        }
    }

    public static void main(String arg[]) {

        Scanner sc = new Scanner(System.in);
        String s = "";
        int key;

        System.out.print("Enter your PlainText:");
        s = sc.nextLine();

        System.out.print("Enter the key:");
        key = sc.nextInt();

        CustomCaesarCipher(key, s);
    }
}
