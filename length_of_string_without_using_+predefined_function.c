//PROGRAM FOR CALCULATING  length of the string without using predefined function
main()
{
	char a[20];
	int i;

	printf("enter the value of the string :");
	gets(a); //s==&s[0]
	for(i=0;a[i]!='\0';i++);
	printf("the length of the string is the :%d",i);
	getch();
	
}
