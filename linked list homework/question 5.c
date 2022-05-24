#include <stdio.h>
#include <stdlib.h>

 typedef struct node{
    int sayi;
    struct node*next;
 }node;

  node*head;

 node* bastaki_dugum_sona(node*head);
 node* listeolustur();
 void traverselist(node*head);

int main(){
    head=listeolustur();
    traverselist(head);
    head=bastaki_dugum_sona(head);
    traverselist(head);
    return 0;
    }
    

    node* listeolustur(){
    node*p;
    int n,i;
    printf("kac sayi gireceksiniz : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(i==0){
            head=(node*)malloc(sizeof(node));
            p=head;
        }
        else{
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
        }
        printf("Enter number: ");
        scanf("%d",&p->sayi);
    }
     p->next=NULL;
    return head;}

node*bastaki_dugum_sona(node*head){
    node*p,*headnew;
    p=head;
    headnew=head->next;
    
    while(p!=NULL){
        if(p==head &&p->next==NULL){
            break;
        }
        else if(p->next==NULL){
            p->next=head;
            head->next=NULL;
            break;
        }
        
        p=p->next;
    }
    return headnew;}

void traverselist(node* head){
    node*p;
    p=head;
    system("cls");
    while(p!=NULL){
        printf("%d\t",p->sayi);
        p=p->next;
    }
}

