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
			next=0;
		}
		Node(int a)
		{
			a=no;
			next=0;
		}
};
class Linkedlist
{
	public:
		Node *head;
		Linkedlist()
		{
			head=NULL;
		}
		void InsertAtFirst(int b)
		{
			Node *ptr = new Node(b);
			if(head==NULL)
			{
				head=ptr;
			}
			else
			{
				ptr->next=head;
				head=ptr;
			}
		}
		void InsertAtLast(int b)
		{
			Node *ptr = new Node(b);
			if(head==NULL)
			{
				head=ptr;
			}
			else
			{
				Node *temp = head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=ptr;
			}
		}
		Node *Delete(int position)
		{
			if(position==0)
			{
				this->head=this->head->next;
				return this->head;
			}
			else
			{
				Node *ptr = this->head;
				Node *temp = this->head;
				for(int a=0;a<position-1;a++)
				{
					ptr=ptr->next;
					temp=temp->next;
				}
				temp=temp->next;
				
				ptr->next=temp->next;
				temp->next = NULL;
				delete temp;
				ptr=this->head;
				return ptr;
			}
		}
		void Search(int b)
		{
			Node *ptr=this->head;
			int Pos=1;
			while(ptr!=NULL)
			{
				if(ptr->no==b)
				{
					cout<<"Your Position at :"<<Pos<<endl;
					break;
				}
				ptr=ptr->next;
				Pos++;
			}
		}
		void Print()
		{
			Node *ptr=head;
			if(ptr==NULL)
			{
				cout<<"LinkedList is Empty."<<endl;
			}
			else
			{
				while(ptr!=NULL)
				{
					if(ptr==head)
					{
						cout<<ptr->no;
					}
					else
					{
						cout<<"->"<<ptr->no;
					}
					ptr=ptr->next;
				}
			}
			cout<<endl;
		}
		void Update(int position,int b)
		{
			if(position==0)
			{
				this->head->no=b;
			}
			else
			{
				Node *ptr = this->head;
				for(int a=0;a<position-1;a++)
				{
					ptr=ptr->next;
				}
				ptr->no=b;
			}
			cout<<endl<<"After Updated Your Value is "<<endl;
			this->Print();
		}
};
int main()
{
	Linkedlist l1;
	int ch;
	int Insert,Remove,Update,b;
	do
	{
		cout<<"1. INSERT THE DATA :"<<endl;
		cout<<"2. DELETE THE DATA :"<<endl;
		cout<<"3. UPDATE THE DATA :"<<endl;
		cout<<"4. PRINT THE DATA :"<<endl;
		cout<<"5. EXIT FROM THE PROGRAMM :"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"ENTER THE DATA ="<<endl;
				cin>>Insert;
				l1.InsertAtFirst(Insert);
				break;
			case 2:
				cout<<"ENTER POSITION WHICH YOU WANT TO DELETE ="<<endl;
				cin>>Remove;
				l1.Delete(Remove);
				cout<<"AFTER DELETED YOUR LINKEDLIST ARE ="<<endl;
				l1.Print();
				break;
			case 3:
				cout<<"ENTER WHICH POSITION YOU WANT TO UPDATE ="<<endl;
				cin>>Update;
				cout<<"ENTER A NEW DATA ="<<endl;
				cin>>b;
				l1.Update(Update,b);
				cout<<"AFTER UPDATING YOUR LINKEDLIST ARE ="<<endl;
				l1.Print();
				break;
			case 4:
				cout<<"YOUR LINKEDLIST ARE :"<<endl;
				l1.Print();
				break;
			case 5:
				cout<<"THANK YOU FOR EXECUTE THE PROGRAMM"<<endl;	
				break;
			default:
				cout<<"INVALID CHOICE....."<<endl;
				break;
				
		}
	}while(ch!=5);
	return 0;
}

