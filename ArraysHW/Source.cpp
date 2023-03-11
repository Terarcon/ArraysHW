#include<iostream>
using namespace std;

void main()
{
	const int n = 5;
	int array[n] = { 3,5,8,6,2 };
	int sum = 0;

	cout << "Array elements: " << endl;
	for (int i = 0; i < n; i++)
	{
		sum = sum + array[i];
		cout << array[i] << "\t";
	}
	cout << "\nSum of array elements: " << sum << endl;
	cout << "Average: " << (float)sum / n << endl;

	int min = array[0], max = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	cout << "Min value of array: " << min << endl;
	cout << "Max value of array: " << max << endl;
}