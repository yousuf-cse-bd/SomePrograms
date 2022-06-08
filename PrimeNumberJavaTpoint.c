/**
 * @file PrimeNumberJavaTpoint.c
 * @author javaTpoint(you@domain.com)
 * @brief Simple prime number
 * @version 0.1
 * @date 2022-05-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int n,m, i,flag = 0;
    printf("Enter the number to check prime?: ");
    scanf("%d", &n);
    n = (n > 0)? n : n*(-1);
    m = n / 2;
    for(i = 2; i<=m; i++)
    {
        if(m % i == 0)
        {
            printf("Number is not prime...!\n");
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    printf("Number is prime\n");
    return 0;
}
