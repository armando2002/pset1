#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;
    
    do
    {
        printf("height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    //for each row
    for(int row = 0; row < height; row++)
    {
        //print spaces for each row
        //height - 2 = total spaces needed for first
        //subtract 1 and continue
        for(int space = (height -2); space >= row; space--)
        {
            printf(" ");
        }
        // print hashes for each row + 2
        for(int hash = 0; hash < (row + 2); hash++)
        {
            printf("#");
        }
        //print new line
    printf("\n");
    }
    return 0;
}
