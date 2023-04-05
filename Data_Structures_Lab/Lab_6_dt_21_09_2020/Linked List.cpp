#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  int data;
  struct node *next;
};
typedef struct node node;


int main()
{
  int i,n;
  node *current,*prev,*temp,*head=NULL;

  printf("Enter the size of the list\t");
  scanf("%d", &n);
  
  printf("Enter the data :\n");
  for(i=0;i<n;i++)
  {
    current=(node *)malloc(sizeof(node));
    current->next= NULL;
    if(i==0)
     head=current;
     else
     prev->next=current;
    scanf("%d",&current->data);
     prev=current;
  }
  
  printf("\n\n");
  for(temp=head;temp!=NULL;temp=temp->next)
  printf("%d\n",temp->data);
  return 0;
}