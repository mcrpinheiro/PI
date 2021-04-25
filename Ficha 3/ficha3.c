#include <stdio.h>
//1 a)
/*
int main () {
    int x [15] = {1,  2, 3, 4, 5,
                  6,  7, 8, 9,10,
                  11,12,13,14,15};
    int *y, *z, i;
    y = x;
    z = x+3;
    for (i=0; i<5; i++) {
        printf ("%d %d %d\n",x[i], *y, *z);
        y = y+1;
        z = z+2;
    }
}


y = x -> &x[0] = 0, *y = 1
z = x + 3 -> &x[3] = 3, *z = 3

i = 0
 x [0] = 1
 y = 1
 z = 4

i = 1
 x [1] = 2
 y = 2
 z = 6

i = 2
 x [2] = 3
 y = 3
 z = 8

i = 3
 x [3] = 4
 y = 4
 z = 10

i = 4
 x [1] = 5
 y = 5
 z = 12

OUTPUT
 1 1 4
 2 2 6
 3 3 8
 4 4 10
 5 5 12
*/

// 1 b)

/*
int main () {
    int i, j, *a, *b;
    i=3;
    j=5;
    a = b = 42;
    a = &i;
    b = &j;
    i++;
    j = i + *b; // i = 3 + 1 - *b = 5 - j = 4 + 5 = 9
    b = a; // b = 4
    j= j + *b; // j = 9 - *b = 3 + 1 = 4 - j + *b = 9 + 4 = 13
    printf ("%d\n", j);
    return 0;
    }

OUTPUT
 13
*/

// 2
void swapM (int *x, int *y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;

}
/*
int main () {
    int x = 3,
    y = 5;
    swapM (&x, &y);
    printf ("%d %d\n", x, y);
} */


// 3
void swap (int v[], int i, int j) {
    int aux;
    aux = *(v + i);
    *(v + i) = *(v + j);
    *(v + j) = aux;
}
/*
int main () {
   int x[2] = {1,2};
   swap (x, 0, 1);
   for (int i = 0; i<2; i++) {
    printf ("%d", x[i]);
   }
}

*/
/*
void swap (int v[], int i, int j) {
    v[i] += v[j];
    v[j] = v[i] - v[j];
    v[i] -= v[j];
}

int main() {
    int x[15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15};
  int i;
    swap(x, 2, 4);
    swap(x, 3, 4);
  for (i = 0; i<15; i++) {
      printf("%d\n", x[i]);
  }
    return 0;
}
*/

//4
int soma (int v[], int N) {
    int i, j;
    j = 0;
    for (i = 0; i<N; i++) {
        j = j + v[i];
    }
    return j;
}
/*
int main() {
    int x[15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15};
    int i = soma (x, 15);
    printf ("%d\n", i);
    return 0;
}
 */
int soma2 (int v[], int N) {
    int i, j;
    j = 0;
    for (i = 0; i<N; i++) {
        j = j + *(v+i);
    }
    return j;
}
/*
int main() {
    int x[15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15};
    int i = soma2 (x, 15);
    printf ("%d\n", i);
    return 0;
}
*/




//5

void inverteArray (int v[], int N) {
    int i,j;
    j = N -1;
    for (i = 0; i < j; i++) {
        swap(v, i, j);
        j--;
    }
}
/*

int main() {
    int x[15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15};
   inverteArray (x, 15);
   int i;
    for (i = 0; i<15; i++) {
        printf("%d\n", x[i]);
    }
    return 0;
}
*/
void inverteArray3 (int v[], int N) {
    int i, j;
    j = N - 1;
        for (i = 0; i<j; i++) {
            swap (v, i, j);
            j--;
        }
}
/*
int main() {
    int x[15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15};
    inverteArray3 (x, 15);
    int i;
    for (i = 0; i<15; i++) {
        printf("%d\n", x[i]);
    }
    return 0;
}
*/
void inverteArray4 (int v[], int N) {
    int i, j;
    j = N - 1;
    for (i = 0; i<j; i++) {
        swapM((v + i), (v + j));
        j--;
    }
}
/*
int main() {
    int x[15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15};
    inverteArray4 (x, 15);
    int i;
    for (i = 0; i<15; i++) {
        printf("%d\n", x[i]);
    }
    return 0;
}
*/
void inverteArray2 (int v[], int N) {
    int i, j;
    j = N-1;
    for (i = 0; i < j; i++) {
        swapM(v+ i,v+ j);
        j--;
    }
}
/*
int main() {
    int x[15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15};
    inverteArray2 (x, 15);
    int i;
    for (i = 0; i<15; i++) {
        printf("%d\n", x[i]);
    }
    return 0;
}
*/

//6

int maximum2 (int v[], int N, int *m) {
    int i;
    *m = v[0];
    for (i = 1; i<N; i++) {
        if (v[i]>*m)
            *m = v[i];
        else
            *m = *m;
    }
    return 0;
}
/*
int main() {
    int x[15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15};
    int y,
            c = maximum2(x,15,&y);
    printf("%d %d\n",c,y);
    return 0;
*/
}
/*
int max (int a, int b) {
    if (a>b)
      return a;
    else
        return b;
}
int maximum (int v[], int N, int *m) {
    int i;
    m = 0;
    for (i=0; i<N; i++) {
        if ((v+i)>m)
        m = v+i;
        else
            m;
    }
}
 */

int maximum (int v[], int N, int *m){
    int i,max;
    if(N>0){
        max=v[0];
        for (i=1;i<N;i++){
            if (v[i]>max) max=v[i];
        }
        *m = max;
        return 0;
    }
}

/*
int main() {
    int x[15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15};
    int y,
    c = maximum(x,15,&y);
        printf("%d %d\n",c,y);
    return 0;

}
*/



//7

void quadrados (int q[], int N){
    int i;
    q[0]=0;
    for (i=0;i<N-1;i++){
        q[i+1]=q[i]+(2*i+1);
    }
}
/*
int main () {
    int x[3];
    quadrados (x, 3);
    for (int i = 0; i<3; i++) {
        printf ("%d", x[i]);
    }
    printf("\n");
}
 */

//8 a)
/*
void pascal (int v[], int N) {
    int i;
    while (i != N) {
        for (i = 0; i < N; i++) {
            v[0] = 1;
            v[i] = v[i - 1];
        }
        i--;

    }
}

*/

/*




void pascal (int v[], int N){
    int q[N-1],i; // q[N-1] vai corresponder à linha anterior à linha desejada
    v[0]=1;
    v[N-1]=1;
    if (N>1){
        pascal(q,N-1);
        for (i=1;i<N-1;i++){
            v[i]=q[i-1]+q[i];
        }
    }
}



void pascal2 (int N){
    int i,j,c;
    for (i=1;i<=N;i++){
        c=1;
        for(j=1;j<=i;j++){
            printf("%d ",c);
            c = c*(i-j)/j;
        }
        printf("\n");
    }
}
void pascal2b (int N) {
     int i, j,
     v[j];
      for(i=0; i<N; i++)
          pascal (v[], i)

}


*/

/*


int main(){
    int x[6]={1,2,3,4,5,6};
    pascal2b (4);
    for (int i=0 ; i<4 ; i++)
        printf("%d ", x[i]);
    putchar ('\n');
    return 0;
}
 */
/*
void pascal (int v[], int N){
    int i,j ; // para sabermos rm que linha estamos
    v[0]= 1;
    for (i=1; i<=N; i++){
        //assumimos que a linha i+1 já está construida
        //construimos a linha i
        v[i]=1;
        for (j=i-1; j>0; j--){
            v[j]=v[j]+v[j-1];
        }

    }
}

void desenhaTriangulpP (int N){
    int i;
    int a[N+1];
    for (i=0; i <=N; i++){
        pascal(a,i);
        dumpV(a,a+1);
    }
}
*/

int sumhtpo (int n){
    int r = 0, par = 0, total = 0;;
    while (n != 1) {
        printf("%d\n", n);
        total++;
        r += n;
        if (n%2 == 0) {n = n/2; par++;}
        else {n = 1+(3*n);}
    }
    printf("%d %d \n", total, par);
    return r;
}
/*
void main () {
    int n=41;
    printf ("%d \n", sumhtpo(n));
}
*/









