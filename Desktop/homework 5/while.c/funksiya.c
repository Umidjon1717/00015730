#include <stdio.h>

void strong(int son){
    int yigindi=0;
    for(int i=son, raqamlari=0; i ; i/=10){
        raqamlari=i%10;
        int hisobla=1;
        for(int j=1; j<=raqamlari; j++){
            hisobla=hisobla*j;
        }yigindi=yigindi+hisobla;
      }
      yigindi==son ? printf("Strong Number") : printf("Oddiy son");
}

int main(){
    int son, c;
    printf("Sonni kiriting: ");
    scanf("%d", &son);

    strong(son);

}







// char kichik(char belgi){
//     return(belgi>='a'&&belgi<='z')? printf("True") : printf("False");
// }
// int main(){
//     char belgi;
//     printf("Kiriting: ");
//     scanf("%c", &belgi);
//     kichik(belgi);


// }





// int dar(int a, int b){
//     int hisoblagich=a;
//     for(int i=1; i<b; i++){
//         hisoblagich=a*hisoblagich;
//     }return (printf("%d", hisoblagich));

// }
// int main(){
//     int asos, daraja;
//     printf("Asosni kiriting: ");
//     scanf("%d", &asos);
//     printf("Darajani kiriting: ");
//     scanf("%d", &daraja);

//     dar (asos, daraja);
// }






// float katta(float a, float b, float c){
//    return (a>b&&a>c ? printf("Kattasi: %.2f", a ) : b>a&&b>c ? printf("Kattasi: %.2f", b) : printf("Kattasi: %.2f", c));
// }
// int main(){
//     float a, b, c;
//     scanf("%f%f%f", &a, &b, &c);
//     katta(a,b,c);
// }






// int aniqla(int son){
//     return(son>0 ? printf("Musbat son kiritdingiz") : printf("Manfiy son kiritdingiz"));
// }
// int main(){
//     int son;
//     scanf("%d", &son);
//     aniqla(son);
// }





// int aniqla(int son){
//     return(printf("Siz kiritgan son %d", son ));

// }
// int main(){
//     int son;
//     scanf("%d", &son);
//     aniqla(son);
// }





// int aniqla(){
//     return(printf("I love programming"));
// }
// int main(){
//     aniqla();
// }