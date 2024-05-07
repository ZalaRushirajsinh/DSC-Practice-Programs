#include<iostream>
using namespace std;
int main()
{
	int d;
	cout<<"enter the number of elements : ";
	cin>>d;
	int a[d];
	for(int k=0;k<d;k++)
	{
		cout<<"enter elements :";
		cin>>a[k];
	}
	for(int i=0;i<d-1;i++)
	{
		int flag=0;
		for(int j=0;j<d-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	for(int i=0;i<d;i++)
	{
		cout<<" "<<a[i];
	}
	return 0;		
}
