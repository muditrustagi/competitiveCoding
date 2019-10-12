// To find the middle element of a linked list

// 11 October 2019 (Friday)
// 20:35
// Author: Mudit Rustagi


#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

bool insert(int data, node *current)
{

	while(current->next!=NULL)
	{
		current=current->next;
	}

	node *value = new node();
	current->next =value;
	value->data=data;
	value->next=NULL;
}

void print(node *current)
{
	current=current->next;
	while(1)
	{
		cout<<current->data<<" ";
		if(current->next==NULL)
			break;
		current=current->next;
	}

}
int calmid(node *current)
{
	node *odd= new node();

	
	current=current->next;
	odd=current;

	int length=0;
	while(1)
	{
		length=length+1;

		if(current->next==NULL)
			break;

		if(length%2==1){
			cout<<length<<" ";
			odd=odd->next;}

		current=current->next;

	}
	cout<<endl;
	return odd->data;
}

int main()
{

	int size,data;
	cin>>size;
	
	node *head = new node();
	head->next=NULL;
	head->data=-5;


	for(int i=0;i<size;i++)
	{
		cin>>data;
		
		if(head==NULL)
		{
			node *temp = new node();
			head = temp;
			temp->data=data;
		}
		else
			insert(data,head);	
	}

	
	//print(head);

	cout<<calmid(head);

	
}