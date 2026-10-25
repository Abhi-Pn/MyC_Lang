#include <stdio.h>

// int main()
// {

//     int age = 32;
//     int *ptr = &age;
//     int age2 = *ptr;

//     printf("%d", age2);
//     return 0;
// }

// int main(){

//     char name[] = "Abhishek";
//     char *ptr = name;
//     // printf("%p\n", &name );
//     printf("%u\n", &name );
//     printf("%u\n", ptr );
//     printf("%u\n", &ptr );
//     printf("%d\n", *(&name) );
//     return 0;
// }

// int main(){
//     int *ptr;
// int x;

// ptr = &x;
// *ptr = 32;

// printf("%d\n", x);
// printf("%d\n", ptr);
// printf("%d\n", *ptr);
// }

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a = 3, b = 5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);

    printf("Sum: %d\nProd: %d\nAvg: %d\n", sum, prod, avg);


    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2; 
};