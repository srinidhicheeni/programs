 #include<stdio.h>
int fibo(int num)
{
	if(num==1)
	return 0;
	else if(num==2)
	return 1;
	else
	return (fibo(num-1)+fibo(num-2));
}
int main()
{
	int k,n=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	k=fibo(n);
	printf("The %d term in the fibbonassi series is %d",n,k);
	return 0;
}
