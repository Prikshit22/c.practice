#include <stdio.h>
int main(){
    int n1, n2;
    //operators: + , - , * , / , %
    char op;
    printf("Enter the operator: ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    switch(op){
        case '+': printf("%d + %d = %d", n1, n2, n1 + n2);
        break;
        case '-': printf("%d - %d = %d", n1, n2, n1 - n2);
        break;
        case '*': printf("%d * %d = %d", n1, n2, n1 * n2);
        break;
        case '/': printf("%d / %d = %d", n1, n2, n1 / n2);
        break;
        case '%': int c;
                c = n1 % n2;
                printf("%d", c);
        break;
        default: printf("Invalid operation");
    
        }
    return 0;
}