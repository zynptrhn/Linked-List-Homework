#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int sayi;
    struct node * next;
}Node;

  Node*head,*p,*q;

  Node*cift_ekle(Node*head,int n);
  Node*tek_ekle(Node*p,int n);
  void traverselist(head);

int main(){
    int n;
    printf("sayi girin: ");
    scanf("%d",&n);

    head=(Node*)malloc(sizeof(Node*));
    head->next=(Node*)malloc(sizeof(Node*));

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

Node*cift_ekle(Node*head,int n){
    q=(Node*)malloc(sizeof(Node*));
    q->next=(Node*)malloc(sizeof(Node*));
    q->next=head;
    q->sayi=n;
return q;}

Node*tek_ekle(Node*p,int n){
    
    q=(Node*)malloc(sizeof(Node*));
    q->next=(Node*)malloc(sizeof(Node*));
    p->next=q;
    q->next=NULL;
    q->sayi=n;
    return q;
   }    

void traverselist(Node* head){
    p=head;
    system("cls");
    while(p!=NULL){
        printf("%d\t",p->sayi);
        p=p->next; }
 }
