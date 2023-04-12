#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};
int calcSize(struct node *node){
    int size =0;
    while(node!=0){
        node = node->next;
        size++;
    }
    return size;
}

void display(struct node* head){

if(head==0){
    return;
}
struct node*temp=head;
do{
    printf("%d \n",temp->data);
    temp=temp->next;
}
while(temp!=head);
    printf("\n");

}




void main(){


struct node *head,*newnode ,*temp ; // creation of head pointer , newnode pointer and  temp pointer
head=0; // initialisation
int choice=1; 
// just for linked list implementation
int t=0;
int data;
while(choice){

newnode = (struct node*)malloc(sizeof(struct node)); //assigning storage according to struct node which 4 + 4 = 8 bytes here

printf("Enter Data:");

scanf("%d", &newnode->data); //when assigning data , here assign to the newnode

newnode->next=0; // if it is single then its next address should be 0 so initialisation

if(head==0){
    head=temp=newnode; //assigning head the first node
}else{
    temp->next=newnode;
    temp=newnode;
}
temp->next=head;
printf("Do you want to continue(0,1) ?"); // for entering new elements
scanf("%d",&choice);
}

display(head);

}