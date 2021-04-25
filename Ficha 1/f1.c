#include <stdio.h>
/*

void trespontoum (int a) {
    int b,c;
    b = a;
    while (b>0) {
        c=a;
            while (c>0) {
                putchar ('#');
                c--;
        }
            printf ("\n");
            b--;
    }
}
// resolução do professor

/* void quadrado (int n) {
 //escrever n linhas
     int i, j; //i para controlar quantas linhas foram escritas
      for (i==0;i<n;i++) {
 // escrever uma linha, i.e, escrever n "#" e depois "\n"
     for (j=0; j<n; j++)
       putchar ('#');
     putchar ('\n');

 }
 }
*/

/*
void quadrado (int n) {
  int i;
  for (i=1; i<=n*n;i++) {
  putchar ('#');
  if (i%n == 0) putchar ('\n');
  }
}
 */


// função main para invocar trespontoum
/*int main() {
    int a;
    scanf ("%d", &a);
    trespontoum (a);
    return 0;
}*/


void trespontodois (int a) {
    int b, c;
    b = a;
    c = a;
    while (c>0) {
        if (c % 2 != 0) {
            while (b > 0) {
                if (b % 2 == 0) putchar('_');
                else putchar('#');
                b--;}}

        else {
            while (b > 0) {
                if (b % 2 == 0) putchar('#');
                else putchar('_');
                b--;}}
        b=a; // quando acaba o ciclo do while o valor do b tem que voltar a ser o valor original, ou seja, a
        printf ("\n");
        c--;
    }
}

/*int main() {
    int a;
    scanf ("%d", &a);
    trespontodois (a);
    return 0;
}*/


// resoluções do professor
/*
void xadrez (int n) {
    int i;
    for (i=1; i<=n*n;i++) {
    // escrever a linha i
         if (i%2 == 0)
            // escrever uma linha par
            for (j=0; j<n; j++)
              if (j%2 == 0)
                putchar ('#');
              else
                putchar ('_');
         else
           // linhas impares
              for (j=0; j<n; j++)
                 if (j%2 == 0)
                    putchar ('_');
                 else putchar ('#');
         putchar ('\n');
    }
}

 void xadrez2 (int n) {
    // inscrever n linhas
    int i, j;
    for (i=0; i<n; i++) {
       // escrever a linha i
       if ( (i%2==0 && j%2==0) || i%2 != 0 && j%2 != 0)
           putchar ('#');
       else
           putchar ('_');
       putchar ('\n');

   }
 }
  void xadrez2 (int n) {
    // inscrever n linhas
    int i, j;
    for (i=0; i<n; i++) {
       // escrever a linha i
       if (i%2==j%2)
           putchar ('#');
       else
           putchar ('_');
       putchar ('\n');

   }
 }
*/
/*

void circulo (int a)  {
    int x, y;
      for (y = a; y >=-a; y--) {
         for (x=-a; x<= a; x++) {
             if (x*x+y*y<= a*a)
                  putchar ('#');
             else putchar (' ');
         }
         putchar ('\n');
      }
}

 int main () {
    int a;
    scanf ("%d", &a);
    circulo(a);
}
*/

int main () {
    int x = 21;
    int r = 0;
    while (x > 0) {
        r += 1;
        x = x - r;
    }
    printf ("%d", r);
    return r;
}
