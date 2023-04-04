//https://docs.google.com/presentation/d/11j1ETtrYmVgaXlkqOpFVOFFguYabJFDH/edit#slide=id.p13
int Fibo(int n) 
{
 if ( n < 2 ) 
	return 1 ; 
else 
	return (Fibo(n -1) + Fibo(n -2)) ; 
} 
