#include<stdio.h>  
#include<stdlib.h>  

struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
}*head=NULL;  
void insertion_last(int item)  
{  
   struct node *ptr,*temp;  
   
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
      
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }  
             
       }  
     printf("\nnode inserted\n");  
    }  
    void reverse()
{
    node* temp = NULL;
    node* current = head;
   
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;            
        current = current->prev;
    }
    
    if(temp != NULL )
        head = temp->prev;
}
void print(){
    node *temp=head;
    while(temp!=NULL){
       printf("%d ",temp->data);
       temp=temp->next;
    }

}
int main(){
    insertion_last(1);
    insertion_last(5);

    insertion_last(10);

    insertion_last(13);
    reverse();
    print();
    return 0;
}
