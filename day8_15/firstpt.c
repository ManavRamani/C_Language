#include<stdio.h>
void main(){
	int i=5;
	
	while(i>=0){
		int j=5;
		while(j>=i){
			printf("%d",j);
			j--;
		}
			i--;
		printf("\n");
	
	}
}
