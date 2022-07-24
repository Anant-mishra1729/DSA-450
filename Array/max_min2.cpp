#include <bits/stdc++.h>
using namespace std;

// Using divide and conquer
// Time complexity -> 3n/2 - 2

struct MaxMin
{
	int max;
	int min;
};

MaxMin max_min(int arr[], int l, int h)
{
	MaxMin res;
	if (l == h)
	{
		res.min = arr[l];
		res.max = arr[l];
		return res;
	}
	if (h - l == 1)
	{
		if (arr[l] < arr[h])
		{
			res.min = arr[l];
			res.max = arr[h];
		}
		else
		{
			res.min = arr[h];
			res.max = arr[l];
		}
		return res;
	}
	MaxMin mml, mmr;
	int mid = l + (h - l) / 2;
	mml = max_min(arr, 0, mid);
	mmr = max_min(arr, mid + 1, h);

	if (mml.min < mmr.min)
	{
		res.min = mml.min;
	}
	else
	{
		res.min = mmr.min;
	}

	if (mml.max > mmr.max)
	{
		res.max = mml.max;
	}
	else
	{
		res.max = mmr.max;
	}

	return res;
}

int main()
{
	int arr[] = {1, 2, -3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	MaxMin res = max_min(arr, 0, n - 1);
	cout << res.max << "\n";
	cout << res.min << "\n";
	return 0;
}