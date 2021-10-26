#include  <stdio.h>
int n;
int main() {
	
	printf("ENTER NUMBER: ");
	scanf("%d",&n);
	
	int i = 1;
	do{
	   
	   for(int j=1; j<=i;j++){
	   printf("*");	
	   }
	
	printf("\n");
	i++ ;
	}while(i<=n);
}
