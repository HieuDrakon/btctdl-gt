#include<stdin.h>
#include<conio.h>
int timkiem(int a[], int n, int x)
{
	int i=0;
	a[n]=x;
	while ( a[i] !=x)
		i++;
	if( i==n)
	return -1; 
	else
	return i; 
}
