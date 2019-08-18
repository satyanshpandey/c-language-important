//in this programming we will be see how to print fibonnaci series in C language
main()
{
	int a,b,c,i,num;
	a=0;
	b=1;
	printf("enter the value of the number :-");
	scanf("%d",&num);
	printf("\n fibonnaci series up to %d term \n ",num);
	printf("%d\t%d",a,b);
	for(i=3;i<=num;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;	
	}
	return(0);	
}
