#include <iostream>
using namespace std;

// Time complexity
// Array -> Ascending = 1 + (n - 2) (Best Case)
// Array -> Descending = 1 + 2(n-2) (Worst Case)

int main()
{
	int arr[] = {25,1,4,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	if(n == 1)
	{
 		cout << arr[0] << arr[1];
 	}
 	else
 	{
 		int max,min;
 		if(arr[0] > arr[1])
 		{
 			max = arr[0];
 			min = arr[1];
 		}
 		else
 		{
 			max = arr[1];
 			min = arr[0];
 		}

		for(int i = 2; i < n; i++)
		{
			if (arr[i] > max)
				max = arr[i];
			else if (arr[i] < min)
				min = arr[i];
		}
		cout << max << " " << min;
 	}
	return 0;
}