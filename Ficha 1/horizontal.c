#include <stdio.h>
//
// Created by utilizador on 28/02/21.
//

void linhas (int a) {
    int b;
    b=1;
    while (b<=a) {
        printf("#");
        b++;
    }
    printf ("\n");
}

void triangulo (int a) {
    int b;
        b = 1;
        while (b <= ((a*2)-1) ) {
            linhas(b);
            b = b + 2;
    }
}

int main () {
        int a;
        scanf ("%d", &a);
        triangulo (a);
        return 0;
}