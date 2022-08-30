#include<stdio.h>

int main(){

    int a, b;

    char op;

    scanf("%c", &op);

    printf("Enter the second number: ");

    printf("Enter the first number: ");

    scanf("%d", &a);

    printf("Enter the operator: ");

    scanf("%d", &b);

    if (op == '+'){

        printf("Result:%d", a+b);

    }

    else if (op == '-'){

        printf("Result:%d", a-b);

    }

    else if (op == '*'){

        printf("Result:%d", a*b);

    }

    else if (op == '/'){

        printf("Result:%f", a/b);

    }

    return 0;

}