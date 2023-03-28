#include<stdio.h>
#include<conio.h> 
struct donthuc
{
	int a;
	int b;
};
typedef struct donthuc dt;
void nhap(dt &t)
{
	fflush(stdin);
	printf("Nhap he so a:\n ");
	scanf("%d",&t.a);
	printf("Nhap bac cua x:\n ");
	scanf("%d",&t.b);
}
void xuat(dt &t)
{         
	printf("%dx^%d",t.a,t.b);
}
int main()
{
	donthuc dt;
	nhap(dt);
	xuat(dt);
	return 0;
}