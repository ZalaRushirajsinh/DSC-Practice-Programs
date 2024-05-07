#include<iostream>
using namespace std;
string operand(char);
int getPriority(char);
int main()
{
	string str;
	str.
	cout<<endl<<"Enter The String :";
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		cout<<str.at(i)<<"="<<operand(str.at(i))<<endl;
	}
	return 0;
}
string operand(char ch)
{
	string op="- operator";
		switch(ch)
		{
			case '+':
			case'-':
			case'*':
			case'/':
			case'^':
				cout<<getPriority(ch)<<"->";
				return"Operator";
			default:
				return"Operand";
				
		}
}
int getPriority(char ch)
{
	if(ch=='^')
	{
		return 3;
	}
	else if(ch=='*'|| ch=='/')
	{
		return 2;
	}
	else if(ch=='+' || ch=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

