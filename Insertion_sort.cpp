// Author: Aslam Khan
// Email : aslamkhanofficial@yahoo.com
// Institute : Air University Islamabad

#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	int n = 10;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter Value " << i + 1 << " = ";
		cin >> arr[i];
	}

	int key, j;
	for (int i = 1; i < n ; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = key;
	}

	cout << endl << "Sorted.." << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;



	system("pause");
}
