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
class Queue
{
	public:
		Node *front;
		Node *rear;
		Queue()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue(int i)
		{
			Node *temp=new Node(i);
			if(front==NULL && rear==NULL)
			{
				front=temp;
				rear=temp;
			}
			else
			{
				rear->next=temp;
				rear=temp;
			}
		}
		void dequeue()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Queue is EMPTY..!";
			}
			else
			{
				Node *temp=front;
				front=front->next;
				if(front==NULL)
				{
					rear=NULL;
				}
				cout<<endl<<temp->no<<" is dequeued";
				delete temp;
			}
		}
		void printQueue()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Queue is EMPTY..!";
			}
			else
			{
				Node *ptr = front;
				do
				{
					cout<<ptr->no<<" -> ";
					ptr=ptr->next;
				}while(ptr!=rear->next);
			}
			
		}
};

int main()
{
	Queue q;
	int i;
	do{
		cout<<endl<<"FOR ENQUEUE PRESS 1";
	cout<<endl<<"FOR DEQUEUE PRESS 2";
	cout<<endl<<"FOR PRINTING PRESS 3";
	
	cout<<endl<<"CHOOSE THE ABOVE OPTION :";
	cin>>i;
	
	switch(i)
	{
		case 1:
			cout<<endl<<"ENTER THE VALUE TO PUSH :";
			cin>>i;
			q.enqueue(i);
			break;
			
		case 2:
			q.dequeue();
			break;
			
		case 3:
			q.printQueue();
			break;
	}
}while(i!=4);

	
	q.printQueue();
	cout<<endl;
	
	q.printQueue();
	cout<<endl;
	
	
		
	return 0;
}
