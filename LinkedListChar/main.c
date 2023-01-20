#include <stdio.h>
#include <stdlib.h>



struct node{

  char data;
  struct node *next;

  };
struct node2{

  char data;
  struct node2 *next;

  };

void displayTraversalNode(struct node *ptr){
int i=0;

  while(ptr!=NULL){

    printf("%c",ptr->data);
    ptr = ptr->next;
    i++;
  }


}
void displayTraversalNode2(struct node *ptr){
int i=0;
   printf("  ");
  while(ptr!=NULL){

    printf("%c",ptr->data);
    ptr = ptr->next;
    i++;
  }


}

int main()
{

    struct node *head =(struct node*)malloc(sizeof(struct node));
    struct node *second =(struct node*)malloc(sizeof(struct node));
    struct node *third =(struct node*)malloc(sizeof(struct node));
    struct node *fourth =(struct node*)malloc(sizeof(struct node));

    head->data = 'E';
    head->next = second;

    second->data = 'L';
    second->next = third;

    third->data = 'O';
    third->next = fourth;

    fourth->data = 'N';
    fourth->next = NULL;


    struct node2 *head2 =(struct node2*)malloc(sizeof(struct node2));
    struct node2 *second2 =(struct node2*)malloc(sizeof(struct node2));
    struct node2 *third2 =(struct node2*)malloc(sizeof(struct node2));
    struct node2 *fourth2 =(struct node2*)malloc(sizeof(struct node2));

     head2->data = 'M';
    head2->next = second2;

    second2->data = 'U';
    second2->next = third2;

    third2->data = 'S';
    third2->next = fourth2;

    fourth2->data = 'K';
    fourth2->next = NULL;



    displayTraversalNode(head);
    displayTraversalNode2(head2);

    return 0;
}
