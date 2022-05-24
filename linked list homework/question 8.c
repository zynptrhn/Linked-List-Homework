#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int sayi;
    struct node *next;
}node;
   node *head,*last,*p,*q;

   node*changefirstandlast(node*head);
   node*listolustur();
   void traverselist(node*head);

int main(){
 head=listolustur();
 traverselist(head);
 printf("\n");
 head=changefirstandlast(head);
 traverselist(head);
  return 0;}
  
  
 node* listolustur(){
 int n,k;
 printf("kac sayi girilecek : ");
 scanf("%d",&n);

    for(k=0;k<n;k++){
        if(k==0){
         head=(node*)malloc(sizeof(node));
          p=head;
        }
        else{
        p->next=(node*)malloc(sizeof(node));
        p=p->next;
        }
        printf("sayi girin: ");
        scanf("%d",&p->sayi);}

  p->next=NULL;
  return head;}

 node *changefirstandlast(node*head){
     p=head;
    while(p!=NULL){
        if(p->next==NULL && p==head){
            break; }
        else if(p->next==NULL&&head->next==p){
            p->next=head;
            head->next=NULL;
        }
        else if(p->next==NULL){
            p->next=head->next;
            q->next=head;
            head->next=NULL;
            break;}
        q=p;
        p=p->next; }
    return p;}
    
 void traverselist(node*head){
    p=head;
    while(p!=NULL){
        printf("%4d",p->sayi);
        p=p->next;}
}
