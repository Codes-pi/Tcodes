public class twoD {
	public static void main(String args []) {
		int arr[][] = {{11,22,33,44,55},{10,20,30,40,50}};
		
		//for printing the whole array at once
		for (int i=0;i < arr.length;i++) {
			for(int j=0;j < arr[i].length; j++)
			{
				System.out.println(arr[i][j]);
			}
		}
	}
}
