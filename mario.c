#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {    
        n = get_int("Height: ");
    } while (n < 0 || n > 8);    // pyramid height must be between 0 and 8
    
    for (int i = 0; i < n; i++)    // iterate over loop n times
    {
        for (int j = 0; j < n - i - 1; j++)  // print (n - i - 1) spaces, increment j by 1 
        {
            printf(" ");  
        }
        for (int j = 0; j < i + 1; j++)  // print (i + 1) hashes, increment j by 1
            printf("#");
        {
            printf("  "); // double space between pyramid halves
        }
        for (int j = 0; j < i + 1; j++)  // repeat hashes
            printf("#");
    
    printf("\n");
    }
}
