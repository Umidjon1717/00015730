#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    // int a=1, n;
    // printf("Stopni kiriting: ");
    // scanf("%d", &n);

    // if(n>a){
    //     while(n>=a){
    //         printf("%d\n", a);
    //         a+=1;
    //     }
    // }else{
    //     printf("Xatolik");
    // }
    //---------------------------------------------------------



    // int a=1, b=100, juft=1;


    // while(juft>=a&&juft<=b){
    //     if(juft%2==0){
    //         printf("%d\n", juft);
    //     }juft+=1;
    // }
    //---------------------------------------------------------




    // int a=1, b=100, toq=1;

    // while(toq>=a&&toq<=b){
    //     if(toq%2!=0){
    //         printf("%d\n", toq);
    //     }toq+=1;
    // }
    //---------------------------------------------------------




    // int a, b;
    // printf("1-sonni kiriting: ");
    // scanf("%d", &a);
    // printf("2-sonni kiriting: ");
    // scanf("%d", &b);

    // printf("%d*%d=%d", a, b, a*b);
    //---------------------------------------------------------




    // int a, b=1;
    // printf("Sonni kiritng: ");
    // scanf("%d", &a);

    // while(b<=10){
    //     printf("%d*%d=%d\n", a, b, a*b);
    //     b+=1;
    // }
    //---------------------------------------------------------




    // int a, raqamlar_soni=0;
    // printf("Kiriting: ");
    // scanf("%d", &a);

    // while(a){
    //     a/=10;
    //     raqamlar_soni+=1;
    //  } printf("%d", raqamlar_soni);
    




    // int son, oxirgi, birinchi;
    // printf("Kiriting: ");
    // scanf("%d", &son);

    // oxirgi=son%10;
    // while(son>=10){
    //     son/=10;
    // }birinchi=son;
    // printf("%d", birinchi+oxirgi);






    // int son, hisobla=1;
    // printf("Kiriting: ");
    // scanf("%d", &son);

    // while(son!=0){
    //       hisobla=hisobla*(son%10);
    //       son=son/10;
    // }
    // printf("Ko'paytmasi: %d", hisobla);


    // int son, a=1, faktoral=1;
    // printf("Kiriting: ");
    // scanf("%d", &son);

    // while(son!=0){
    //     faktoral=faktoral*son;
    //     son=son-1;

    // }printf("Faktoral-> %d", faktoral);



    // int a=1;
    // do{
    //     printf("%d ", a);
    //     a+=1;
    // }while(a<=800);




    // int a=1000;
    // do{
    //     printf("%d ", a);
    //     a-=1;
    // }while(a<=1000&&a>=1);



    // int a=400;
    // do{
    //     printf("%d ", a);
    //     a+=1;
    // }while(a>=400&&a<=500);



    // int a=300;
    // do{
    //     printf("%d ", a);
    //     a-=1;
    // }while(a>=150&&a<=300);



    // int a=-400;
    // do{
    //     printf("%d ", a);
    //     a+=1;
    // }while(a>=-400&&a<=250);





    // int a=200;
    // do{
    //     printf("%d ", a);
    //     a-=1;
    // }while(a>=-500&&a<=200);



    // char a='A';
    // do{
    //     printf("%c ", a);
    //     a+=1;
    // }while(a>='A'&&a<='Z');




    // int a, hisobla=0;
    // printf("Sonni kiritng: ");
    // scanf("%d", &a);

    // do{
    //     hisobla=hisobla+a;
    //     a-=1;

    // }while(a);
    // printf("Yigindisi-> %d", hisobla);



    // int son, hisobla=0;
    // printf("Sonni kiriting: ");
    // scanf("%d", &son);
    // do{
    //     son/=10;
    //     hisobla=hisobla+1;

    // }while(son);
    // printf("Xonalar soni: %d", hisobla);



    // int son, faktorali=1;
    // printf("Sonni kiritng: ");
    // scanf("%d", &son);
    // do{
    //     faktorali=faktorali*son;
    //     son-=1;
        
    // }while(son);
    // printf("Ko'paytmasi: %d", faktorali);



    // int son, hisobla=0;
    // printf("Sonni kiritng: ");
    // scanf("%d", &son);
    // do{
    //     hisobla=hisobla+son%10;
    //     son/=10;

    // }while(son!=0);
    // if(hisobla%2==0){
    //     int a=4;
    //     while(a<=4&&a>=0){
    //         printf("Izzatullayev\n");
    //         a-=1;
    //     }
    // }else{
    //     int b=5;
    //     while(b<=5&&b>=0){
    //         printf("Umidjon\n");
    //         b-=1;
    //     }
    // }





    // int son, x=1;
    // printf("Sonni kiritng: ");
    // scanf("%d", &son);
    
    //  while(son>=x){
    //     if(son%x==0){
    //         printf("%d ", x);
    //     }x+=1;
    //  }
    


//     char belgi, hisobla=0;

//     if((belgi>='a'&&belgi<='z')||(belgi>='A'&&belgi<='Z')||belgi==0){
//         do{
//            scanf("%c", &belgi);
//            hisobla+=1;
//           }while(belgi!=0);
//           printf("%d", hisobla);
//  }else{
//     printf("Xatolik");
//  }
    //chala-------------------------------------------------------------




    // int son, raqam_1, raqam_oxirgi;
    // printf("Sonni kiritng: ");
    // scanf("%d", &son);

    // raqam_oxirgi=son%10;
    // while(son!=0){
    //     raqam_1=son%10;
    //     son/=10;
    // }
    // if(raqam_1>raqam_oxirgi){
    //     printf("%d  ",raqam_1);
    //     printf("(chunki %d kattaroq %d dan)", raqam_1,raqam_oxirgi);

    // }else if(raqam_oxirgi>raqam_1){
    //     printf("%d  ", raqam_oxirgi);
    //     printf("(chunki %d kattaroq %d dan)", raqam_oxirgi, raqam_1);
    // }else{
    //     printf("Ular bir xil");
    // }







    // int a=1;
    // while(a<=10&&a>=1){
    //     printf("%d*%d=%d\n", a,1,a*1);
    //     printf("%d*%d=%d\n", a,2,a*2);
    //     printf("%d*%d=%d\n", a,3,a*3);
    //     printf("%d*%d=%d\n", a,4,a*4);
    //     printf("%d*%d=%d\n", a,5,a*5);
    //     printf("%d*%d=%d\n", a,6,a*6);
    //     printf("%d*%d=%d\n", a,7,a*7);
    //     printf("%d*%d=%d\n", a,8,a*8);
    //     printf("%d*%d=%d\n", a,9,a*9);
    //     printf("%d*%d=%d\n", a,10,a*10);
    //     a+=1;
    // }



    // srand(time(NULL));

    // int son = rand()%100+1, urinish=3, tahmin;
    // printf("Komputer o'ylagan son: %d\n", son);
    // while(tahmin!=son&&urinish>=1){
    //     printf("Tahminingizni kiritng:");
    //     scanf("%d", &tahmin);
    //     urinish-=1;
    // }
    // if(tahmin==son){
    //     printf("Winner");
    // }else{
    //     printf("Looser");
    // }





    // int son,raqam_1=1, raqam_oxirgi, orta_raqamlar;
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






    // int son, raqam_1, raqam_oxirgi;
    // printf("Sonni kiriting: ");
    // scanf("%d", &son);

    // raqam_oxirgi=son%10;

    // do{
    //     raqam_1=son%10;
    //     son=son/10;

    // }while(son!=0);
    
    // printf("Yig'indisi: %d+%d=%d", raqam_1, raqam_oxirgi, raqam_1+raqam_oxirgi);





    // int son, faktoral=1;
    // printf("Sonni kiriting: ");
    // scanf("%d", &son);

    // do{
    //     faktoral=faktoral*son;
    //     son-=1;
        
    // }while(son!=0);

    // printf(" Faktorali: %d ", faktoral);






    // int a=1, n, yigindisi=0;
    // printf("Stopni kiriting: ");
    // scanf("%d", &n);

    // do{
    //     yigindisi=yigindisi+a;
    //     a=a+1;
    // }while(n>=a);
    // printf("Yig'indisi: %d", yigindisi);









    // int a, b, aniqlovchi;
    // printf("1-Sonni kiriting: ");
    // scanf("%d", &a);
    // printf("2-sonni kiriting: ");
    // scanf("%d", &b);
  
    // aniqlovchi=a-b;
    
    // if(a<b){
    //     printf("Xatolik");
    // }else{
    //     printf("Bo'sh qismi: %d", aniqlovchi);
    // } chalaaa
    




    // int son, omillari=0;
    // printf("Sonni kiriting: ");
    // scanf("%d", &son);

    // while(son>=omillari){
    //     if(son%omillari==0){
    //     printf("%d\n",omillari);
    //     }omillari+=1;
    // }



    // int n;
    // scanf("%d",&n);
    // for(int a=1;a<=n;a++){
    //     printf("%d ", a);
    // }



//    int n, juft_sum=0,toq_sum=0;
//    printf("Stopni kiriting: ");
//    scanf("%d",&n);

//    for(int a=1; a<=n;a++ ){
//     if(a%2==0){
//         juft_sum=juft_sum+a;
//     }else{
//         toq_sum=toq_sum+a;
//     }
//    }printf("Juft sonlar yig'indisi: %d\n", juft_sum);
//    printf("Toq sonlar yig'indisi: %d\n", toq_sum);




// int son, oxirgi, birinchi;
// printf("Stopni kiriting: ");
// scanf("%d", &son);
// oxirgi=son%10;

// for(int i=son ;i!=0; i/=10 ){
//     birinchi=i%10;
// }printf("Oxirgi va Birinchi sonlar: %d va %d", oxirgi, birinchi);




// for(int i=1; i<=3; i++){
//     for(int j=1; j<=i; j++){
//         printf("*");
//     }

//     puts("");
// }



// for(int i=1; i<=5; i++){
//     for(int j=1; j<=i; j++){
//         printf("*");
//     }

//     puts("");
// }


// int n;
// scanf("%d", &n);

// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n-i; j++){
//         printf(" ");
//       }
    
//        for(int a=1; a<=i; a++){
//            printf(" *");
//        }
//        puts(" ");
    
// }
//__*
//_**
//***





//Strong number
// int son, raqam1, raqam_oxirgi, raqam_orta;
// printf("Sonni kiriting: ");
// scanf("%d", &son);

// for(int a=son,b ; a>=0; a/=10){
//     b=a%10;
//     for( int faktoral=1, hisobla=0; b>0; b-- ){
//         faktoral= (faktoral*b);

//     }
    

// }





// int n;
// scanf("%d", &n);

// for(int i=1; i<=n; i++){
//     printf("\n");
//     for(int j=1, hisobla=0; j<=i; j++){
//         hisobla=hisobla+1;
//         printf("%d", hisobla);
//     }
// }





// int n;
// scanf("%d", &n);

// for(int i=1, hisobla=0; i<=n; i++){
//     printf("\n");
//     for(int j=1; j<=i; j++){
//         hisobla+=1;
//         printf("%d", hisobla);
//     }
// }




// int n;
// scanf("%d", &n);

// for(int i=1 ;i<=n; i++){
//     printf("\n");
// for(int j=1, hisobla=i+1; j<=i; j++){
//     hisobla=hisobla-1;
//     printf("%d", hisobla);
//  }

// }





// int n;
// scanf("%d", &n);

// for(int i=1;i<=n; i++){
//     for(int j=1; j<=n-i; j++){
//         printf(" ");
//     }
//     for(int a=1, hisobla=0; a<=i; a++){
//         hisobla=hisobla+1;
//         printf("%d", hisobla);
//     }puts(" ");
// }




// int n;
// scanf("%d", &n);

// for(int i=n; n>=0; n--){
//     for(int )
// }



// int a;
// scanf("%d", &a);

// while(a!=0){
//     int raqamlari=0;
//     raqamlari=a%10;
//     printf("%d", raqamlari);
//     a/=10;
// }



































    }


























    






   
   




    




















 






  




    











