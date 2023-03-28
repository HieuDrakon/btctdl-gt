#include<stdio.h>
#include<conio.h>
//a.n.X^n + a.n-1.X^n-1 + … + a.1.X + a.0
struct dathuc
{
	int a;
	int n;
};
typedef struct dathuc dt;
void nhap(dt &t)
{
	fflush(stdin);
	printf("Nhap he so a:\n ");
	scanf("%d",&t.a);
	printf("Nhap bac cua x:\n ");
	scanf("%d",&t.n);
}
void xuat(dt &t)
{        
	for(int i=0;i<=t.n;t.n--){
		printf("%d.%d.x^%d+0",t.a,t.n,t.n);
}
}
int main()
{
	dathuc dt;
	nhap(dt);
	xuat(dt);
	return 0;
}