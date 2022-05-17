#include <stdio.h>
#include <stdlib.h>

 struct node {
    int sayi;
    struct node * next;
};

typedef struct node newnode;
newnode *head;

newnode* liste_olustur();
int traverselist(newnode* head);
newnode* ortadaki_eleman_sil(newnode* head,int count);


int main(){
int count;
    head=liste_olustur();
    count=traverselist(head);
    head=ortadaki_eleman_sil(head,count);
    count=traverselist(head);
   return 0;
}

newnode* liste_olustur(){
    newnode*p;
    int n,i;
    printf("kac sayi gireceksiniz : "); scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i==0){
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

int traverselist(newnode*head){
    newnode*p;
    p=head;
    int counter;
    while(p!=NULL){
        printf("%4d",p->sayi);
        p=p->next;
        counter++;
    }
    return counter;
}
newnode* ortadaki_eleman_sil(newnode* head,int count){
    newnode *p,*temp;
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
