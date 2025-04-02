
#include <stdio.h>


void unionof(int a[],int b[],int set[],int,int);
int intersection(int a[],int b[],int interset[],int ,int );
void difference(int a[],int b[],int set [],int n1,int n2);

void main() {
	setbuf(stdout,NULL);
	int n1,n2,A[30],B[30],set[30],i,j,k;

	printf("First set count : ");
	scanf("%d",&n1);
	k=n1;
	for(i=0;i<n1;i++)
		scanf("%d",&A[i]);
	printf("second set count : ");
		scanf("%d",&n2);
	for(j=0;j<n2;j++)
		scanf("%d",&B[j]);
	difference(A,B,set,n1,n2);


}
void unionof(int a[],int b[],int set[],int n1,int n2){
	int i,j,k=n1,flag;

	for(i=0;i<n1;i++)
		set[i]=a[i];
	for(i=0;i<n1;i++)
		printf("%d ",set[i]);
	printf("\n");
	for(i=0;i<n1;i++){
		flag=1;
		for(j=0;j<n2;j++){
			if (b[i]==a[j]){
				flag=0;
				break;
			}
		}
		if(flag==1){

			set[k]=b[i];
			k++;
		}

	}
	for(i=0;i<k;i++)
		printf("%d ",set[i]);



}
int intersection(int a[],int b[],int interset[],int n1,int n2){
	int i,j,k=0;

	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(a[i]==b[j]){
				interset[k]=a[i];

				k++;
				break;
			}
		}
	}
	for(i=0;i<k;i++)
		printf("%d ",interset[i]);
	return k;
}

void difference(int a[],int b[],int set [],int n1,int n2)
{
	int i,j,k=0,flag;
	for(i=0;i<n1;i++){
		flag=1;
		for(j=0;j<n2;j++)
			if(a[i]==b[j]){
				flag=0;
				break;

			}
		if(flag==1)
			set[k++]=a[i];
	}
	for(i=0;i<k;i++)
		printf("%d ",set[i]);
}
