#include <stdio.h>
#include <math.h>

// int main()
// {
//     int num;
//     scanf("%d", &num);
//     printf("Numbers from 0 to %d are:\n", num);
//     for(int i=0; i<=num; i++)
//     {
//         printf("%d\n", i);
//     }
// }

// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

/*    int sum = 0;
    for (int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum is %d", sum);
} */

/* int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
        printf("%d \n", n*i);
    }
} */

// int main()
// {

//     int n;
//     do
//     {
//         printf("Please enter a number: ");
//         scanf("%d", &n);
//         printf("%d \n", n);

//         if(n % 2 != 0){
//             break;
//         };
//     } while (1);
//     printf("You have enterned an odd nnumber");
// }

// int main(){

//     for (int i = 1; i <=9; i++)
//     {
//         if (i == 2)
//         {
//           continue;
//         };

//        printf("%d \n", i);
//     };

// }

// int main (){

//     for (int i = 5; i <= 50; i++)
//     {
//      if(i % 2 != 0)
//      printf("%d \n", i);
//     };

// }

// int main(){

//     int n, fact;
//     fact = 1;
//     printf("Enter your number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     printf("Your factorial number is \n %d", fact);
// }

// int sum(int a, int b);

// int main(){
//     int a, b;
//     printf("Please enter first number: ");
//     scanf("%d", &a);
//     printf("Now enter second number: ");
//     scanf("%d", &b);

//     int s = sum(a, b);
//     printf("Sum is: %d", s);
//     return 0;
// }

// int sum(int a, int b){
//     return a + b;
// }

// void clacgst( float value);

// int main(){
//     int price;
//   printf("Enter price: ");
//   scanf("%d", &price);
//   clacgst(price);

// }
// void clacgst( float value){
//     value = value + ( 0.18 * value);
//     printf("Final price with GST: %f", value);
// }

// int main(){
//     int sq;
//     printf("Enter a number: ");
//     scanf("%d", &sq);
//     printf("Square root is: %0.f", pow(sq, 2 ));
// }

float sqArea(float side);
float cirArea(float rdi);
float recArea(float a, float b);

int main()
{
    int choice;
    float side, rdi, a, b, area;

    printf("Shapes Area Calculator \n");
    printf("Enter 1. for Square \n");
    printf("Enter 2. for Circle \n");
    printf("Enter 3. for Rectangle \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter side of Square: ");
        scanf("%f", &side);
        area = sqArea(side);
        printf("Area of Square is: %0.f", area);
        break;

    case 2:
        printf("Enter radius of Circle: ");
        scanf("%f", &rdi);
        area = cirArea(rdi);
        printf("Area of Circle is: %.2f", area); // .2 is to print two digits after the decimal
        break;

    case 3:
        printf("Enter sides of Rectangle: ");
        scanf("%f %f", &a, &b);
        area = recArea(a, b);
        printf("Area of Rectangel is: %0.f", area);
        break;

    default:
        break;
    }
}

float sqArea(float side)
{
    return side * side;
};

float cirArea(float rdi)
{
    return 3.14 * rdi * rdi;
};

float recArea(float a, float b)
{
    return a * b;
};