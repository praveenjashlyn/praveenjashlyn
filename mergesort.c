
#include <stdio.h>

void main(){
	setbuf(stdout,NULL);

	int n1,n2,a[30],b[30],c[100],i=0,j=0,k=0;
	printf("Count for list 1 : ");
	scanf("%d",&n1);
	printf("Enter List1 elements in order : ");
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);


	printf("Count for list 2 : ");
	scanf("%d",&n2);
	printf("Enter List2 elements in order: ");
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
	i=0;j=0;
	while(i<n1 && j<n2){
		if(a[i]<b[j]){
			c[k]=a[i];
			k++;i++;
		}
		else if(a[i]==b[j]){
			c[k]=a[i];
			k++;i++;j++;
		}
		else{
			c[k]=b[j];
			k++;j++;
		}
	}
	while(i<n1){
		c[k]=a[i];
		i++;k++;
	}
	while(j<n2){
		c[k]=b[j];
		j++;k++;
	}
	for(i=0;i<k;i++)
		printf("%d ",c[i]);

}
