#include <stdio.h>
#include <string.h>

//1-masala

// void hisobla(int son){
//     if(son==0){
//         return;
//     }
//     hisobla(son-1);
//     if(son!=1) printf("+%d", son);
//     else printf("%d", son);
// }

// int sum(int son){
//     if(son==0){
//         return 0;
//     }
//     return son+sum(son-1);
// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     hisobla(son);
//     printf(" = %d", sum(son));   
// }







//2-masala

// void hisobla(int a,int b){
//    if(a>b){
//     return;
//    }
//    printf("%d ",a);
//    hisobla(a+1,b);
   
// }
// void hisobla1(int a,int b){
//    if(a<b){
//     return;
//    }
//    hisobla1(a,b+1);
//    printf("%d ",b);
  
   
// }

// int main(){
//     int a, b;
//     printf("Kiriting: ");
//     scanf("%d%d", &a, &b);
//     if(a<b){
//         hisobla(a, b);
//     }else {
//         hisobla1(a, b);
//     }
    
// }






//3-masala

// void num(int son){
//     if(son==0){
//         return ;
//     }
//     num(son/10);
//     printf("%d ", son%10);
// }

// int main(){
//     int son;
//     printf("Kiriting: ");
//     scanf("%d", &son);
//     num(son);
// }







//4-masala

int count_tub=0;

int tubmi(int son, int i){
    if(son<2) return 0;
    if(son==i) return 1;
    if(son%i==0) return 0;
    return tubmi(son, i+1);
}

void count(int son){
    if(son<2) return;
    if(tubmi(son, 2)){
        count_tub++;
    }count(son-1);
}

int main(){
    int son;
    printf("Kiriting: ");
    scanf("%d", &son);
    count(son);
    printf("%d gacha bo'lgan tub sonlar son->%d",son, count_tub);
    return 0;
}







