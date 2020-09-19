#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();



int main() {
    //Local Declarations
    int option;
    float balance=10000.00;
    int choose;
    bool again = true;

  

    while (again) {
    mainMenu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &option);


        switch (option) {
            case 1:
            	system("CLS");
                checkBalance(balance);
                break;
            case 2:
            	system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3:
            	system("CLS");
                balance = moneyWithdraw(balance);
                break;

            case 4:
            	system("CLS");
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);

        system("CLS");



        if (choose == 2) {
            again = false;
            menuExit();

        }

}


    return 0;
}



