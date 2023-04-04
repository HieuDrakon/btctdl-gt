//https://docs.google.com/presentation/d/11j1ETtrYmVgaXlkqOpFVOFFguYabJFDH/edit#slide=id.p16
long TinhYn (int n)
  {
    if(n==0)
	return 1;
	return n*n*TinhXn(n-1) + 	TinhYn(n-1);
   }
long TinhYn(int n);
long TinhXn (int n)
{
if(n==0)
return 1;
return TinhXn(n-1) + TinhYn(n-1);
}
