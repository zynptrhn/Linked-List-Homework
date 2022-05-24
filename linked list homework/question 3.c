#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int sayi;
    struct node * next;
}node;

node *head;

node* liste_olustur();
int traverselist(node* head);
node* ortadaki_eleman_sil(node* head,int count);


int main(){
int count;
    head=liste_olustur();
    count=traverselist(head);
    head=ortadaki_eleman_sil(head,count);
    count=traverselist(head);
   return 0;
}

node* liste_olustur(){
    node*p;
    int n,i;
    printf("kac sayi gireceksiniz : "); scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i==0){
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

int traverselist(node*head){
    node*p;
    p=head;
    int counter;
    while(p!=NULL){
        printf("%4d",p->sayi);
        p=p->next;
        counter++;
    }
    return counter;
}
node* ortadaki_eleman_sil(node* head,int count){
    node *p,*temp;
    p=head;
    int i=1;
    int mid=count/2;

    if(mid<=1){
        head=p->next;
        free(p);
    }
    else{
        while(i!=mid){
            temp=p;
            p=p->next;
            i++;
        }
        temp->next=p->next;
        free(p);
    }
 return head;
}
