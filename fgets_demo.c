/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX 50
int main()
{
    char str[50];
    printf("Enter any string \n ");
    
    fgets(str,MAX,stdin);
    
    printf("Entered string is -->\n");
    
    puts(str);
    
    return 0;
}
