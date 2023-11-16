#include <stdio.h>



// void bolinma(int a, float b){
//     printf("%d/%f=%f", a, b, a/b);
// }

// int main(){
//     int son1;
//     float son2;
//     scanf("%d%f", &son1, &son2);
//     bolinma(son1, son2);
// }



// void modul(int a){
//     if(a>=0){
//         printf("Moduli: %d", a);
//     }else{
//         printf("Moduli: %d", -1*a);
//     }
// }

// int main(){
//     int son;
//     scanf("%d", &son);
//     modul(son);
// }





// void kichik(int a, int b, int c, int d, int e){
//     if(a<b&&a<c&&a<d&&a<e){
//         printf("Eng kichigi: %d", a);
//     }else if(b<a&&b<c&&b<d&&b<e){
//         printf("Eng kichigi: %d", b);
//     }else if(c<a&&c<b&&c<d&&c<e){
//         printf("Eng kichigi: %d", c);
//     }else if(d<a&&d<b&&d<c&&d<e){
//         printf("Eng kichigi: %d", d);
//     }else{
//         printf("Eng kichigi: %d", e);
//     }
// }

// int main(){
//     int son1, son2, son3, son4, son5;
//     scanf("%d%d%d%d%d", &son1, &son2, &son3, &son4, &son5);
//     kichik(son1, son2, son3, son4, son5);
// }





// void teskari(int n){
//     for(int i=n;i>=1;i-- ){
//         printf("%d ", i);
//     }
// }
// int main(){
//     int N;
//     scanf("%d", &N);
//     teskari(N);
// }





// void natija(int n){
//     for(int i=1; i<=n; i++){
//         if(i%2==0) printf("%d ", i );
//     }puts("");
//     for(int j=n; j>=1; j--){
//         if(j%2!=0) printf("%d ", j);
//     }
// }
// int main(){
//     int N;
//     scanf("%d", &N);
//     natija(N);
// }






// void natija(int a, int b){
//     if(a>b){
//         for(int i=a; i>=b; i-- ){
//             printf("%d ", i);
//         }
//     }else{
//         for(int j=b; j>=a; j--){
//             printf("%d ", j);
//         }
//     }

// }
// int main(){
//     int A, B;
//     scanf("%d%d", &A, &B);
//     natija(A,B);
// }






// int kopaytma(int a, int b){
//     return a*b;
// }
// int main(){
//     int num1=4, num2=53;
//     printf("%d*%d=%d", num1,num2, kopaytma(num1, num2));
// }




// int fun(int a){
//     return a;
// }
// int main(){
//     int num=17;
//     printf("Apple ");
//     printf("%d", fun(num));
// }



// int var(int a){
//     return a=44;
// }

// int main(){
//     int num;
//     printf("%d", var(num));

// }







// float fun(int a, float b){
//     return a+b;
// }
// int main(){
//     int num1=4;
//     float num2=5.6;
//     printf("%d+%f=%f", num1, num2, fun(num1,num2));
// }





// int qoldiq(int a, int b){
//    return a%b;
// }

// int main(){
//     int a,b;
//     scanf("%d%d", &a, &b);
//     printf("Qoldiq: %d", qoldiq(a,b));
// }



char ascii(char n){
    return n+1;
}














