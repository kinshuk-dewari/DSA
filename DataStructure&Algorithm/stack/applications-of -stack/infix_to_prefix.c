#include<stdio.h>                     //Infix to Postfix
#include<ctype.h>
char stack[100];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
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
    int arr[100];
    char exp[100];
    char  x;
    int i=0,j=0;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    while(exp[i]!='\0')
    {
        push(exp[i]);
        i++;
    }
    i=0;
    while(top!=-1)
    {
        exp[i]=pop();
        i++;
    }
    i=0;
    //printf("%s",exp);
    while(exp[i]!='\0')
    {
        if(isalnum(exp[i]))
            arr[j++]=exp[i];
        else if(exp[i] == ')')
            push(exp[i]);
        else if(exp[i] == '(')
        {
            while((x = pop()) != ')')
                arr[j++]=x;
        }
        else            //priority
        {
            while(priority(stack[top]) >= priority(exp[i]))
                arr[j++]=pop();
            push(exp[i]);
        }
        i++;
    }
    while(top != -1)
    {
        arr[j++]=pop();
    }
    for(j=j-1;j>-1;j--)
    {
        printf("%c",arr[j]);
    }
    printf("\n");
    return 0;
}