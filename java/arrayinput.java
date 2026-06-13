import java.util.*;
public class arrayinput {
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the size of array");
		int size = sc.nextInt();
		int num[] = new int[size];
		System.out.println("enter " + size + "integer");
		//input of array
		for (int i=0;i < num.length;i++) {
			num[i]=sc.nextInt();
		}
		//display
		for (int i=0;i < num.length;i++) {
			System.out.println(num[i]);
		}
	}

}
