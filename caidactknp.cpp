int BinarySearch(int a[ ],int l, int r,int x){
	int m
	while (l<=r){
		int m=(l+r)/2;
		if (a[m]==x) return m;
		if (x<a[m]) r=m-1;
		if (x>a[m]) l=m+1;
	}
	return -1;
}
