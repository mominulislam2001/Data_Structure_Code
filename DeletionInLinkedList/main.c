#include <stdio.h>
#include <stdlib.h>



struct node {

   int data;
   struct node *next;

};

void  traversalInLinkedList(struct node *ptr){
    int i = 0;

    while(ptr!=NULL){
        printf("Element [%d] = %d\n", i,ptr->data);
        ptr = ptr->next;
        i++;

    }
}

struct node *deleteFirst(struct node *head){

    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;



}

struct node *deleteLast(struct node *head){

  struct node *p = head;
  struct node *q = head->next;


  while(q->next!=NULL){
    p=p->next;
    q=q->next;
 }
  p->next = NULL;
  free(q);
  return head;

}
struct node *deleteAtIndex(struct node *head,int index){

   struct node *p = head;
   struct node *q = head->next;

   for(int i=0;i<index-1;i++){

     p = p->next;
     q = q->next;


   }

   p->next = q->next;
   free(q);

   return head;

}

struct node *deleteWithValue(struct node * head,int value){

  struct node *p = head;
  struct node *q = head->next;

  while(q->data!=value && q->next!=NULL){
    p = p->next;
    q = q->next;

  }
  if(q->data==value){

    p->next = q->next;

    free(q);

  }

  return head;


}



int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;


    printf("Before Deletion\n");

    traversalInLinkedList(head);



    printf("After Deletion\n");

    //head = deleteFirst(head);
    //head = deleteAtIndex(head,2);
    //head = deleteLast(head);
    head = deleteWithValue(head,3);
    traversalInLinkedList(head);















    return 0;
}
