#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	f = fopen("bt01.txt","r");
	if(f == NULL){
		printf("\n loi file");
		return 1;
	}
		
	char n = fgetc(f);
			
	printf("%c",n);
	fclose(f);
	
	
	return 0;
}
