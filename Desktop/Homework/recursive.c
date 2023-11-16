#include <stdio.h>
#include <string.h>
#include <ctype.h>

//1-masala

// int faktoral(int son){
//     if(son==0){
//         return 1;
//     }
//     return son * faktoral(son-1);
// }

// int main(){
//     int a;
//     printf("Kiriting: ");
//     scanf("%d", &a);
//     printf("%d", faktoral(a));
//     }




//2-masala

// int hisobla(int a, int d){
//     if(d==0){
//         return 1;
//     }
//     return a * hisobla(a,d-1);
// }

// int main(){
//     int asos, daraja;
//     printf("Kiriting: ");
//     scanf("%d %d", &asos, &daraja);
//     printf("%d ning %d-darajasi-> %d", asos, daraja, hisobla(asos,daraja));
// }



//3-masala

// void juft(int n){
//     if(n<0){
//         return;
//     }
//     if(n%2==0){
//         printf("%d ", n);
//       }
//     juft(n-1);
    
// }

// int main(){
//     int n;
//     printf("Kiriting: ");
//     scanf("%d", &n);
//     juft(n);

// }




//4-masala

// void toq(int n){
//     if(n==0){
//         return;
//     }
//     toq(n-1);
//     if(n%2!=0){
//        printf("%d ", n);
//     }

// }

// int main(){
//     int n;
//     printf("Kiriting: ");
//     scanf("%d", &n);
//     toq(n);
// }





//5-masala

// float hisobla(float a, int d){
//     if(a==0&&d!=0){
//         return 0;
//     }
//     if(d==0&&a!=0){
//         return 1;
//     }
//     if(d>0){
//         return a * hisobla(a, d-1);
//     }else {
//         return 1.0 / (a * hisobla(a,-d-1));
//     }
// }

// int main(){
//     float asos;
//     int daraja;
//     printf("Kiritng: ");
//     scanf("%f%d", &asos, &daraja);
//     printf("%.2f ning %d-darajasi -> %.3f", asos, daraja, hisobla(asos, daraja));
// }





//6-masala

// int sum(int son){
//     if(son<=0){
//         return 0;
//     }return son%10+sum(son/10);
    
// }

// int main(){

//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     printf("%d ning raqamlari yig'indisi -> %d", son, sum(son));
// }





//7-masala

// void teskari(int son){
//     if(son==0){
//         return; 
//     }
//     printf("%d ", son%10);
//     teskari(son/10);
// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d",&son);
//     teskari(son);
// }




//8-masala

// int EKUB(int son1, int son2){
//     if(son2==0){
//         return son1;
//     }
//    return EKUB(son2, son1%son2);

// }

// int main(){
//     int son1, son2;
//     printf("kiriting: ");
//     scanf("%d%d", &son1, &son2);
//     printf("%d va %d ning EKUBI -> %d", son1, son2, EKUB(son1, son2));
// }



//9-masala

// int EKUK(int a, int b){
//     if(b==0){
//         return a;
//     }
//     return EKUK(b, a%b);
// }

// int main(){
//     int a, b;
//     printf("Kiriting: ");
//     scanf("%d%d", &a, &b);
//     printf("%d va %d ning EKUKi ->%d", a,b,(a*b)/EKUK(a,b));
// }



//---------------------------------------------------------

//1-masala

// void num(int son){
//     if(son<0) return;
//     num(son-1);
//     printf("%d ", son);
// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     num(son);
// }





//2-masala

// void juft(int son){
//     if(son<0) return;
//     juft(son-1);
//     if(son%2==0){
//     printf("%d ", son);
//     }
// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     juft(son);
// }





//3-masala

// int sum(int son){
//     if(son==0) return 0;
//     return son+sum(son-1);
// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     printf("Yig'indisi -> %d", sum(son));
// }





//4-masala

// int sum(int son){
//     if(son==0) return 0;
//     if(son%2!=0) return son+sum(son-1);
//     else return sum(son-1);
// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     printf("Toq sonlarning yig'indisi -> %d", sum(son));
// }





//5-misol

// int count=0;

// int juft(int son){
//     if(son==0) return 0;
//     if(son%2==0) {
//         count++;
//         return juft(son-1);
//     }else return juft(son-1);

// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     juft(son);
//     printf("Juft sonlar soni: %d", count);
// }





//6-misol

// int kvad(int son, int i){
//     if(son*son==i){
//         return i;
//     } return kvad(son, i+1);
    
    
// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     printf("Kiritilgan sonning kvadrati -> %d", kvad(son,1));
// }






//7-masala

// void num(int son){
//     if(son==0) return;
//     num(son/10);
//     printf("%d\n", son%10); 
// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     num(son);
// }




//8-masala

// void num(int son){
//     if(son==0) return;
//     printf("%d ", son%10); 
//     num(son/10);
    
// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     num(son);
// }



//9-masala

// int num(int son){
//     if(son==0) return 0;
//     printf("%d", son%10);
//     return num(son/10);   
// }


// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     num(son);
// }





//10-masala

// void teskari(int uzunlik, char gap[]){
//     if(uzunlik<0){
//         return;
//     }printf("%c", gap[uzunlik]);
//     teskari(uzunlik-1, gap);
// }


// int main(){
//     char gap[100];
//     printf("Kiriting: ");
//     scanf("%[^\n]s", gap);
//     int uzunlik=strlen(gap);
//     teskari(uzunlik, gap);
// }




//11-masala

int num(int son){
    if(son==0) return 0;
    int new=son%10;
    printf("%d", new);
    return num(son/10);
       
}


int main(){
    int son;
    printf("Kiriting: ");
    scanf("%d", &son);
    num(son);
}































