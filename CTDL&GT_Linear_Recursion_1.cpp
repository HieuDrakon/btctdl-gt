//https://docs.google.com/presentation/d/11j1ETtrYmVgaXlkqOpFVOFFguYabJFDH/edit#slide=id.p11
longint Fact(int n)
{
	if (n==0) 
			return 1;
	else 
   			return n*Fact(n-1);
}
