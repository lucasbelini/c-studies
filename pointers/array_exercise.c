#include <stdio.h>

int main() {
    int numbers[100] = {0};
    int *pointer[100]; 
    int i;

    for(i = 0; i < 100; i++) {
        pointer[i] = &numbers[i];
        *pointer[i] = i;
        printf("%d\n",numbers[i]);    
    }
    

    return 0;
}