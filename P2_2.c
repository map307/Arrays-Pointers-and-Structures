/*
 ============================================================================
 Name        : P2_2.c
 Author      : mayur
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>

void main(void)
{
setvbuf(stdout, NULL, _IONBF, 0);

int i, arr[10] = {2,5,54,1,8,9,11,6,3,7};
int small,large;
small=large= arr[0];

for(i=1; i<10; i++)
{
	if(arr[i] < small)
		small = arr[i];

	if(arr[1] > large)
		large = arr[i];
}
	printf("Smallest = %d , Largest = %d \n",small, large);
}
