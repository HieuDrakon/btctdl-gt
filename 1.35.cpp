#include<stdio.h>
#include<conio.h>
#include <string>
struct ngay
{
	int ngay;
	int thang;
	int nam;
}; 
typedef struct ngay n;
struct sotk
{
	char ms[5];
	char loaitk[10];
	char tkh[30]={"null"};
	double cmnd;	
	float sotiengui;
	
};
typedef struct sotk stk;
void nhap(stk &t,n &n)
{
	fflush(stdin);
	printf("Nhap ma so:\n ");
	scanf("%d",&t.ms);
	printf("Nhap loai tiet kiem:\n ");
	scanf("%d",&t.loaitk);
	printf("Nhap ten khach hang:\n ");
	scanf("%d",&t.tkh);
	printf("Nhap cmnd:\n ");
	scanf("%d",&t.cmnd);
	printf("Nhap ngay mo so:\n ");
	scanf("%d",&n.thang);
	printf("Nhap nam mo so:\n ");
	scanf("%d",&n.nam);
	printf("Nhap so tien gui:\n ");
	scanf("%d",&t.sotiengui);
}
void xuat(stk &t,n &n)
{
	printf("thong tin: (%d--%d--%d--%d--%d--%d--%d--%d)",t.ms,t.loaitk,t.tkh,t.cmnd,n.ngay,n.thang,n.nam,t.sotiengui);
}
int main()
{
	sotk stk;
	ngay n;
	nhap(stk,n);
	xuat(stk,n);
}