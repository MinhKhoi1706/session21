#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	f = fopen("bt01.txt","a");
	if(f == NULL){
		printf("\n loi file");
		return 1;
	}
	
	char n[100];
	printf("nhap chuoi vao file\n");
	fgets(n,100,stdin);
	fprintf(f,"%s", n);
	
	fclose(f);
	printf("ghi vao file thanh cong");
	return 0;
}
