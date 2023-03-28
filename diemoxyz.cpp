#include<stdio.h>
#include<conio.h> 
struct diem
{
	int z;
	int y;
	int x;
};
typedef struct diem d;
void nhap(d &t)
{
	fflush(stdin);
	printf("Nhap x:\n ");
	scanf("%d",&t.x);
	printf("Nhap y:\n ");
	scanf("%d",&t.y);
	printf("Nhap z:\n ");
	scanf("%d",&t.z);
}
void xuat(d &t)
{
	printf("diem oxyz (%d;%d;%d)",t.x,t.y,t.z);
}
int main()
{
	diem d;
	nhap(d);
	xuat(d);
}