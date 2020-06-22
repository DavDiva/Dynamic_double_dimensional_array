#include <iostream>
using namespace std;

int main()
{
	int rows = 5;
	int cols = 8;
	int** arr = new int * [rows]; // declare the array using dynamic memory
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) //fill the array
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}
	for (int i = 0; i < rows; i++)//print the array
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


	for (int i = 0; i < rows; i++)//delete the array from the dynamic memory
	{
		delete[] arr[i];
	}

	delete[] arr;

}

