#include <stdio.h>
int main(){
    
    int son, bolinuvchi=1, hisobla=0;
    printf("Sonni kiriting: ");
    scanf("%d", &son);

    for(int i=son; i%bolinuvchi==0; bolinuvchi++ ){
        hisobla=hisobla+1;
    }
    bolinuvchi==2 ? printf("Tub sondir! ") : printf("Tub son emas! ");



    //    int son,raqam_1=1, raqam_oxirgi, orta_raqamlar;
    // printf("Sonni kiriting: ");
    // scanf("%d", &son);
    // raqam_oxirgi=son%10;
    // do{
    //     orta_raqamlar=orta_raqamlar*(son%10);
    //     son/=10;
    // }
    // while(son>=10);

    // do{
    //     raqam_1=son%10;
    //     son=son/10;
    //  }   

    // while(son!=0);

    // if((raqam_oxirgi==raqam_1&&orta_raqamlar%11)||(orta_raqamlar>=0&&orta_raqamlar<=9)||orta_raqamlar==0||(son>=0&&son<=9)){
    //     printf("Palindromdir! ");

    // }else{
    //     printf("Palindrom emas");
    // }




    // int a,b, EKUB;
    // printf("1-sonni kiriting: ");
    // scanf("%d", &a);
    // printf("2-sonni kiriting: ");
    // scanf("%d", &b);


    // for(int bolovchi = 1; bolovchi<=a&&bolovchi<=b; ++bolovchi){
    //     if(a%bolovchi==0 && b%bolovchi==0){
    //         EKUB=bolovchi;
    //     }

    // }printf("EKUBI: %d", EKUB);





    // int a, b, EKUK;
    // printf("1-sonni kiriting:");
    // scanf("%d", &a);
    // printf("2-sonni kiriting:");
    // scanf("%d", &b);
    

    // for(int karrali=b; karrali>=b&&karrali>=a; karrali+=1){
    //     if(karrali%a==0&&karrali%b==0){
    //         EKUK=karrali;
    //     }
    // }printf("EKUKi: %d", EKUK);



    // int a,b;
    // scanf("%d%d",&a ,&b);

    // a>b ? printf("Eng kattasi: %d", a) : printf("Eng kattasi: %d", b);
















}