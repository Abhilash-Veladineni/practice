#include <stdio.h>
struct process{
	int at,bt,ct,tat,wt;
	char id;
}p[10],t;
int main(int argc, char const *argv[])
{	int n,tbt,temp,i,j,c;
	printf("Enter the number of process\n");
	scanf("%d",&n);
	for(i=0,c='a';i<n;i++,c++){
		p[i].id=c;
		printf("enter process %c's at and bt:",p[i].id );
		scanf("%d %d",&p[i].at,&p[i].bt);
	}
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if (p[j].at>p[j+1].at){
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
		tbt=p[0].at;
		for(i=0;i<n;i++){
			tbt=tbt+p[i].bt;
			p[i].ct=tbt;
			p[i].tat=p[i].ct-p[i].at;
			p[i].wt=p[i].tat-p[i].bt;
		}
		printf("id\tat\tbt\tct\ttat\twt\n");
		for(i=0;i<n;i++){
			printf("%c\t%d\t%d\t%d\t%d\t%d\n",p[i].id,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt);
		}
	return 0;
}

