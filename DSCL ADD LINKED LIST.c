#include<stdio.h>
#include<stdlib.h>
void addatend();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *start = NULL;
int main()
{
	struct node *newnode = (struct node*) malloc(sizeof(struct node));
	start = newnode;
	newnode->data = 1;
	newnode->next = NULL;
	printf("first node added successfully\a");
	display();
	addatend();
	display();
	return 0;
}
void addatend()
{
	int datavariable;
	struct node *newnode, *temp;
	temp= start;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data");
	scanf("%d",&datavariable);
	newnode->data = datavariable;
	newnode->next = NULL;
	
while(temp->next!= NULL)
temp= temp->next;
temp->next = newnode;
}
void display()
{
	struct node *temp;
	temp = start;
	while(temp!=NULL)
	{
		printf("data = %d, self addr = %d, next addr = %d\n",temp->data,temp,temp->next);
		temp=temp->next; 
	}
}
