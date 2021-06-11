#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node* next;
}*head=NULL;
void insert_begin(int data){
   Node *temp=head;
   Node *node=(Node*)malloc(sizeof(Node));
   node->next=temp;
   node->data=data;
   head=node;
   printf("ADDED SUCCESSFULLY! \n");
}
void insert_end(int data){
  Node *temp=head;
  Node* node=(Node*)malloc(sizeof(Node));
  node->next=NULL;
  node->data=data;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=node;
  printf("ADDED SUCCESSFULLY! \n");
}
void insert_atpos(int pos,int data){
  if(pos==1){
    insert_begin(data);
    return;
  }
  bool done=0;
  Node *temp=head;
  Node *node=(Node*)malloc(sizeof(Node));
  node->data=data;
  node->next=NULL;
  int cur_pos=1;
  Node* temp1=head;
  while(temp!=NULL){
    if(cur_pos==pos){
      done=1;
      temp1->next=node;
      node->next=temp;
      break;
    }
    else{
       temp1=temp;
       temp=temp->next;
    }
    cur_pos++;
  }
  if(pos-cur_pos==0&&!done){
    done=1;
    temp1->next=node;
  }
  if(!done){
    printf("INVALID INPUT \n");
  }
  else{
    printf("ADDED SUCCESSFULLY! \n");
  }
}
void delete_begin(){
  Node *temp=head;
  temp=head->next;
  head=temp;
  printf("DELETED SUCCESSFULLY! \n");
}
void delete_end(){
  Node* temp=head;
  Node* temp1;
  while(temp->next!=NULL){
    temp1=temp;
    temp=temp->next;
  }
  temp1->next=NULL;
  printf("DELETED SUCCESSFULLY! \n");
}
void delete_atpos(int pos){
  bool done=0;
  if(pos==1){
    delete_begin();
    return;
  }
  Node* temp=head;
  Node *temp1;
  int cur_pos=1;
  while(temp->next!=NULL){
    if(cur_pos==pos){
       temp1->next=temp->next;
       done=1;
       break;
    }
    else{
      temp1=temp;
      temp=temp->next;
    }
    cur_pos++;
  }
  if(pos==cur_pos&&!done){
    temp1->next=NULL;
    done=1;
  }
  if(done){
    printf("DELETED SUCCESSFULLY! \n");
  }
  else{
     printf("INVALID INPUT \n");
  }
}
void print(){
  Node *temp=head;
  while(temp!=NULL){
    if(temp->next==NULL)
      printf("%d",temp->data);
    else
    printf("%d->",temp->data);
  
    temp=temp->next;
  }
  printf("\n");

}
void reverse(){
  Node *prev=NULL;
  Node *temp=head;
  Node *nex=NULL;
  while(temp!=NULL){
     nex=temp->next;
     temp->next=prev;
     prev=temp;
     temp=nex;
  }
  head=prev;
}
int main(){
  insert_begin(5);
  insert_begin(62);
  insert_end(6);
  insert_end(63);
  insert_atpos(4,234);
  delete_begin();
  delete_end();
  print();
  delete_atpos(2);
  reverse();
  print();
  return 0;
}
