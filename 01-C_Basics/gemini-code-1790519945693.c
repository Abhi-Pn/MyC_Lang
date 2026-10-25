#include <stdio.h>

// Ek global variable jo seed/state ko yaad rakhega
unsigned long int custom_seed = 1;

// 1. Apna khud ka manual 'srand' function
void my_srand(unsigned long int seed_val) {
    custom_seed = seed_val;
}

// 2. Apna khud ka manual 'rand' function (LCG Formula ke zariye)
int my_rand() {
    // Formula: (a * seed + c) % m
    custom_seed = (custom_seed * 1103515245 + 12345);
    return (unsigned int)(custom_seed / 65536) % 32768;
}

int main() {
    int n;

    // Manual seed set karna (jaise time(NULL) ki jagah koi bhi number ya input de sakte hain)
    my_srand(999); 

    // 100 se kam number lane ke liye modulus (%) ka use karna
    n = my_rand() % 100;

    printf("Generated Random Number (0-99): %d\n", n);

    return 0;
}