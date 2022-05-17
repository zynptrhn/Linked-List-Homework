#include <stdio.h>
#include <stdlib.h>

 struct node{
    int sayi;
    struct node*next;
 };

  typedef struct node newnode;
  newnode*head;

 newnode* bastaki_dugum_sona(newnode*head);
 newnode* listeolustur();
 void traverselist(newnode*head);

int main(){
    head=listeolustur();
    traverselist(head);
    head=bastaki_dugum_sona(head);
    traverselist(head);
    return 0;
    }
    

    newnode* listeolustur(){
    newnode*p;
    int n,i;
    printf("kac sayi gireceksiniz : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(i==0){
            head=(newnode*)malloc(sizeof(newnode));
            p=head;
        }
        else{
            p->next=(newnode*)malloc(sizeof(newnode));
            p=p->next;
        }
        printf("Enter number: ");
        scanf("%d",&p->sayi);
    }
     p->next=NULL;
    return head;}

newnode*bastaki_dugum_sona(newnode*head){
    newnode*p,*headnew;
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

void traverselist(newnode* head){
    newnode*p;
    p=head;
    system("cls");
    while(p!=NULL){
        printf("%d\t",p->sayi);
        p=p->next;
    }
}

