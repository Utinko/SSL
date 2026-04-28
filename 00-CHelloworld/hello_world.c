#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    
    // Esta parte del código muestra la versión del estándar de C que se está utilizando
    #ifdef __STDC_VERSION__
        printf("Version de C: %ld\n", __STDC_VERSION__);
    #endif

    return 0;
}