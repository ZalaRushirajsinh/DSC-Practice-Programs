#include<iostream>
using namespace std;
class Node
{
	public:
		int no;
		int p;
		Node *next;
		
		Node()
		{
			no=0;
			p=0;
			next=NULL;	
		}
		Node(int n,int m)
		{
			no=n;
			p=m;
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
		void enqueue(int i,int j)
		{
			Node *temp=new Node(i,j);
			if(front==NULL && rear==NULL)
			{
				front=temp;
				rear=temp;
			}
			else if (temp->p > front->p)
			{
				temp->next=front;
				front=temp;
			}
			else if(temp->p <= rear->p)
			{
				rear->next = temp;
				rear=temp;
			}
			else 
			{
				Node *head = front;
				while (temp->p<=head->next->p)
				{
					head = head->next;
				}
				temp->next =  head->next;
				head->next = temp;
			}
		}
		void dequeue()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Queue is empty..!";
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
				cout<<endl<<"Queue is empty..!";
			}
			else
			{
				Node *ptr = front;
				do
				{
				cout<<ptr->no<<" - "<<ptr->p<<" -> ";
					ptr=ptr->next;
				}while(ptr!=rear->next);
			}
			
		}
};

int main()
{
	Queue q;
	q.enqueue(1,7);
	q.enqueue(4,8);
	q.enqueue(2,4);
	q.enqueue(3,6);
	q.enqueue(8,5);
	q.enqueue(23,1);
	cout<<endl;
	
	q.printQueue();
	cout<<endl;
	
	
	return 0;
}
