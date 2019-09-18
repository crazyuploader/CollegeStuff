/* linked list */
#include<stdio.h>
struct node
{
  int data;
  struct node* link;
};
struct node *START=NULL;
struct node* createnode()
{
  struct node *n;
  n=(struct node*)malloc(sizeof(struct node));
  return n;
}
void insertNode()
{
  struct node *temp,*t;
  temp=createnode();
  printf("Enter a value: ");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(START==NULL)
  {
    START=temp;
    printf("Node is added at address=%d value=%d",temp,temp->data);
  }
  else
  {
    t=START;
    while(t->link!=NULL)
    {
      t=t->link;
    }
    t->link=temp;
    printf("Node is added at address=%d value=%d",temp,temp->data);
  }
}
void deleteNode()
{
  struct node *r;
  if(START==NULL)
  {
    printf("List is Empty");
  }
  else
  {
    r=START;
    START=START->link;
    printf("Node is Deleted at address=%d value=%d",r,*r);
    free(r);
  }
}
void viewNode()
{
  struct node *t;
  if(START==NULL)
  {
    printf("List is Empty");
  }
  else
  {
    t=START;
    while(t!=NULL)
    {
      printf("Node value=%d address=%d\n",t->data,t);
      t=t->link;
    }
  }
}
int length()
{
  struct node *t;
  int len=0;
  if (START==NULL)
  {
    printf("List is Empty");
    return 0;
  }
  else
  {
    t=START;
    while(t!=NULL)
    {
      t=t->link;
      len=len++;
    }
  return len;
  }
}
void deleteLocation()
{
  struct node *t,*p,*q;
  int loc,i=1;
  printf("Enter the location: ");
  scanf("%d",&loc);
  if (loc>length())
  {
    printf("Invalid location: ");
  }
  else if(loc==1)
  {
    t=START;
    START=t->link;
    t->link=NULL;
  }
  else
  {
    p=START;
    while(i<loc-1)
    {
      p=p->link;
      i++;
    }
  q=p->link;
  p->link=q->link;
  q->link=NULL;
  free(q);
  }
}

void main()
{
  int ch;
  while(1)
  {
    clrscr();
    printf("\n1. Insert a node");
    printf("\n2. Delete a node");
    printf("\n3. View the list of data present in list");
    printf("\n4. Delete at particular location");
    printf("\n5. Exit");
    printf("\nEnter a choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	    insertNode();
	    break;
      case 2:
	    deleteNode();
	    break;
      case 3:
	    viewNode();
	    break;
      case 4:
	    deleteLocation();
	    break;

      case 5:
	    exit(0);
	    break;
      default:
	     printf("Invalid Entry");
    }
    getch();
  }
}
