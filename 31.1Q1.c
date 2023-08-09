#include<stdio.h>

void main (){
	
	FILE *ptrr,*ptrw;
	char n;
	
	ptrr = fopen("file.txt","r");
	
	if(ptrr!=NULL){
		printf("file opened...");
				
	}else{
		printf("file can t open...");
		}
		ptrw=fopen("new.html",'w');
			if(ptrw!=NULL){
		printf("file created...");
				
	}else{
		printf("file can t created...");
		}
	n=fgetc(ptrr);
	while(n!=EOF){
		fprintf(ptrw,"%c",n);
		n=fgetc(ptrr);
	}
		
}
