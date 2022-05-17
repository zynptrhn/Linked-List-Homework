#include <stdio.h>
#include <stdlib.h>

struct node{
    int sayi;
    struct node *next;
};

typedef struct node newnode;
newnode *head,*last;

newnode*yer_degistir(newnode*head);
newnode*liste_olustur();
void traverselist(newnode*head);

int main(){
    head=liste_olustur();
    traverselist(head);
    printf("\n");
    head=yer_degistir(head);
    traverselist(head);
     return 0;
}

newnode* liste_olustur(){
    newnode*p;
    int n,k;
    printf("kac sayi girilecek : ");
    scanf("%d",&n);

    for(k=0;k<n;k++){
        if(k==0){
            head=(newnode*)malloc(sizeof(newnode));
            p=head;
        }
        else{
            p->next=(newnode*)malloc(sizeof(newnode));
            p=p->next;
        }
        printf("sayi girin: ");
        scanf("%d",&p->sayi);
    }

    p->next=NULL;
    return head;

}

 newnode *yer_degistir(newnode*head){
    newnode*p,*q;
    p=head;
    while(p!=NULL){
        if(p->next==NULL && p==head){
            break; }
            
        else if(p->next==NULL&&head->next==p){
            p->next=head;
            head->next=NULL;}
            
        else if(p->next==NULL){
            p->next=head->next;
            q->next=head;
            head->next=NULL;
            break; }
        q=p;
        p=p->next;
    }
    return p;}
    
    
void traverselist(newnode*head){
    newnode*p;
    p=head;
    while(p!=NULL){
        printf("%4d",p->sayi);
        p=p->next;
    }
}