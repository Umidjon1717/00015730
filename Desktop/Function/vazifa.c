#include <stdio.h>

    // int kubi(int a){
    //     return a*a*a;
    // }

    // int main(){
    //     int son;
    //     scanf("%d", &son);
    //     printf("Kubi: %d", kubi(son));
    // }






    // float diametr(float r){
    //     return 2*r;
    // }
    // float maydoni(float r){
    //     return 2 * 3.14 *r;
    // }
    // float yuzasi(float r){
    //     return 3.14*r*r;
    // }

    // void all(float radius){
    //     printf("Diametri: %.2f birlik\n ", diametr(radius));
    //     printf("Uzunligi: %.2f birlik\n ", maydoni(radius));
    //     printf("Yuzasi: %.2f birlik kvadrat\n ", yuzasi(radius));
    // }

    // int main(){
    //     float rad;
    //     scanf("%f", &rad);
    //     all(rad);
    // }






    // int juft(int a, int b){
    //     if(a%2==0&&b%2!=0) return a;
    //     else return b;
    // }
    // int toq(int x, int y){
    //     if(x%2!=0&&y%2==0) return x;
    //     else return y;
    // }

    // int main(){
    //     int son1, son2;
    //     scanf("%d%d", &son1, &son2);
    //     printf("Juft: %d\n", juft(son1, son2));
    //     printf("Toq: %d", toq(son1, son2));
    // }







    void interval(int a, int b){
        int hisobla=0;
        for(int tub=a, bolinuvchi=1; tub<=b&&tub>=a; bolinuvchi++){
         if(tub%bolinuvchi==0) hisobla+=1;
             tub+=1;
     }

    }
    int main(){
        int son1, son2;
        scanf("%d%d", &son1, &son2);
        interval(son1, son2);
    }

























    



















