#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//PARTE UM

//Exercício 1
int contaVogais (char *s) {
    int i, j = 0;
    for (i=0; s[i]!=0; i++) {
        if ((s[i] == 'a') || (s[i] == 'A') || (s[i] == 'e') ||( s[i] == 'E') ||( s[i] == 'i') || (s[i] == 'I') || (s[i] == 'o') || (s[i] == 'O') || (s[i] == 'u')|| (s[i] == 'U'))
            j++;
    }
    return j;
}

//Exercício 2

int reti (char *s, int i) {
    int j;
    for (j = 0; s[j]!=0; j++ ) {
        s[i] = s[i+1];
        i++;
    }
}

int retiraVogaisRep (char *s) {
    int i, j = 0;
    for (i =0; s[i]!= 0; i++) {
        if (s[i] == s[i+1])
        {
            if ((s[i] == 'a') || (s[i] == 'A') || (s[i] == 'e') ||( s[i] == 'E') ||( s[i] == 'i') || (s[i] == 'I') || (s[i] == 'o') || (s[i] == 'O') || (s[i] == 'u')|| (s[i] == 'U')) {
                reti (s, i--);
                j++;
            }
        }

    }
    return j;
}
//Exercício 3
int dupli (char *s, int i) {
    int j;
    j = (strlen(s) + 1);
    s[j+1] = '\0';
    for (j; j>i; j--) {
        s[j] = s[j-1];
    }
}

int duplicaVogais (char *s) {
    int i, j =0;
    for (i =0; s[i]!= 0; i++) {
        if ((s[i] == 'a') || (s[i] == 'A') || (s[i] == 'e') ||( s[i] == 'E') ||( s[i] == 'i') || (s[i] == 'I') || (s[i] == 'o') || (s[i] == 'O') || (s[i] == 'u')|| (s[i] == 'U')) {
            dupli(s, i);
            i++;
            j++;
        }
    }
    return j;
}

int main () {
    char s[99] = "Fuck life";
    duplicaVogais(s);
    printf("%s\n", s);
    return 0;
}

//PARTE DOIS


//Exercicio 1

int ordenado (int v[], int N) {
    int i;
    for (i = 0; i<N, i++) {
        if (v[i]>v[i+1])
            return 0;
    }
    return 1;
}
//Exercício 2

void merge (int a[], int na, int b[], int nb, int r[]) {
    int i, j, h;
    i = 0;
    j = 0;
    h=0;
    for (i; i< na+nb; i++) {
        if (a[j]>b[h]) {
            r[i] = b[h];
            h++;
        }
        else {
            r[i] = a[j]
            j++;
        }
    }
}

//Exercício 3

int swap (int v[], int i, int j) {
     int x;
     x = v[i];
     v[i] = v[j];
     v[j] = x;
}
int partition (int v[], int N, int x) {
    int i, j = 0;
    for (i=0; i+j<N;i++) {
        if (v[i]>x) {
            swap(v, i, (N - j - 1));
            j++;
            i--;
        }
    }
    return 0;
}
