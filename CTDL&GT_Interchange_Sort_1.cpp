//https://docs.google.com/presentation/d/1wVgcsVeBGqJk8_Z2dlHCu-Wuxc-ZpKfW/edit#slide=id.p18
Void sxdoicho(int a[], int n)
{
	for(int i=0; i<n-1;i++)
		for(int j=i+1;j<n; j++)
 			if(a[i]>a[j])
			hoanvi(a[i],a[j]);
}
