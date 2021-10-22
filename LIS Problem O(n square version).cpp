//DO O(nlogn as well)

#include<bits/stdc++.h>

using namespace std;


int lis(int a[],int n)
{
	int LIS[n]={1};
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				LIS[i]=max(LIS[i],(1+LIS[j]));
			}
		}
	}
	
	return *max_element(LIS,LIS+n);
}


int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<"Length of lis is "<< lis(arr, n);
    return 0;
}
