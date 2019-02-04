#include "stdio.h"
void sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1;j++){
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}



int main(int argc, char const *argv[])
{int i;
	int arr[10]={1,4,2,5};
	sort(arr,sizeof(arr));
	for (int i = 0; i < 4; ++i)
	{
		printf("%d->",arr[i]);
	}
	return 0;
}