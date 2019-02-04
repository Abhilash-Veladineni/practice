#include <stdio.h>//priority
struct process{
	int at,bt,ct,tat,wt,processed,pri;
	char id;
}p[10],t;
int main(int argc, char const *argv[])
{	int n,tbt,temp,i,j,c,total_bt,small;
	printf("Enter the number of process\n");
	scanf("%d",&n);
	for(i=0,c='a';i<n;i++,c++){
		p[i].id=c;
		printf("enter process %c's at and bt and priority:",p[i].id );
		scanf("%d %d %d",&p[i].at,&p[i].bt,&p[i].pri);
		total_bt=total_bt+p[i].bt;
		p[i].processed=0;
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
		p[9].pri=999;
		for(tbt=p[0].at;tbt<total_bt;){
			small=9;
			for(i=0;i<n;i++){
				if (p[i].at<=tbt && p[i].processed!=1 && p[i].pri<p[small].pri )
					small=i;
			}
			if(small==9){
				tbt++;
				total_bt++;
				continue;
			}
			tbt=tbt+p[small].bt;
			p[small].processed=1;
			p[small].ct=tbt;
			p[small].tat=p[small].ct-p[small].at;
			p[small].wt=p[small].tat-p[small].bt;
			}
		printf("id\tat\tbt\tpriority\tct\ttat\twt\n");
		for(i=0;i<n;i++){
			printf("%c\t%d\t%d\t%d\t%d\t%d\t%d\n",p[i].id,p[i].at,p[i].bt,p[i].pri,p[i].ct,p[i].tat,p[i].wt);
		}
	return 0;
}

