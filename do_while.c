/*
SYNTAX:

initialization_expression;
do
{
    //body of do while loop

    update_expression;
}

while (test_expression);

*/


#include <stdio.h>

int main()

{
    int i=2;

    do
    {
        printf("hello world");
        i++;
    } while (i>1);

    return 0;
}