#include<iostream>
using namespace std;
template <typename T> class node
{
	public:
		T no;
		Node *next;
		
		Node()
		{
			//no=0;
			next=NULL;	
		}
		Node(T n)
		{
			no=n;
			next=NULL;	
		}	
};
class Queue
{
	public:
		Node<string> *front;
		Node<string>*rear;
		Queue()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue(string i)
		{
			Node<string>*temp=new Node<string>(i);
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
				Node <string>*temp=front;
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
				Node<string>*ptr = front;
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
