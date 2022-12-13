#include <iostream>

using namespace std;

int binarySearch(int arr[], const int sz, int key)
{
	int l = 0;
	int r = sz;
	int mid = (l+r)/2;
	while (l <= r)
	{
		if (arr[mid] == key)
		{
			return mid;
		}
		if ((arr[mid + 1]) == key)
		{
			return mid + 1;
		}
		if ((arr[mid - 1]) == key)
		{
			return mid - 1;
		}
		if (arr[mid] > key)
		{
			mid = mid - (mid / 2);
		}
		else
		{
			mid = mid + (mid / 2);
		}
	}
}

int main()
{
	const int sz = 100;
	int arr[sz];
	for (int i = 0; i < sz; i++)
	{
		arr[i] = i+1;
		cout << arr[i] << " ";
	}

	int key;
	cout << "\n\tEnter the number you want to find: \n";
	cin >> key;

	cout << "The position of your number is: " << binarySearch(arr, sz, key) << endl;

	

	return 0;
}