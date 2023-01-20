#include <stdio.h>
#include <stdlib.h>

struct Node{
 int data;
 struct Node *next;

};


LinkedListTraversal(struct Node *ptr){
   while(ptr != NULL){
     printf("Element: %d\n",ptr->data);
     ptr = ptr->next;
   }

}
struct Node* insertAtFirst(struct Node *head,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;

    return ptr;

}

struct Node* insertAtIndex(struct Node *head,int index,int data){

    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;

    int i = 0;

    while(i!=index-1){
          p =  p->next;
          i++;

    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;

}

struct Node* insertAtEnd(struct Node *head,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
      ptr->data = data;
    struct Node *p = head;




    while(p->next!=NULL){
      p = p->next;

    }

    p->next = ptr;
    ptr->next = NULL;

    return head;



}



int main()
{

    //Allocating memory for nodes in the Head for linked list.

    struct Node *head =(struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third =(struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node*)malloc(sizeof(struct Node));

    //Linking All the Nodes Together.
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;


    //Traverse Through The List Function Calling.
 printf("Before Insertion\n");
    LinkedListTraversal(head);

    //head = insertAtFirst(head,17);
    //head = insertAtIndex(head,1,2);
      head = insertAtEnd(head,5);
 printf("After Insertion\n");
    LinkedListTraversal(head);

    return 0;
}
