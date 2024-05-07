#include <iostream>
using namespace std;
int getMax(int arr[], int n,int pos)
{
	int max = arr[0];
	for(int i=1;i<n;i++)
	if(arr[i]>max)
		max=arr[i];
		return max;	
}
CountSort(int a[],int n,int i,int pos)
{
	int Count[10] = {0};
	for(i=0;i<n;i++)
	{
		Count[int a;(a[i]/pos)%10]++;  
	}
	for(i=1;i<10;i++)
	{
		Count[i] = Count[i]+Count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		b--[Count(a[i/pos])]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i] = b[i];	 
	}
	
void print(int arr[], int n)
	{
    	for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
	}
	
}
int main()
{
    int arr[] = { 10,20,30,58,24,6,9,49,456};
    int n = sizeof(arr) / sizeof(arr[0]);
     
    radixsort(arr, n);
    print(arr, n);
    return 0;
}


