#include<iostream>
#include<queue>
using namespace std;
int priority;

int main()
{
	pq.push(10);
	pq.push(11);
	pq.push(12);
	cout<<pq.size()<<"";
	cout<<pq.top()<<"";
	
	while(pq.empty()!=false)
	{
		cour<<pq.top()<<"";
		pq.pop();
	}
	return 0;
}
