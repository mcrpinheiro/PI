//
// Created by utilizador on 28/02/21.
//

#include<stdio.h>


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

void vertical (int a) {
    verticalsup (a);
    verticalinf (a);
}

void vazio (int a) {
    while (a >= 1) {
        printf(" ");
        a--;
    }
}

void horizontal (int a) {
    int b, c;
    b = 1;
    c = ((a*2)-1);
    while (b <= c ) {
        int d;
        d = ((c-b)/2);
       vazio (d);
       linhas(b);
        b = b + 2;
    }
}

void triangulo (int a) {
  horizontal (a);
  vertical (a);
    }

int main () {
    int a;
    scanf ("%d", &a);
    triangulo (a);
    return 0;
}

// resoluções do professor

 /*void trianguloH (int n) {
    //escrever n linhas
    int i, j, // controlar a linha onde vamos
        c, // quantos '#' temos que escrever
        e; // quantos espaços temos que escrever
    c=1;
    e= n-1;
    for (i=0;i<n, i++) {
    // escrever a linnha i
        for (j=0;j<e; j++)
        for (j=0;j<c; j++)
             putchar ('#');
        c = c+2; e = e-1;
        putchar (\n);
    }
}

 void replicate (int n, char c) {
   int i;
   for (i=0; i<n; i++)
      putchar (c);


void trianguloH (int n) {
   //escrever n linhas
   int i, j, // controlar a linha onde vamos
       c, // quantos '#' temos que escrever
       e; // quantos espaços temos que escrever
   c=1;
   e= n-1;
   for (i=0;i<n, i++) {
   // escrever a linnha i
       replicate (e, ' ');
       replicate (c, '#');
            putchar ('#');
       c = c+2; e = e-1;
       putchar (\n);
   }
}

void trianguloV (int n) {
   // escrever n+ (n-1) linhas

   //fase 1: escrever n linhas cada vez com mais cardinais '#'
     for (i=0; i<n; i++) {
        replicate (i+1, '#')
        putchar ('\n');
 }
   //fase 2: escrever n-1 linhas cada vez com menos cardinais '#'
    for (i=n-1; i>0, i--) {
      replicate (i, '#');
       putchar ('\n');
}
*/


