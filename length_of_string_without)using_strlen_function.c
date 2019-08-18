//PROGRAM TO CALCULATE LENGTH OF THE STRING
main()
{
	
	char a[22];
	int i;
	
	printf("enter the value of the string :");
	gets(a);/*a==&a[0]*/
	for(i=0;a[i]!='\0';i++);
	printf("the length of the string is %d:",i);
	getch();
	
	}
