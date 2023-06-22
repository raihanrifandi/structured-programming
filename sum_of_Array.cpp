#include <iostream>
using namespace std;

void sum(int* array, int length)
{
	int i, sum_of_array = 0;
	for (i = 0; i < length; i++)
		sum_of_array = sum_of_array + *(array + i);
	cout << "sum of array is = " << sum_of_array;
}

int main()
{
	int array[] = {1,2,3};
	sum(array, 3);
	return 0;
}
