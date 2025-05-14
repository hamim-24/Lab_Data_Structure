#include<stdio.h>
#include<string.h>

#define MAX 100
int stack[100];
int top = -1;

void push(char c) {
    if (top >= MAX) {
        printf("**Stack overflow**\n");
        return ;
    }
    stack[top++] = c;
}

char pop() {
    if (top < 0) {
        printf("**Stack Underflow**\n");
        return '\0';
    }
    return stack[top--];
}

int main() {
    char str[MAX];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i]; i++) push(str[i]);

    
}