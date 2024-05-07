#include<iostream>
using namespace std;
string operand(char);
int main()
{
	string str;
	cout<<endl<<"Enter The String :";
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		cout<<endl<<str.at(i)<<"-"<<operand(str.at(i));
	}
	return 0;
}
string operand(char ch)
{
		switch(ch)
		{
			case '+':
			case'-':
			case'*':
			case'/':
			case'^':
				return"Operator";
			default:
				return"Operand";
				
		}
}
	

