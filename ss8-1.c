#include<stdio.h>

int main(){
	int matrix[2][3]={{1,2,3},{4,5,6}};
	int i;
	int j; 
	for(i=1; i>=0; i--){
		for(j=2; j>=0; j--){
			printf("%d", matrix[i][j]);
		} 
	} 
	
	return 0; 
} 
