#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
}*start=NULL;
void create()
{
	char ch;
	do{
		struct node*new_node,*current;
		new_node=(struct node*)malloc(sizeof(struct node));
		printf("\nenter the data ");
		scanf("%d",&new_node->data);
		new_node->next=NULL;
		if(start==NULL)
		{
			start=new_node;
			current=new_node;
		}
		else
		{
			current->next=new_node;
			current=new_node;
		}
		printf("\n do you want to create another: ");
		ch=getche();
	
	}
		while(ch!='n');
}
void display()
{
	struct node*new_node;
	printf("\nlink list is:\t");
	new_node=start;
	while(new_node!=NULL)
	{
		printf("%d ---->",new_node->data);
		new_node=new_node->next;
	}
	printf("null");
}
void main()
{
	create();
	display();
}
