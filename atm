#include<stdio.h>
#include<ctype.h>
long int signon(int newid,int newpass) {
	printf("******************************ZIRAAT BANK*********************************\n");
	printf("ID: "); scanf("%d",&newid);
	printf("Password: "); scanf("%d",&newpass);
	return(newid);
}
void account(int id,int balance) {
	int x,deposit,withdraw;
	account:
	printf("******************************ZIRAAT BANK*********************************\n");
	printf("Your ID: %d\nYour Balance: $%d",id,balance);
	printf("\nPress 1 for Withdraw Cash.\nPress 2 for Make a Deposit.\nPress 3 for Exit.\nWhat do you want to do?\n ");  scanf("%d",&x);
	deposit=0; withdraw=0;
	switch(x) {
		case 1:
			printf("How much money will you withdraw? "); scanf("%d",&withdraw);
			if (withdraw > balance) {
				printf("Insufficient balance. You need to deposit.\n");
				goto account;
			}
			balance -= withdraw;
			printf("Your balance is updated.\n");
			goto account;
		case 2:
			printf("How much money will you deposit? "); scanf("%d",&deposit);
			balance += deposit;
			printf("Your balance is updated.\n");
			goto account;
		case 3:
			printf("******************************ZIRAAT BANK*********************************\n");
			printf("See you later...\n");
			printf("******************************ZIRAAT BANK*********************************\n");
			break;
		default:
			printf("Please enter a valid expression.\n");
			goto account;
	}
}

int main() {
	long int id=0,pass=0,balance=0; char reg;
	question:
    printf("******************************ZIRAAT BANK*********************************\n");
    printf("Do you have an account? (Y/N) "); scanf(" %c",&reg);
	reg=toupper(reg);
	switch(reg) {
		case 'Y':
			printf("Loading...\n");
			id = signon(id,pass);
			account(id,balance);
			break;
		case 'N':
			printf("You can register from here.");
			printf("\nEnter your ID: "); scanf("%d",&id);
			printf("Enter your Password: "); scanf("%d",&pass);
			printf("Your account has been created.\n");
			account(id,balance);
			break;
	    default:
	    	printf("Please enter a valid expression.\n"); 
			goto question;
	    	break;
	}
	return 0;
}
