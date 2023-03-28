#include<stdio.h>
#include<conio.h> 
struct diem
{
	int o;
	int y;
	int x;
};
typedef struct diem d;
void nhap(d &t)
{
	fflush(stdin);
	printf("Nhap 0:\n ");
	scanf("%d",&t.o);
	printf("Nhap x:\n ");
	scanf("%d",&t.x);
	printf("Nhap y:\n ");
	scanf("%d",&t.y);
}
void xuat(d &t)
{
	printf("diem oxy (%d;%d;%d)",t.o,t.x,t.y);
}
int main()
{
	diem d;
	nhap(d);
	xuat(d);
}