// Merge two sorted linked list

// Author : Mudit Rustagi
// 12 October 2019 (Saturday)
// 16:52


#include<bits/stdc++.h>
using namespace std;
struct node
{	
	int data;
	node *next
};

node* mergeTwoLists(node* l1, node* l2) {

	node *m;
	m->next=l1;

	while(m!=null || l2!=null)
	{

		if((m->next)->data>l2->data)
		{
			node *temp1, *temp2;
			temp1=l2;
			
			l2=l2->next;
			temp2=m;

			m->next=l2;
			l2->next=temp2->next;

		}
		else
		{
			m=m->next;
		}

	
	}
	if(l2!=null)
	{
		m->next=l2
	}
	return l1;
}

int main()
{
	int 
	return 0;
}
