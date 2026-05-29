class cal {
	void sum()
	{
		int x,a,b;
		a=50;
		b=60;
		x=a+b;
		System.out.println("the sum is - "+x);
		
	}
	void display() {
		System.out.println("xyz");
	}
	
}
public class classes_object {
	public static void main(String args[]) {
		cal obj= new cal(); 
		//obj is object name, you can take anything
		//cal is the class name you must write your class name
		obj.sum();
		obj.sum();
		obj.sum();
		obj.sum();
		obj.display();
		obj.display();
		obj.display();
		//we can call any function from class "cal" using "obj"
	}


}
