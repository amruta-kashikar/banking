#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int TotalAmount=1000,Amount,Amo,Tr,TotalDeposit=0,TotalWithDrawal=0,TotalTransfer=0;
int List()
{
	int ch;
	printf("\n 1.Deposit Amount");
	printf("\n 2.Withdraw Amount");
	printf("\n 3.Transfer Amount");
	printf("\n 4.Check Detail");
	printf("\n 5.Exit");
	printf("\n Enter Your Choice");
	scanf("%d",&ch);
	return(ch);
}
void Deposit()
{
	printf("\n Enter the amount that you want to Deposit");
	scanf("%d",&Amount);
	TotalAmount+=Amount;
}
void WithDraw()
{
	printf("\n Enter the amount that you want to Withdraw");
	scanf("%d",&Amo);
	if(Amo<=TotalAmount)
	TotalAmount-=Amo;
	else
	printf("\n More amount withdrawal is not possible");
}
void Transfer()
{
	printf("\n Enter the amount that you want to Transfer");
	scanf("%d",&Tr);
	if(Tr<=TotalAmount)
	TotalAmount-=Amount;
	else
	printf("\n Less amount Transfer not possible");
}
void CheckDetail()
{
	printf("\n Total Amount : %d",TotalAmount);
	printf("\n Total Deposit Amount : %d",TotalDeposit);
	printf("\n Total Withdrawal Amount : %d",TotalWithDrawal);
	printf("\n Total Transfer Amount : %d",TotalTransfer);
}
int main()
{
	system("cls");
	while(1)
	{
		switch(List())
		{
			case 1:
				Deposit();
				TotalDeposit+=Amount;
				break;
			case 2:
				WithDraw();
				if(Amo<=TotalAmount)
				TotalWithDrawal+=Amo;
				break;
			case 3:
				Transfer();
				if(Tr<=TotalAmount)
				TotalTransfer+=Tr;
			case 4:
				CheckDetail();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Invalid Choice !!!!!");
		}
	}
	getch();
}

