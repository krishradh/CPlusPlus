/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void printStr(char str[])
{
    printf("\n String is : %s", str);
}

int main()
{
    char str[] = "GeeksforGeeks Programming";
    
    printStr(str);

    return 0;
}
