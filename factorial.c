//program to calculate the simple intrest :-
main()
{
	int fact,num,i;
	fact=1;
	printf("enter the value of the number:- ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact = fact*i;
	}
	printf("factorial of %d=%d\n",num,fact);
	getch();
}
