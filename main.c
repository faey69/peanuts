/*Created by Faey. Discord: Faey#8922*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

void hashtags(){

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns=csbi.srWindow.Right-csbi.srWindow.Left+1;

    for(int i=0; i<columns; i++){
            printf("#");
    }
}

void manaMatCalc(){
    float price, amount, numOfStks;
    char loop;

    do{
        printf("\nEnter current Summer Shell price per stk [eg: 30000]: ");
        scanf("%f", &price);
        printf("\nEnter amount of Mana mats [eg: 100000]: ");
        scanf("%f", &amount);

        printf("\nMana mats per stk of Summer Shell is 990pt");

        numOfStks = amount / 990;

        printf("\nNumber of stks needed: %.2f Spaninis", numOfStks);
        printf("\nCost for the Mana needed: %d Spaninis", (int)(numOfStks*price));

        printf("\n\nContinue? [y/n]: ");
        scanf(" %c", &loop);
        hashtags();
        printf("\n");
    }while(tolower(loop)=='y');
}

void cbPriceCalc(){
    float price, totalPrice, profit, tax, interCBprice;
    int numOfItems;
    char loop;

    do{
        printf("\nEnter price of single item (like how you would enter it on cb):");
        scanf("%f", &price);
        printf("\nEnter number of items:");
        scanf("%d", &numOfItems);
        printf("\nEnter %% of Tax:");
        scanf("%f", &tax);
        tax=tax*0.01;
        totalPrice=price*numOfItems;
        if(totalPrice>=10){
            profit=totalPrice*0.9;
        }
        else
            profit=totalPrice;

        interCBprice=(price*tax+price)*numOfItems;

        printf("\nProfit: %d Spaninis", (int)profit);
        printf("\nInternational CB price: %d Spaninis", (int)interCBprice);
        printf("\n\nContinue? [y/n]: ");
        scanf(" %c", &loop);
        hashtags();
        printf("\n");
    }while(tolower(loop)=='y');
}

void revitaVIcalc(){
    char loop;
    float flowerNectarStks, flowerNectarQty;
    float revitaVIqty;

    do{
        printf("\nEnter number of Flower Nectar stks: ");
        scanf("%f", &flowerNectarStks);
        flowerNectarQty=flowerNectarStks*99;
        revitaVIqty=5*(flowerNectarQty/28);

        printf("\nNumber of Revita VI: %.2f", revitaVIqty);
        printf("\nNumber of Revita VI stks: %.2f", revitaVIqty/99);

        printf("\n\nContinue? [y/n]: ");
        scanf(" %c", &loop);
        hashtags();
        printf("\n");
    }while(tolower(loop)=='y');
}

int main()
{
    char end='n';
    char selection;

    while(tolower(end)!='y'){
        system("cls");
        hashtags();
        printf("\nHelpful tools for Toram Online");
        printf("\nMain Menu: ");
        printf("\n1. Mana mat cost calculator.");
        printf("\n2. CB price calculator.");
        printf("\n3. Revita VI craft calculator.");
        printf("\n4. Tanaka Site for statting formula through browser. (http://tanaka0.work/)");
        printf("\n5. !!!MOTIVATION!!!");
        printf("\n0. Exit");
        printf("\n");
        hashtags();
        printf("\nSelect from the main menu: ");
        scanf(" %c", &selection);
        hashtags();
        switch(selection){
            case '1':manaMatCalc();
            break;
            case '2':cbPriceCalc();
            break;
            case '3':revitaVIcalc();
            break;
            case '4':system("start http://tanaka0.work/");
            break;
            case '5':system("start https://faey69.github.io/peanuts/");
            break;
            case '0':end='y';
            break;

            default: printf("\nError! Please select from the main menu.");
        }
    }
    return 0;
}
