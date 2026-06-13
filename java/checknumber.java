import java.util.*;

public class checknumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        // Input from user
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        // Check positive, negative, or zero
        if (num > 0) {
            System.out.println(num + " is Positive.");
        } else if (num < 0) {
            System.out.println(num + " is Negative.");
        } else {
            System.out.println("The number is Zero.");
        }


    }
}
