#include <iostream>

double summer(double array[],int size)
{
	if(size <0)
	{
		return 0;
	}
	else
	{
		return array[size]+summer(array,size-1);
	}
}


int main(int argc, char* argv[])
{
   	std::cout<<"Entered Main"<<std::endl;
	double myArray[] = {1,2,3,4,5};
	int size = sizeof(myArray)/sizeof(*myArray);
	std::cout<<"Size of array is: "<<size<<std::endl;

	double ans = summer(myArray,size-1);

	std::cout<<"Summation is: "<<ans<<std::endl;



	return 0;
}
