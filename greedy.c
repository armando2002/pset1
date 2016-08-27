#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int pennies = 1;
    int nickels = 5;
    int dimes = 10;
    int quarters = 25;
    int coins = 0;
    
    // get amount
    do
    {
        printf("How much change?\n");
        change = GetFloat();
    }
    while(change <= 0);
    
    
    // round the value
    int balance = roundf(change * 100);
    
    // while quarters can be used
    //      increase count
    //      decrease balance by 25    

while(balance >= quarters)    
    {
        coins++;
        balance = balance - quarters;
    }

while(balance >= dimes)
    {
        coins++;
        balance = balance - dimes;
    }
    
while(balance >= nickels)
    {
        coins++;
        balance = balance - nickels;
    }
    
while(balance >= pennies)
    {
        coins++;
        balance = balance - pennies;
    }
   
    printf("%d\n", coins);
    return 0;
}

