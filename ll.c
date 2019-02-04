#include<stdio.h>
#include<stdlib.h>
struct node{
	int value;
	struct node *next;
};

struct node *head=NULL;
struct node *p=NULL;
struct node *last=NULL;
void create(){
	int val;
	while(1){
		printf("enter the value(-1 to exit)");
		scanf("%d",&val);
	if(val==-1){
		return;
	}
	struct node* temp=(struct node*) malloc (sizeof(struct node));
	temp->value=val;
	temp->next=NULL;
	if (head==NULL){
		head=temp;
		last=temp;
		
	}
	else{
		last->next=temp;
		last=last->next;
	}
}
}
void del(){int pos,i;
	printf("enter the position of the element you want to delete\n");
	p=head;
	struct node* temp;
	scanf("%d",&pos);
	if (pos==1){
		
		head=head->next;	
		free(p);
	}
	else{
		for(i=1;i<pos-1;i++){
		p=p->next;
		}
		temp=p->next;
		p->next=p->next->next;
		
		free(temp);
	}	
}
void display(){
	p=head;
	while(p->next!=NULL){
		printf("%d->",p->value);
		p=p->next;
	}
	printf("%d",last->value);
	printf("\n");
}

int key=0;

int main(int argc, char const *argv[])
{	int v,x;
	while(key==0) {
	printf("1. create\n2. delete\n3. display\n");
	scanf("%d",&x);
	
	switch(x){
	case 1:
	create();
	break;
	case 2:
	del();
	break;
	case 3:
	display();
	break;
	case 4:
	key=1;
	break;

	}
}
	
	return 0;
}