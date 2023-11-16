#include <stdio.h>
int main(){
    // int son;
    // printf("Sonni kiriting: ");
    // scanf("%d", &son);

    // if(son>=1&&son<=999){
    //     int a=son/100;
    //     int b=(son/10)%10;
    //     int c=son%10;
    //     if(a==1){
    //         printf("Bir yuz ");
    //     }else if(a==2){
    //         printf("Ikki yuz ");
    //     }else if(a==3){
    //         printf("Uch yuz ");
    //     }else if(a==4){
    //         printf("To'rt yuz ");
    //     }else if(a==5){
    //         printf("Besh yuz ");
    //     }else if(a==6){
    //         printf("Olti yuz ");
    //     }else if(a==7){
    //         printf("Yetti yuz ");
    //     }else if(a==8){
    //         printf("Sakkiz yuz ");
    //     }else if(a==9){
    //         printf("To'qqiz yuz ");
    //     }
    //     if(b==1){
    //         printf("o'n");
    //     }else if(b==2){
    //         printf("yigirma ");
    //     }else if(b==3){
    //         printf("o'ttiz ");
    //     }else if(b==4){
    //         printf("qirq ");
    //     }else if(b==5){
    //         printf("ellik ");
    //     }else if(b==6){
    //         printf("oltmish ");
    //     }else if(b==7){
    //         printf("yetmish ");
    //     }else if(b==8){
    //         printf("sakson ");
    //     }else if(b==9){
    //         printf("to'qson ");
    //     }
    //     if(c==1){
    //         printf("bir");
    //     }else if(c==2){
    //         printf("ikki");
    //     }else if(c==3){
    //         printf("uch");
    //     }else if(c==4){
    //         printf("to'rt");
    //     }else if(c==5){
    //         printf("besh");
    //     }else if(c==6){
    //         printf("olti");
    //     }else if(c==7){
    //         printf("yetti");
    //     }else if(c==8){
    //         printf("sakkiz");
    //     }else if(c==9){
    //         printf("to'qqiz");
    //     }

    // }else{
    //     printf("Oraliqdan chiqdingiz! ");
    // }

    // char harf;
    // printf("Harfni kiriting: ");
    // scanf("%c", &harf);

    // if(harf>=97&&harf<=122){
    //     harf=harf-32;
    // }else if(harf>=65&&harf<=90){
    //     harf=harf+32;
    // }else{
    //     printf("Harf kiritmadingiz! ");
    // }
    // printf("%c", harf);






// int kun, oy;
// printf("Sanani raqamlar bilan kiriting(kun va oy): ");
// scanf("%d %d", &kun, &oy);

// if(oy==1){
//     switch(kun){
//         case 1 ... 31:
//         printf("%d- yanvar", kun);
//     }
// }else if(oy==2){
//     switch(kun){
//         case 1 ... 30:
//         printf("%d- fevral", kun);
//     }
// }else if(oy==3){
//     switch(kun){
//         case 1 ... 31:
//         printf("%d- mart", kun);
//     }
// }else if(oy==4){
//     switch(kun){
//         case 1 ... 28:
//         printf("%d- aprel", kun);
//     }
// }else if(oy==5){
//     switch(kun){
//         case 1 ... 30:
//         printf("%d- may", kun);
//     }
// }else if(oy==6){
//     switch(kun){
//         case 1 ... 31:
//         printf("%d- iyun", kun);
//     }
// }else if(oy==7){
//     switch(kun){
//         case 1 ... 30:
//         printf("%d- iyul", kun);
//     }
// }else if(oy==8){
//     switch(kun){
//         case 1 ... 31:
//         printf("%d- avgust", kun);
//     }
// }else if(oy==9){
//     switch(kun){
//         case 1 ... 30:
//         printf("%d- sebtabr", kun);
//     }
// }else if(oy==10){
//     switch(kun){
//         case 1 ... 31:
//         printf("%d- oktabr", kun);
//     }
// }else if(oy==11){
//     switch(kun){
//         case 1 ... 30:
//         printf("%d- noyabr", kun);
//     }
// }else if(oy==12){
//     switch(kun){
//         case 1 ... 31:
//         printf("%d- dekabr", kun);
//     }
// }else{
//     printf("Xatolik");
// }







// int son, a, ab, abc, abcd, abcde,b,c,d,e ;
// printf("Sonni kiriting: ");
// scanf("%d", &son);
// a=son/10000;
// b=(son/1000)%10;
// c=(son/100)%10;
// d=(son/10)%10;
// e=son%10;
// ab=b+10*a;
// abc=c+10*b+100*a;
// abcd=d+10*c+100*b+1000*a;
// abcde=e+10*d+100*c+1000*b+10000*a;


// if(son==a){
//     switch (a)
//     {
//     case 1 ... 9:
//     break;
//     }printf("1 xonalik son ");
// }else if(son==ab){
//     switch(ab){
//         case 10 ... 99:
//         break;

//     }printf("2 xonalik son");
// }else if(son==abc){
//     switch(abc){
//         case 100 ... 999:
//         break;

//     }printf("3 xonalik son");
// }else if(son==abcd){
//     switch(abcd){
//         case 1000 ... 9999:
//         break;

//     }printf("4 xonalik son");
// }else if(son==abcde){
//     switch(abcde){
//         case 10000 ... 99999:
//         break;

//     }printf("5 xonalik son");
// }else{
//     printf("Xatolik");
// }
//4 QOLDIIIIIII








int son;
char harf;
printf("Harfni kiritng: ");
scanf("%c", &harf);
printf("Sonni kiriting: ");
scanf("%d", &son);
son=son%26;

if(harf>='A'&&harf<='Z'){
    if(harf+son>90){
        harf=harf+son-26;
    }else{
        harf=harf+son;
    }printf("Natija: %c", harf);
}else if(harf>='a'&&harf<='z'){
    if(harf+son>'z'){
        harf=harf+son-26;
    }else{
        harf=harf+son;
    }printf("Natija: %c", harf);
}else{
    printf("Xatolik");
}







// int yil;
// printf("Yil kiriting: ");
// scanf("%d", &yil);

// if(yil/4==0||yil/400==0||yil/100!=0){
//     printf("Kabisa yilidir");
// }else{
//     printf("Kabisa yili emas");
// }







}