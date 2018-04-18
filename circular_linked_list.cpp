#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node *link;
};
 
struct node *head = NULL, *x, *y, *z;
 
void create();
void traverse();
int main()
{
    int ch;
 
    printf("\n 1.Creation");
    printf("\n2.traverse");
    printf("\n3.Exit\n");
    while (1)
    {
    	printf("\n Enter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            create(); 
            break;
        case 2:
            traverse(); 
            break;
        default:
            exit(0);
        }
    }
}
void create()
{
    int c;
 
    x = (struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data:");
    scanf("%d", &x->data);
    x->link = x;
    head = x;
    printf("\n If you wish to continue press 1 otherwise 0:");
    scanf("%d", &c);
    while (c != 0)
    {
        y = (struct node*)malloc(sizeof(struct node));
        printf("\n Enter the data:");
        scanf("%d", &y->data);
        x->link = y;
        y->link = head;
        x = y;
        printf("\n If you wish to continue press 1 otherwise 0:");
        scanf("%d", &c); 
    }
}
void traverse()
{
    if (head == NULL)
        printf("\n List is empty");
    else
    {
        x = head;
        while (x->link !=  head)
        { 
            printf("%d->", x->data);
            x = x->link;
        }
        printf("%d", x->data);
    }
}
