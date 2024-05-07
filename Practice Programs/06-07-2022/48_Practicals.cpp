#include<iostream>
using namespace std;
class Node
{
	public:
		int no;
		Node *next;
		
		Node()
		{
			no=0;
			next=NULL;	
		}
		Node(int n)
		{
			no=n;
			next=NULL;	
		}	
};
class Stack
{
	public:
		Node *tos;
		
		Stack()
		{
			tos=NULL;	
		}
		void push(int i)
		{
			Node *temp = new Node(i);
			if(tos==NULL)
			{
				tos=temp;
			}
			else
			{
				temp->next=tos;
				tos=temp;
			}
		}
		void pop()
		{
			if(tos==NULL)
			{
				cout<<endl<<"Satck is EMPTY...!";
			}
			else
			{
				Node *temp=tos;
				tos=tos->next;
				cout<<endl<<temp->no<<" is POPED";
				delete temp;
			}
		}
		void printStack()
		{
			if(tos==NULL)
			{
				cout<<endl<<"Stack is EMPTY";
			}
			else
			{
				Node *ptr = tos;
				while(ptr!=NULL)
				{
					cout<<ptr->no<<" <- ";
					ptr=ptr->next;
				}
			}
		}
};

int main()
{
	Stack s;
	int ch,i;

	do{
		cout<<endl<<"FOR PUSH PRESS 1";
	cout<<endl<<"FOR POP PRESS 2";
	cout<<endl<<"FOR PRINTING PRESS 3";
	
	cout<<endl<<"CHOOSE THE ABOVE OPTION :";
	cin>>i;

	
	switch(i)
	{
		case 1:
			cout<<endl<<"ENTER THE VALUE TO PUSH :";
			cin>>i;
			s.push(i);
			break;
			
		case 2:
			s.pop();
			break;
			
		case 3:
			s.printStack();
			break;
}
			
	}while(i!=4);
	s.pop();
	cout<<endl;
	s.printStack();
	return 0;
}
