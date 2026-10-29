package PKG2;
import java.util.*;
import PKG1.student;
public class marks extends student{
    int m1,m2,m3,total,avg;
   
    public void input(){
         Scanner sc=new Scanner(System.in);
        super.input();
        System.out.println("enter m1: ");
        m1=sc.nextInt();
        System.out.println("enter m2: ");
        m2=sc.nextInt();
        System.out.println("enter m3: ");
        m3=sc.nextInt();
    }
   public void calc(){
        total=m1+m2+m3;
        avg=total/3;
    }
   public void display()
    {
        super.display();
        System.out.println("Marks1: "+m1);
        System.out.println("Marks2: "+m2);
        System.out.println("Marks3: "+m3);
        System.out.println("Total marks: "+total);
        System.out.println("Average marks: : "+avg);
    }
}
