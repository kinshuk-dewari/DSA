#include<stdio.h>                     //Infix to Postfix
#include<ctype.h>
char stack[100];
int top = -1;
// push the operator char into the stack
void push(char x)
{
    stack[++top] = x;
}
// pop the operator from the stack
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
//  chech   the priority of the operators
int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x=='^') 
        return 3;

    return 0;
}
int main()
{
    char exp[100];
    char  x;
    int i=0;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    while(exp[i]!='\0')
    {
        if(isalnum(exp[i]))         //to check if the character is alphabet  or digit
            printf("%c ",exp[i]);
        else if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else            //priority
        {
            while(priority(stack[top]) >= priority(exp[i]))
                printf("%c ",pop());
            push(exp[i]);
        }
        i++;
    }
    while(top != -1)            //pop  the  last remaining operators from the stack
    {
        printf("%c ",pop());
    }
    printf("\n");
    return 0;
}
