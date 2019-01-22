/*
Yjang Wynter

COP3223C

Program 4

9/22/2018

Ninjatactics.c is used to help our friend go shopping, luckily I have two hours to build a program to help.
The program takes the user's input about each store, their prices, and calculates the cheapest option among them.

*/
//pre-processor derivatives
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
//declare variables
int i, j, shops, ingredients, lowestStore;

//Float variables and set lowestPrice to the max value
// so the 1st price is always the lowest one and the 1st store is the lowest one
float price, total, lowestPrice =INT_MAX;

//Prompt user for amount of shops
printf("How many shops will you be visiting?\n");

//Scan user for amount of shops
scanf("%d", &shops);

//Outer for-loop to repeat each shop
for( i=0; i < shops; i++){

//initializing total for every store
total = 0;

//Print User which store they are in
printf(" You are at shop #%d. \n", i+1);

//Prompt user for ingredients need
printf("How many ingredients do you need at shop #%d \n", i+1);

//Scan amount of ingredients needed
scanf("%d", &ingredients);

//Inner for loop to repeat each ingredient
for (j=0; j< ingredients; j++){
//initializing price for each ingredient

price = 0;

 //Prompt user for price of each ingredient
 printf("How much is ingredient #%d?\n", j+1);

 //Scanning the user's prices
 scanf("%f", &price);


//Adding price to total
 total = total + price;
}
//Printing the total for shop up to 2 decimal places.
printf("Your total at shop #%d is $%0.2f\n", i+1, total);

//If statement to find the lowest priced store
if (total < lowestPrice){

//Sets lowest price to total
lowestPrice = total;

//stores the index value for the price
lowestStore = i;
}

}
//prints the cheapest order

printf("Your cheapest order was at shop #%d and cost $%0.2f\n", lowestStore+1, lowestPrice);
//Imma genuis!!

return 0;
}
