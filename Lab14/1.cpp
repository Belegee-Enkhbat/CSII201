#include<stdio.h>
int main(){
	int i, a[100];
	for(i=0; i<5; i++)
		scanf("%d", a+i);
	for(i=0; i<5; i++)
		printf("%d\n", *(a+i));
	return 0;
}