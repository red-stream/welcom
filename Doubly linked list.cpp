#include<stdio.h>
#include<stdlib.h>
struct student {
	int num;
	//char a[20];
	struct student *next,*front;
};
struct student *creat(int n)
{
	struct student *head,*s ,*next;
	head=(struct student*)malloc(sizeof(struct student));
//	head->a[0]='\0';
	head->front=NULL;
	head->next=NULL;
	next=head;
	for(int i=0;i<=n;i++)
	{
		s=(struct student*)malloc(sizeof(struct student));
			next->next=s;
		printf("set a num\n");
		scanf("%d",&s->num);
		//puts("set a name");
	//	scanf("%s",s->a);
		s->front=next;
		s->next=NULL;
		next=s;
	}
	next->next=head;
	return head;
}
int main()
{
	struct student *p;
	int n=3;
	p=creat(n);
	for(int i=0;i<n+10;i++)
	{
		printf("%d\n",p->num);
		p=p->next;
	}
	/*for(int i=0;i<n+3;i++)
	{
		printf(" %d\n",p->num);
		p=p->front;
	}*/
	return 0;
}
