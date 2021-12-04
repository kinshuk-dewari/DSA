#include <stdio.h>
#include <ctype.h>

#define MAXSTACK 100 
#define POSTFIXSIZE 100 

int stack[MAXSTACK];
int top = -1; 

void push(int item)
{
        stack[++top] = item;
    
}
int pop()
{ 
    int item;
    item = stack[top--];        
    return item;
    
}
void EvalPostfix(char postfix[])
{

    int i=0;
    char ch;    // to store operator
    int val;    // to store the result
    int A, B;   
   
    while(postfix[i]!='\0')
    {
        ch = postfix[i];
        if (isdigit(ch)) {
            /* we saw an operand,push the digit onto stack
                ch - '0' is used for getting digit rather than ASCII code of digit */
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {        
            A = pop();
            B = pop();

            switch (ch) 
            {
              case '*':
                val = B * A;
                break;

              case '/':
                val = B / A;
                break;

              case '+':
                val = B + A;
                break;

              case '-':
                val = B - A;
                break;               
             
            }
            /* push the value obtained above onto the stack */
            push(val);
        }
        i++;
    }
    printf(" \n Result of expression evaluation : %d \n", pop());
}

int main()
{
    int i;  
    char postfix[POSTFIXSIZE]; 

    printf(" \nEnter postfix expression : ");
    scanf("%s",&postfix);
    EvalPostfix(postfix);

    return 0;
}



