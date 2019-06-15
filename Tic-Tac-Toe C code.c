#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j,a[3][3],n=1,m,ch=0,g,h,c=0;
	char play1[20],play2[20],cur[20];
	do
	{
	printf("\n Enter the name for X player:");
	gets(play1); }while(strlen(play1)==0);
	do
	{
	printf("\n Enter the name for O player:");
	gets(play2);}while(strlen(play2)==0);
	do
	{    do
		{
		printf("\n Who plays first, %s or %s?",play1,play2);
		gets(cur);}while(strlen(cur)==0);
		if((strcmp(cur,play1)!=0)&&(strcmp(cur,play2)!=0))
		{
			printf("\n %s is not a valid player",cur);
		}
	}while((strcmp(cur,play1)!=0)&&(strcmp(cur,play2)!=0));
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=46;
			printf(" %c ",a[i][j] );
		}
	printf("\n");
	}
	do
	{
		if(strcmp(cur,play1)==0)
		{
			printf("\n Player of current turn: %s",play1);
			m=120;
		}
		else
		{
			printf("\n Player of current turn: %s",play2);
			m=111;
		}
		do
		{
			do
			{

				printf("\n Choose a row number (0-2)\n");
				scanf("%d",&i);
				if(i<0||i>2)
				printf("\n %d is not a valid row",i);
			}while(i<0||i>2);
			do
			{
				printf("\n Choose a column number (0-2)\n");
				scanf("%d",&j);
				if(j<0||j>2)
				printf("\n %d is not a valid column",j);
			}while(j<0||j>2);
			if(a[i][j]!=120&&a[i][j]!=111)
			{
				a[i][j]=m;
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						printf(" %c ",a[i][j] );
					}
					printf("\n");
				}
				ch=0;
			}
			else
			{
				printf("\n Already occupied");
				ch=1;
			}




						if((a[0][0]==m&&a[0][1]==m&&a[0][2]==m)||(a[1][0]==m&&a[1][1]==m&&a[1][2]==m)||(a[2][0]==m&&a[2][1]==m&&a[2][2]==m)||(a[0][0]==m&&a[1][1]==m&&a[2][2]==m)||(a[0][0]==m&&a[1][0]==m&&a[2][0]==m)||(a[0][1]==m&&a[1][1]==m&&a[2][1]==m)||(a[0][2]==m&&a[1][1]==m&&a[2][0]==m)||(a[0][2]==m&&a[1][2]==m&&a[2][2]==m))
						{
							c=1;
							printf("\n %s is winner",cur);
							break;
						}
							else
							{
								c=0;
							}





	       }	while(ch!=0);
	       if(c==1)

	       break;
	       else if(c==0&&n==9)
	       {
	       printf("\n DRAW");
	       }


		if(strcmp(cur,play1)==0)
		{
			strcpy(cur,play2);
		}
		else
		{
			strcpy(cur,play1);
		}
		n++;
	}while(n!=10);
getch();
}

