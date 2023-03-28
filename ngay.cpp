#include<stdio.h>
#include<conio.h> 
struct ngay
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int h;
};
typedef struct ngay n;
void nhap(n &t)
{
	fflush(stdin);
	printf("Nhap ngay:\n ");
	scanf("%d",&t.a);
	while(t.a>31){
		printf("nhap sai,nhap lai\n");
		scanf("%d",&t.a);
	}
	printf("Nhap thang:\n ");
	scanf("%d",&t.b);
	while(t.b>12){
		printf("nhap sai,nhap laithang \n");
		scanf("%d",&t.b);
	}
	printf("nhap nam \n");
	scanf("%d",&t.c);
	
	printf("nhap gio \n");
	scanf("%d",&t.d);
	while(t.d>12){
		printf("nhap sai,nhap laigio \n");
		scanf("%d",&t.d);
	}
	printf("nhap phut \n");
	scanf("%d",&t.e);
	while(t.e>60){
		printf("nhap sai,nhap lai\n");
		scanf("%d",&t.e);
	}
	printf("nhap giay \n");
	scanf("%d",&t.h);
	while(t.h>60){
		printf("nhap sai,nhap lai\n");
		scanf("%d",&t.h);
	}
	
}
void xuat(n &t)
{
	printf("%d:%d:%d  %d/%d/%d",t.d,t.e,t.h,t.c,t.b,t.a);
}
int main()
{
	ngay n;
	nhap(n);
	xuat(n);
}