/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "GeeksforGeeks";
    int length;
    printf("%s", str);
    
    length = strlen(str);
    
    printf("\n length of the string is: %d", length);
    
    return 0;
}
