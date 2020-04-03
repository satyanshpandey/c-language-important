//Program to find the prime numbers between two numbrs:
main()
{
	int lower,upper,x,i;
	printf("Enter 'Lower' limit and 'Upper' limit:");
	scanf("%d%d",&lower,&upper);
	for(x=lower;x<=upper;x++){
		for(i=2;i<x;i++)
		    if(x%i==0)
		       break;
        if(x==i)
            printf(" %d ",i);
	}
}
