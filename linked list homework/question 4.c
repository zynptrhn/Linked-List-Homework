#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int sayi;
    struct node *next;
}node;

node *head,*last;

node*yer_degistir(node*head);
node*liste_olustur();
void traverselist(node*head);

int main(){
    head=liste_olustur();
    traverselist(head);
    printf("\n");
    head=yer_degistir(head);
    traverselist(head);
     return 0;
}

node* liste_olustur(){
    node*p;
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
        scanf("%d",&p->sayi);
    }

    p->next=NULL;
    return head;

}

 node *yer_degistir(node*head){
    node*p,*q;
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
    
    
void traverselist(node*head){
    node*p;
    p=head;
    while(p!=NULL){
        printf("%4d",p->sayi);
        p=p->next;
    }
}
