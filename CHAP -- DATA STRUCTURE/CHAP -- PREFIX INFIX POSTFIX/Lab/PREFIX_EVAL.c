#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to evaluate prefix expression using stack
int evaluatePrefix(char* prefix) {
    int stack[100];
    int top = -1;
    int operand1, operand2;
    int i = strlen(prefix) - 1;
	
    while (i >= 0) {
        if (isdigit(prefix[i])) {
            stack[++top] = prefix[i] - '0';
			} else {
            operand1 = stack[top--];
            operand2 = stack[top--];
            switch (prefix[i]) {
                case '+':
				stack[++top] = operand1 + operand2;
				break;
				case '-':
				stack[++top] = operand2 - operand1;
				break;
                case '*':
				stack[++top] = operand1 * operand2;
				break;
                case '/':
				stack[++top] = operand2 / operand1;
				break;
			}
		}
        i--;
	}
    return stack[top];
}

int main() {
    char prefix[100];
    printf("Enter prefix expression: ");
    scanf("%s", prefix);
    printf("Result: %d\n", evaluatePrefix(prefix));
    return 0;
}
