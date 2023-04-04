#include <iostream>
#define max 100
using namespace std;
int timkiemtt(int a[], int x)
{
	int i;
	for (i = 0; i < max ; i++) 
	{
		if (a[i] == x)
		{
			return 1;       
		}
	}
	return 0;     
}
int main()
{
	int a[]{ 1,2,3,4,5,6,7,8 };
	int x = 1;  
	if (timkiemtt(a, x))
	{
		cout << " ton tai " << x << " trong mang o vi tri "<<x;
	}
	else
	{
		cout << " khong ton tai " << x << " trong mang";
	}
	return 0;
}