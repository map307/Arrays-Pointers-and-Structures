/*
 ============================================================================
 Name        : Arrays_DSAdepth.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int arr[5], i;
	for(i=0;i<5;i++)
	{
		printf("enter the value for arr[%d]",i);
		scanf("%d",&arr[i]);
	}

	printf("the array elements are: \n");
	for(i=0; i<5; i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
