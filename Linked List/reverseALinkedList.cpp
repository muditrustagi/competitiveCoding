// reverse a linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *reverseLinkedList(node *head)
{
	node *current =head;
	node *last=null;

	while(current !=null)
	{
		temp=*current;
		current->next=last;
		last=current;
		current=temp->next;
	}

	return current;
}

int main()
{
	//make a linked list
	//assign a head
	node *m= reverseLinkedList(head);

}