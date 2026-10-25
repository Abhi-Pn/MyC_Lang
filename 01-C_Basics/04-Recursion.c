#include <stdio.h>

// void printHW(int count);
// int main(){
//     printHW(5);
//     return 0;
// }

// // recursive function
// void printHW(int count){
//     if (count == 0)
//     {
//         return;
//     }
//     printf("Hellow World\n");
//     printHW(count-1);
// }

int sum(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int result = sum(n);
    printf("sum is : %d", result);
    
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n; // sum of 1 to n
    return sumN;
}