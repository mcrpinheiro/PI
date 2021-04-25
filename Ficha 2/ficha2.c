#include <stdio.h>
// EXERCÍCIO 1
float multInt1 (int a, float b) {
    int c;
    float r, d;
    r = 0;
    c = 1;
    while (c<=a) {
        r = b + r;
    c++;
    }
    d=r;
    return d;
}
// função main do exercício 1
/*
int main () {
    int a;
    float b,c;
    scanf ("%d %f", &a, &b);
    c = multInt1(a,b);
    printf ("%f\n", c);
}
*/
// EXERCÍCIO 2
float multInt2 (int n, float m) {
    float r;
    r = 0;
    while (n>=1) {
        if (n % 2 == 1) {
            r = r + m;
            n = (n - 1) / 2;
        }
        else {
            r = r ;
            n = n/ 2;
        }
    m = m * 2;
    }
    return r;
}
// Função main do exercício 2
/*
int main () {
    int a;
    float b,c;
    scanf ("%d %f", &a, &b);
    c = multInt2 (a,b);
    printf ("%f\n", c);
}
 */
// EXERCÍCIO 2 (com contador de operações feitas)
float multInt3 (int n, float m, int *count) {
    float r;
    r = 0;
    while (n>=1) {
        if (n % 2 == 1) {
            r = r + m;
            n = (n - 1) / 2;
            (*count)++;
        }
        else {
            r = r ;
            n = n/ 2;
        }
        m = m * 2;
    }
    (*count)--;
    return r;
}
// Função main do exercício 2 (com contador de operações feitas)
/*
int main () {
    int a, d, *e;
    d=0;
    e=&d;
    float b,c;
    scanf ("%d %f", &a, &b);
    c = multInt3 (a,b,e);
    printf ("%f %d\n", c, d);
}
*/

// EXERCÍCIO 3
int mdc1 (int a ,int b) {
    if (b<a)
       {int c=a;
            a=b;
            b=c;
       } //serve para meter o a a ser mais pequeno q o b
    for (int i =a;i>0;i--) {
        if (a%i==0 && b%i==0) return i;
    }
}

// Função main do exercício 3
/*int main () {
    int a, b,c;
    scanf ("%d %d", &a, &b);
    c = mdc1 (a,b);
    printf ("%d\n", c);
}*/


// EXERCÍCIO 4
int mdc2 (int a, int b) {
    int c,d;
    c=a;
    d=b;
    while (a*b!=0) {
        if (a < b)
            b = b - a;
        else a = a - b;
    }
    if (a==0) return b;
    else return a;
}
// Função main do exercício 4
/*
int main () {
    int a,b,c;
    scanf ("%d %d", &a, &b);
    c = mdc2 (a,b);
    printf ("%d\n", c);
}
*/

// EXERCÍCIO 4 (com contagem de iterações do ciclo)
int mdc3 (int a, int b, int *count) {
    int c,d;
    c=a;
    d=b;
    while (a*b!=0) {
        if (a < b)
            b = b - a;
        else a = a - b;
        (*count)++;
    }

    if (a==0) return b;
    else return a;
}
// Função main do exercício 4 (com contagem de iterações do ciclo)
/*
int main () {
    int a,b, c, d, *e;
    d=0;
    e=&d;
    scanf ("%d %d", &a, &b);
    c = mdc3(a,b,e);
    printf ("%d %d\n", c, d);
}
*/


// EXERCÍCIO 5
int mdc4 (int a, int b) {
    int c,d;
    c=a;
    d=b;
    while (a*b!=0) {
        if (a < b)
            b = b%a;
        else a = a%b;
    }
    if (a==0) return b;
    else return a;
}
// Função main do exercício 5
/*
int main () {
    int a,b,c;
    scanf ("%d %d", &a, &b);
    c = mdc4 (a,b);
    printf ("%d\n", c);
}
 */


// EXERCÍCIO 6

// ALÍNEA A)
int fib1 (int a) {
    if (a<2)
        return 1;
    else
        return (fib1 (a-1) + fib1 (a-2));

}
// Função main da alínea a) do exercício 6
/*
int main () {
    int a,b;
    scanf ("%d", &a);
    b = fib1 (a);
    printf ("%d\n", b);
}
*/
// ALÍNEA B
int fib2 (int a) {
    int b,c,d,k;
    b=1;
    c=0;
    for (k=1;k<a; k++) {
        d = b+c;
        c = b;
        b =d;
    }
    return d;
}
// Função main da alínea b) do exercício 6
/*
int main () {
    int a,b;
    scanf ("%d", &a);
    b = fib2 (a);
    printf ("%d\n", b);
}*/


//RESOLUÇÃO DO PROFESSOR

//1
float multInta (int n, float m) {

    float r = 0.0;
    int i;
    for (i=0; i<n; i++) {
        r +=m; // r = r +m
    }
    return r;
}

//2

float multIntb (int n, float m, int *count) {
    float r = 0.0, s = m;
    int i;
    *count = 0;
    for (i=n; i>0; i/=2) {
         if (i%2 != 0)
             r += s;
             *count+=1;
        s= s*2;
        *count+=1;
    }
}

//3

// if (a<b) return a else return b == return a<b = a; b;
int menor (int a, int b) {
    if (a<b) return a;
    return b;
}

int mdca (int a, int b) {
    int m = menor (a,b);
    int i;
    for (i= m; i>0;i--) {
        if (a%i == 0 && b%i == 0) {
            return i;
        }
        return 0;
    }
}

//4

int mdcb (int a, int b, int *count) {
    *count = 0;
    while (a!=0 && b!=0) {
       if (b>a)
           b-=a;
       else
           a-=b;
        *count +=1;
    }
     if (a==0) return b;
     return a;
}

int mdcb (int a, int b, int *count) {
    *count = 0;
    while (a!=0 && b!=0) {
        if (b>a)
            b%=a;
        else
            a%=b;
        *count +=1;
    }
    if (a==0) return b;
    return a;
}

int fib (int n) {
    if (n<2) return 1;
    return fib(n-1) + fib(n-2);
}

int fastfib (int n) {
    int x1 = 0, x2 = 1, aux;
    while (n>0) {
        x1=x2;
        x2 = x1+x2;
        n--;
    }
    return x2;
}