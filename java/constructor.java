import java.util.*;
class test{
    int a[], size;
    test(int c)
    {
        size=c;
        a=new int[size];
    }
    void input()
    {
        Scanner sc= new Scanner(System.in);
        for (int i=0;i<size;i++)
        {
            System.out.println("enter data: ");
            a[i]= sc.nextInt();
        }
    }
    void display()
    {
        for(int i =0; i<size;i++)
        {
            System.out.print(a[i]+"    ");
        }
        System.out.println();
    }
}
public class constructor {
    public static void main(String args[])
    {
        test ob1=new test(5);
        test ob2=new test(3);
        System.out.println("enter element for 1st array");
        ob1.input();
        System.out.println("enter element for 2nd array ");
        ob2.input();
        ob1.display();
        ob2.display();
    }
}
