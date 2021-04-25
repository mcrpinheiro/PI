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

void verticalsup (int a) {
    int b;
    b = 1;
    while (b<=a) {
        linhas (b);
        b = b + 1;
    }
}

void verticalinf (int a) {
    int b;
    b = a-1;
    while (b>=1) {
        linhas (b);
        b--;
    }
}

void triangulo (int a) {
    verticalsup (a);
    verticalinf (a);
}

int main () {
    int a;
    scanf ("%d", &a);
    triangulo (a);
    return 0;
}