// linked list contains loop
// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;

	node(int x)
	{
		data=x;
	}

};

bool hasLoop(node *head)
{
	if(head==null || head->next==null || head->next->next==null)
		return false;

	node *slow;
	node *fast;

	slow=head;
	fast=head;

	int flag=0;
	while(fast!=null)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
		{
			flag=1;
			break;
		}
	}
	return (bool)flag;
}

int main()
{
	//node a(5);// = new node(5);
	//cout<<a.data;

	node *head= new node(-5);
	m.push(~);
	.
	.
	.	



	
	cout<<hasLoop(head);
}