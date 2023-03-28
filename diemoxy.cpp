#include<stdio.h>
#include<conio.h> 
struct diem
{
	int x;
	int y;
};
typedef struct diem d;
void nhap(d &t)
{
	fflush(stdin);
	printf("Nhap x:\n ");
	scanf("%d",&t.x);
	printf("Nhap y:\n ");
	scanf("%d",&t.y);
}
void xuat(d &t)
{
	printf("diem oxy (%d;%d)",t.x,t.y);
}
int main()
{
	diem d;
	nhap(d);
	xuat(d);
}