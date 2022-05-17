#include <stdio.h>
#include <stdlib.h>

struct node {
    int sayi;
    struct node * next;
};

typedef struct node node;
node *head,*p;


node* liste_olustur();
void traverselist(node* head);
node* son_dugumu_kes(struct node* head);


int main(){
    head=liste_olustur();
    traverselist(head);
    printf("\n \n");
    head = son_dugumu_kes (head);
    traverselist(head);
    
     return 0;}
     
     node* liste_olustur(){
    int n,k;
    printf("kac sayi gireceksiniz : ");
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
        printf("sayilari girin: ");
        scanf("%d",&p->sayi);
    }

    p->next=NULL;
    return head;

}

node* son_dugumu_kes(struct node* head){
    node*p,*temp;
    p=head;
    
    while(p!=NULL){
        if (p->next == NULL && p == head)
        {
            break;
        }
        else if(p->next==NULL){
            temp->next=NULL;
            p->next =head;
            break;
            
        }
        temp=p;
        p=p->next;
    }
    return p;
}






void traverselist(node*head){
    node*p;
    p=head;
    while(p!=NULL){
        printf("%4d",p->sayi);
        p=p->next;
    }
}


