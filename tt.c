#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;

} *head = NULL, *last = NULL;

struct node *findLast(struct node *head)
{
    struct node *last = head;
    do
    {
        last = last->next;
    } while (last->next != head);
    return last;
}

//SIZE OF LINK LIST
int size(struct node *temp)
{   int i = 0;
    if (head == NULL)
    {
       
        return i;
    }
    while (temp != head){
        i++;
        temp = temp->next;
    };
    return i;
}


struct node *insert(struct node *head)
{
    int data;
    printf("Enter the data:-");
    scanf("%d", &data);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    if (head == NULL)
    {
        head = newnode;
        last = newnode;
        head->next = head;
        return head;
    }
    newnode->next = head;
    head = newnode;
    last->next = head;
    return head;
}
struct node *insertatI(int index)
{    

    int data;
    printf("Enter the data:-");
    scanf("%d", &data);
    struct node *midnode = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 1;

    while (i < index - 1)
    {
        p = p->next;
        i++;
    }
    midnode->data = data;
    midnode->next = p->next;
    p->next = midnode;

    return head;
}

struct node *insertatend(struct node *head)
{
    int data;
    printf("Enter the data:-");
    scanf("%d", &data);
    struct node *endnode = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        head = endnode;
        last = endnode;
        last->next = head;
        return head;
    }
    last->next = endnode;
    endnode->data = data;
    endnode->next = head;
    last=endnode;
    return head;
}

struct node *deletF(struct node *head)
{   struct node *last = findLast(head);
    if (head == NULL)
    {
        printf("LINKLIST IS EMPTY\n");
        return head;
    }

    struct node *p = head;
    head = head->next;
    last->next = head;
    free(p);
    return head;
}


struct node *DelIndex(struct node *head, int index)
{


   
    int i = 1;
    struct node *p = head;
    struct node *temp = head->next;
    while (i < index - 1)
    {
        p = p->next;
        temp = temp->next;
        i++;
    }

    p->next = temp->next;
    temp->next = NULL;
    free(temp);
    return head;
}

struct node *DelEnd(struct node *head)
{    struct node *last = findLast(head);
    if (head == NULL)
    {
        printf("LINKLIST IS EMPTY");
        return head;
    }
    struct node *temp = head;
    while (temp->next != last)
    {
        temp = temp->next;
    }
    temp->next = head ;
    free(last);
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("LINK LIST IS EMPTY\n");
        return;
    }
    do
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    } while (temp != head);
}

void main()
{

    printf("ENTROLLMENT - 0801IT221104\n");
    printf("NAME - Raghav Agrawal\n");
    printf("1. insert at first \n2. insert at End \n3. insert at index\n");
    printf("4. remove first\n5. remove end \n6. remove index\n7. Display Linklist \n8. Size\n9.exit\n");

    int n, index, data;
    while (n != 8)
    {
        printf("Enter your choice:-");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            head = insert(head);
            break;
        case 2:
            head = insertatend(head);
            break;
        case 3:
            printf("Enter the inserting index.:-");
            scanf("%d", &index);
            insertatI(index);
            break;

        case 4:
              head = deletF(head);
              break;
        case 5:
                 printf("Enter the removing index.:-");
                 scanf("%d", &index);
                 head = DelIndex(head, index);
                 break;
        case 6:
                 head = DelEnd(head);
                 break;
        case 7:
            display(head);
            break;

        case 8:
             printf("The size of LInkLIst is : %d\n", size(head));
             break;
        case 9:
            exit(0);
            break;
        }
    }
}
