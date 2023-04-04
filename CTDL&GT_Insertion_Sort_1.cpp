//https://docs.google.com/presentation/d/1wVgcsVeBGqJk8_Z2dlHCu-Wuxc-ZpKfW/edit#slide=id.p28
Void sxchentructiep(int a[], int i)
{
	int pos, x;
	for(int i=1; i<n; i++)
	{
		x=a[i]; pos=i-1;
		while(pos>=0&&a[pos]>x)
		a[pos+1]=a[pos-1];
		a[pos+1]=x;
	}
}
