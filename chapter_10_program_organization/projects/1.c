#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100


char contents[STACK_SIZE];
int top = 0;


void makeEmpty(void) 
{
    top = 0;
}

bool isEmpty(void) 
{
    return top == 0;
}

bool isFull(void) 
{
    return top == STACK_SIZE;
}

void stackOverflow(void) 
{
    printf("Stack overflow!\n");
    exit(EXIT_FAILURE); 
}

void stackUnderflow(void) 
{
    printf("Parentheses/braces are not nested properly\n");
    exit(EXIT_SUCCESS); 
}

void push(char ch) 
{
    if (isFull()) {
        stackOverflow();
    } else {
        contents[top++] = ch; 
    }
}

char pop(void) 
{
    if (isEmpty()) {
        stackUnderflow();
        return '\0'; 
    } else {
        return contents[--top];
    }
}


int main(void) 
{
    char ch;
    char openCh;

    printf("Enter parentheses and/or braces: ");

    while ((ch = getchar()) != '\n') {
        switch (ch) {
    
            case '(': 
            case '{':
                push(ch);
                break;
            case ')':
                openCh = pop();
                if (openCh != '(') {
                    printf("Parentheses/braces are not nested properly\n");
                    return 0;
                }
                break;

            case '}':
                openCh = pop();
                if (openCh != '{') {
                    printf("Parentheses/braces are not nested properly\n");
                    return 0;
                }
                break;

            default:
    
                break;
        }
    }

  
    if (isEmpty()) {
        printf("Parentheses/braces are nested properly\n");
    } else {
        printf("Parentheses/braces are not nested properly\n");
    }

    return 0;
}