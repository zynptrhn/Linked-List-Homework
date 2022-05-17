#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int number;
	struct node *next;
};

typedef struct node Node;
Node *p, *q, *head;

int main(){
	int i;
	printf("eklenecek sayi: ");
	scanf("%d",&i);
	
	while(i!=-1){
		
		if(head==NULL){
			head=(struct node*)malloc(sizeof(struct node));
			head->number=i;
			head->next=NULL;
			p=head;
		}
		
	else if(i%2==0){
		while(p->next!=NULL)
		   p=p->next;
		   
		q=(struct node*)malloc(sizeof(struct node));
		q->number=i;
		
		p->next=q;
		q->next=head;
		head=q;
	}
	else{
		q=(struct node*)malloc(sizeof(struct node));
		q->number=i;
		q->next=head;
		head=q;
	    }
	scanf("%d",&i);
    }
	p=head;
	printf("Liste\n");
	while(p!=NULL){
		printf("%d\n", p->number);
		p=p->next;
	}
	
	

return 0;}
