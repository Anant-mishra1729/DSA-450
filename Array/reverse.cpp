#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
	--end;
	while (end > start)
	{
		swap(arr[end],arr[start]);
		start++;
		end--;
	}
}

void display(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}


void rotate_clockwise(int arr[],int size, int k)
{
	k = k % size; // Used for condition when k > size
	reverse(arr,0,size);
	reverse(arr,0,k);
	reverse(arr,k,size);
}

void rotate_anticlockwise(int arr[], int size, int k)
{
	k = k % size; // Used for condition when k > size
	reverse(arr,0,size);
	reverse(arr,0,size-k);
	reverse(arr,size-k,size);
}


int main()
{			  
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	// rotate_clockwise(arr,size,12);
	// display(arr,size);
	rotate_anticlockwise(arr,size,151);
	display(arr,size);
	return 0;
}