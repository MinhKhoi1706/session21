#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	f = fopen("bt01.txt","r");
	if(f == NULL){
		printf("\n loi file");
		return 1;
	}
		
	char n[100];
	
	fscanf(f,"%s",n);			
	printf("%s",n);
	fclose(f);
	
	
	return 0;
}
