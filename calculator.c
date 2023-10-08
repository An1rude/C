#include<stdio.h>
#include<math.h>

int main(){

    int op;
    float a,b;
    
    printf("Enter the value for variable a : ");
    scanf("%f",&a);
    printf("Enter the value for variable b : ");
    scanf("%f",&b);
    while(op!=5){
        printf("Select operation : \n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        scanf("%d",&op);
        switch(op){
            case 1:
            printf("%f\n", a+b);
            break;
            case 2:
            printf("%f\n", a-b);
            break;
            case 3:
            printf("%f\n", a*b);
            break;
            case 4:
            printf("%f\n", a/b);
            break;
            case 5:
            break;
            default:
            printf("Invalid input\n");
            break;
        }
    }

    return 0;
}
