package cs162_lab1;

public class recursion {
	public static double summer(double array[],int size)
	{
		System.out.println("Entered recursive funtion with size: "+size);
		if(size < 0)
		{
			System.out.println("Base case hit");
			return 0;
		}
		else
		{
			return array[size] + summer(array,size-1);
		}
	}
	
	public static void main(String[] args) {
		double[] myArray = {1,2,3,4,5};
		double ans = summer(myArray,myArray.length-1);
		System.out.println("The summation is: " + ans);
		

	}

}
