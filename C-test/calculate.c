#include <stdio.h>
int main() {
    int a, b, c, d;
    float j, k;
    printf("Welcome to jiike's calculator,enjoy yourself!\n");
    printf("if you want to do addition,please enter 1\nif you want to do Subtraction please enter 2\nif you want to do division,please enter 3\nif you want to do multiplication please enter 4\nif you want to know average value,please enter 5\n");
    printf("please enter:");
    scanf("%d", &a);
    if (a == 1) {
        printf("please enter first and second integer:");
        scanf("%d%d", &b, &c);
        int sum = b + c;
        printf("Has been calculated Do you need to continue to calculate Please enter 1 if necessary,please enter 2 if no need\n");
        scanf("%d", &d);
        while (d == 1) {
            printf("Please enter next two integer£¬if there have no integer£¬please enter 0\n");
            printf("please enter:");
            scanf("%d%d", &b, &c);
            sum = sum + b + c;
            printf("Has been calculated Do you need to continue to calculate Please enter 1 if necessary,please enter 2 if no need\n");
            scanf("%d", &d);
        }
        printf("the sum is%d", sum);
    }
    else if (a == 2) {
        printf("please enter first and second integer:");
        scanf("%d%d", &b, &c);
        double difference = b - c;
        printf("Has been calculated Do you need to continue to calculate? Please enter 1 if necessary,please enter 2 if no need\n");
        scanf("%d", &d);
        while (d == 1) {
            printf("Please enter next two integer f there have no integer please enter 0\n");
            printf("please enter:");
            scanf("%d%d", &b, &c);
            difference = difference - b - c;
            printf("Has been calculated Do you need to continue to calculate? Please enter 1 if necessary,please enter 2 if no need\n");
            scanf("%d", &d);
        }
        printf("the difference is%f", difference);
    }
    else if (a == 3) {
        printf("please enter first and second integer:");
        scanf("%f%f", &j, &k);
        float quotient = j / k;
        printf("Has been calculated Do you need to continue to calculate? Please enter 1 if necessary,please enter 2 if no need\n");
        scanf("%d", &d);
        while (d == 1) {
            printf("Please enter next two integer if there have no integer please enter 1\n");
            printf("please enter:");
            scanf("%f%f", &j, &k);
            quotient = quotient / b / c;
             printf("Has been calculated Do you need to continue to calculate? Please enter 1 if necessary,please enter 2 if no need\n");
            scanf("%d", &d);
        }
         printf("the quotient is%f", quotient);
    }
     else if (a == 4) {
        printf("please enter first and second integer:");
        scanf("%f%f", &j, &k);
        float product = j * k;
        printf("Has been calculated Do you need to continue to calculate? Please enter 1 if necessary,please enter 2 if no need\n");
        scanf("%d", &d);
        while (d == 1) {
            printf("Please enter next two integer if there have no integer please enter 1\n");
            printf("please enter:");
            scanf("%f%f", &j, &k);
            product = product * j * k;
            printf("Has been calculated Do you need to continue to calculate? Please enter 1 if necessary,please enter 2 if no need\n");
            scanf("%d", &d);
        }
         printf("the product is%f", product);
     }
     else if (a == 5) {
        int count = 0;
        float sum = 0;
        float average;
        printf("please enter first integer,use 0 to Esc\nplease enter:");
        scanf("%f", &j);
        while (j != 0) {
            sum = sum + j;
            count = count +1;
            printf("please enter next integer");
            scanf("%f", &j);
        }
        average = sum / count;
        printf("the average is%f", average);
     }
     return 0;
}
