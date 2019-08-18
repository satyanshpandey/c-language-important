/* my frist switch case program of my personal information */
main()
{
	int num1;
	printf("enter the value of the month:");
	scanf("%d",&num1);
	switch(num1)
	{
		case 1:
			printf("\t\t\t\t\t January");
			break;
		case 2:
			printf("\t\t\t\t\t February");
			break;
		case 3:
			printf("\t\t\t\t\t March");
			break;
		case 4:
			printf("\t\t\t\t\t April");
			break;
		case 5:
			printf("\t\t\t\t\t May");
			break;
		case 6:
			printf("\t\t\t\t\t June");
			break;
		case 7:
			printf("\t\t\t\t\t July");
			break;
		case 8:
			printf("\t\t\t\t\t August");
			break;
		case 9:
			printf("\t\t\t\t\t September");
			break;
		case 10:
			printf("\t\t\t\t\t October");
			break;
		case 11:
			printf(" \t\t\t\t\t November");
			break;
		case 12:
			printf("\t\t\t\t\t December");
			break;
		
		default:printf("dear SATYANSH PANDEY which value you are entered is invalid \n please input value between 1 to 12 \n thanks!!!!!!......");
		exit(0);		
	}
	
	getch();
}

