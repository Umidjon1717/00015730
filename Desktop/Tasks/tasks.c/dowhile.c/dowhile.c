#include <stdio.h>
int main (){
    // int son, teskari=0,qoldiq ;
    // printf("Sonni kiriting: ");
    // scanf("%d", &son);

    // do{
    //     qoldiq=son%10;
    //     son=son/10;
    //     teskari=(teskari*10)+qoldiq;

    //  }while(son>0||son<0);
    //  printf("%d", teskari);




    int hisob=0, menu, tanlov;
    Menu:
    printf("[1] Banan - 23.000\n");
    printf("[2] Tarvuz - 21.000\n");
    printf("[3] Olma - 12.000\n");
    printf("Nima xohlaysiz: ");
    scanf("%d", &menu);

    switch(menu){
        case 1:
        puts("Yana biron nima olasizmi? {1-Ha || 0-Yo'q }");
        scanf("%d",&tanlov);
        if(tanlov==1){
            hisob=hisob+23000;
            goto Menu;
        }else if(tanlov==0){
            hisob=hisob+23000;
            printf("To'lanadigan summa: %d", hisob);

        } break;
        case 2:
        puts("Yana biron nima olasizmi? {1-Ha || 0-Yo'q }");
        scanf("%d",&tanlov);
        if(tanlov==1){
            hisob=hisob+21000;
            goto Menu;
        }else if(tanlov==0){
            hisob=hisob+21000;
            printf("To'lanadigan summa: %d", hisob);
        }break;

        case 3:
        puts("Yana biron nima olasizmi? {1-Ha || 0-Yo'q }");
        scanf("%d",&tanlov);
        if(tanlov==1){
            hisob=hisob+12000;
            goto Menu;
        }else if(tanlov==0){
            hisob=hisob+12000;
            printf("To'lanadigan summa: %d", hisob);
        }break;
        


    }
    
    

















}