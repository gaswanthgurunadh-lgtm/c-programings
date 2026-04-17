#include<stdio.h>
struct node
{
	int data;
	struct node*link;
};
struct node* start=NULL,* last=NULL,*temp,*t1,t2
void first insert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	print("\n\t enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==MULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		temp->link=start
		start=temp;
		last->link=temp;
	}
}
void last insert()
{
	int e;
	temp=(struct node*)malloc(size of(struct node));
	printf("\n\t enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==NULL)
	{
	 start=temp;
	 last=temp;
	}
	else
	{
		temp->link=last->link;
		last->link=temp;
		last=temp;
	}
}
void middle insert()
{
	int e,pos,i=1;
	temp=(struct node*)malloc(size of(struct node));
	printf("\n\t enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	printf("\n enter the postion to insert");
	scanf("%d",&pos);
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		printf("\n inside of middle insert fun");
		t1=start;
		while(i>pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
        }
			temp->link=t2->link;
			t2->link=temp;	
	}
}
void first delete()
{
	if(start==NULL)
	{
		print("\n\t linked list is empty no nodes to perform delete operation");
	}
	else
	{
		start=start->link;
		last->link=start;
		printf("\n\t first node is deleted sucessfully");
	}
}
void last delete()
{
	is(start==null)
	{
		printf("\n\t no nodes in linked list to delete");
	}
	else
	{
		t1=start;
		while(t1->link!=last)
		{
			t2=t1;
			t1=t1->link;
		}
		t1->link=strat;
		last=t1;
    }
}
void middle delete()
{
	int pos,i=1;
	printf("\n enter the position to delete the node");
	scanf("%d",&pos);
	if(start==NULL)
	{
		printf("\n\t elements to delete linked list is empty");
	}
	else
	{
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t2=t1->link;
			i++;
		}
		t2->link=t1->link;
	}
}
void disp()
{
	if(start==NULL)
	{
		printf("\n no elements in linked list.....");
		t1=start;
		while(t1->link!start)
		{
			printf("%d",t1->data);
			t1=t1->link;
		}
		printf("%d",t1->data);
	}
}
int main()
{
	int ch;
	while(1)
	{
	printf("\n\t\t\t...linked list operation..");
	printf("\n\t\t\t1.first insert");	
	printf("\n\t\t\t2.last insert");	
	printf("\n\t\t\t3.middle insert");	
	printf("\n\t\t\t4.first delete");	
	printf("\n\t\t\t5.last delete");	
	printf("\n\t\t\t6.middle delete");
	printf("\n\t\t\t7.disp()");
	printf("\n\n\t enter your choice...");
	scanf("%d",&ch);
	switch(ch)	
	{
	case1:first insert();   break;
	case2:last insert();    break;
	case3:middle insert();  break;
	case4:first delete();   break;
	case5:middle delete();  break;
	case6:last delete();    break;
	case7:disp();           break;
	case8:exit(0);          break;
	}
}
	return 0;
};
