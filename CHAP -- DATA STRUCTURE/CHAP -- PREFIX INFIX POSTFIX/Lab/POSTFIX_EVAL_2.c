#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to evaluate postfix expression using stack
int evaluatePostfix(char* postfix) {
    int stack[100];
    int top = -1;
    int operand1, operand2;
    int i = 0;

    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) {
            stack[++top] = postfix[i] - '0';
        } else {
            operand2 = stack[top--];
            operand1 = stack[top--];
            switch (postfix[i]) {
                case '+':
                    stack[++top] = operand1 + operand2;
                    break;
                case '-':
                    stack[++top] = operand1 - operand2;
                    break;
                case '*':
                    stack[++top] = operand1 * operand2;
                    break;
                case '/':
                    stack[++top] = operand1 / operand2;
                    break;
            }
        }
        i++;
    }
    return stack[top];
}

int main() {
    char postfix[100];
    printf("Enter postfix expression: ");
    scanf("%s", postfix);
    printf("Result: %d\n", evaluatePostfix(postfix));
    return 0;
}

