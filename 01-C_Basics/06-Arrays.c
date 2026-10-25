#include <stdio.h>

// int countOdd(int arr[], int n);

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10, 11, 12, 13};
//     printf("%d", countOdd(arr, 13));
//     return 0;
// };

// int countOdd(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             count++; //increase the count of odd number
//         }
        
//     }
//     return count;
// }

// reverse arry important

void reverse(int arr[], int n);
void printArr(int arr[], int n);
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    reverse(arr, 15);
    
    printArr(arr, 10);
    return 0;
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++) //lenght of the array divided by 2
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
};

void reverse(int arr[], int n){
    for (int i = 0; i < n/2; i++)
    {
        int firstVal = arr[i];
        int secVal = arr[n-i-1];
        arr[i] = secVal;
        arr[n-i-1] = firstVal;
    }
};