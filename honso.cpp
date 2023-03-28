#include<stdio.h>
#include<conio.h> 
struct honso
{
	int a;
	int b;
	int c;
};
typedef struct honso hs;
void nhap(hs &t)
{
	fflush(stdin);
	printf("Nhap tu so:\n ");
	scanf("%d",&t.a);
	printf("Nhap mau so:\n ");
	scanf("%d",&t.b);
	while(t.b==0){
		printf("nhap sai,nhap lai\n");
		scanf("%d",&t.b);
	}
	printf("nhap phan nguyen\n");
	scanf("%d",&t.c);
}
void xuat(hs &t)
{
	printf("%d %d/%d",t.c,t.a,t.b);
}
int main()
{
	honso hs;
	nhap(hs);
	xuat(hs);
	return 0;
}