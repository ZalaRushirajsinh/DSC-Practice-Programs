#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter the your number : ";
		i+1;
		cin>>arr[i];
		
	}
	for(int b=0;b<10;b++)
	{
		int count=0;
		for(int a=2;a<=arr[b]/2;a++)
		{
			if(arr[b]%a==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<< arr[b];
	
		}
	}
	return 0;
}
