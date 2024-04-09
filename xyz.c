#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *next;
};

void traversing(struct node *p)
{
   while (p != NULL)
   {
      printf("element %d \n", p->data);
      p = p->next;
   }
}
int main()
{
   struct node *head, *new, *temp;
   new = (struct node *)malloc(sizeof(struct node));
   printf("enter data");
   scanf("%d \n", &new->data);
   new->next = NULL;
   if (head == NULL)
   {
      head = temp = new;
   }
   else
   {
      temp->next = new;
      temp = temp->next;
   }
   traversing(head);
   return 0;
}