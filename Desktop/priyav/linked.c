#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
void insertAtBeginning(struct Node** head,int newData)
{
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=newData;
newNode->next=*head;
*head=newNode;
}
void printList(struct Node*node){
while(node!=NULL){
printf("%d",node->data);
node=node->next;
}
printf("\n");
}
void deletNode(structNode**head,int key){
struct Node*twemp=*head;
struct Node*prev=NULL;
if(temp !=NULL&&temp->data==key){
*head=temp->next;
free(temp);
return;
}
while(temp!=Null&&temp->data!=key){
prev=temp;
temp=temp->next;
}
if(temp==NULL){
printf("key not found in the linked list\n");
return;
}
prev->next=temp->next;
free(temp);
}
void freeList(structNode**head){
structNode*current=*head){
structNode*nextNode;
while(current!=NULL){
nextNode=current->next;
free(current);
current=nextNode;
}
*head=Null;
}
int main(){
struct Node*head=NULL;
insertAtBeginning(&head,3);
insertAtBeginning(&head,7);
insertAtBeginning(&head,9);
printf("Linked list:");
printList(head);
deleteNode(&head,7);
printf("Linked list after deletion:");
printList(head);
freeList(&head);
return 0;
}
