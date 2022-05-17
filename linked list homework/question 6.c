#include <stdio.h>
#include <stdlib.h>

struct node{
    int sayi;
    struct node * next;
};

  typedef struct node newnode;
  newnode*head;
  newnode*cift_ekle(newnode*head,int n);
  newnode*tek_ekle(newnode*p,int n);
  void traverselist(head);

int main(){
    int n;
    newnode* p;
    printf("sayi girin: ");
    scanf("%d",&n);

    head=(newnode*)malloc(sizeof(newnode*));
    head->next=(newnode*)malloc(sizeof(newnode*));

    if(n!=-1){
        head->sayi=n;
        head->next=NULL;
        p=head;}

    while(n!=-1){
        printf("sayi girin: ");
        scanf("%d",&n);

        if(n%2==0){
            head=cift_ekle(head,n);
        }
        else if(n%2==1){
            p=tek_ekle(p,n);
        }
   }
     traverselist(head);
    return 0;
}

newnode*cift_ekle(newnode*head,int n){
    newnode*q;
    q=(newnode*)malloc(sizeof(newnode*));
    q->next=(newnode*)malloc(sizeof(newnode*));
    q->next=head;
    q->sayi=n;
return q;}

newnode*tek_ekle(newnode*p,int n){
    newnode*q;
    q=(newnode*)malloc(sizeof(newnode*));
    q->next=(newnode*)malloc(sizeof(newnode*));
    p->next=q;
    q->next=NULL;
    q->sayi=n;
    return q;
   }    

void traverselist(newnode* head){
    newnode*p;
    p=head;
    system("cls");
    while(p!=NULL){
        printf("%d\t",p->sayi);
        p=p->next; }
 }
