/*
 ============================================================================
 Name        : project1.c
 Author      : ayman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	puts("Hello World"); /* prints Hello World */
	int gurd;
	printf("enter your point or enter -1 to exit from program \n");
	scanf("%d", &gurd);
	while(gurd != -1){
		if(gurd >= 60 ){
			
			printf("very good you are successful \n\n");
		}else{
			printf("iam sorry you are faild \n\n");
		}
		printf("enter your point or enter -1 to exit from program \n");
		scanf("%d", &gurd);	
	}
	return EXIT_SUCCESS;
}
