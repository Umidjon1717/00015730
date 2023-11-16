#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    // char belgi[50];
    // char new[250]={0};
    // printf("Kiriting: ");
    // scanf("%[^\n]s", belgi);
    // char engk='0';
    //
    // for(int i=0; belgi[i]; i++){
    //     new[belgi[i]]++;
    // }

    // for(int j=0; j<250; j++){
    //   if(new[j]>new[engk]){
    //     engk=j;
    //   }
    // } printf("belgi %c", engk);





    // char belgi[250];
    // printf("Kiriting: ");
    // scanf("%[^\n]s", belgi);
    // char tab[11]="qwertyuiop";
    // char caps_lock[10]="asdfghjkl";
    // char shift[8]="zxcvbnm";

    // for(int i=0 ; i<strlen(belgi) ; i++){
    //     for(int j=0; j<11; j++){
    //         if(belgi[i]==tab[j]){
    //             printf("Tab ");
    //         }
        
    //     }
    //     for(int j=0; j<10; j++){
    //         if(belgi[i]==caps_lock[j]){
    //             printf("Caps_lock ");
    //       }
    //     }
    //     for(int j=0; j<8; j++){
    //         if(belgi[i]==shift[j]){
    //             printf("Shift ");
    //         }
        
    //        }
    // }







    // char gap[100];
    // char new[100]="";
    // printf("Kiriting: ");
    // scanf("%[^\n]s", gap);
    
    // int j=0;
    // for(int i=0; i<strlen(gap); i++){
    //     if(isalpha(gap[i])){
    //         new[j]=gap[i];
    //         j++;
    //     }

    // } 
    // new[j]='\0';
    // strcpy(gap, new);
    // puts(gap);
    // return 0;







    // char gap[100];
    // printf("Kiriting: ");
    // scanf("%[^\n]s", gap);
    
    // char *ptr=strtok(gap, " ");
    // while(ptr!=NULL){
    //    printf("%s", ptr);
    //    puts("");
    //    ptr=strtok(NULL, " ");
    // }





    // char gap[100];
    // printf("Kiriting: ");
    // scanf("%[^\n]s", gap);
    // int count_pun=0, count_up=0, count_low=0;


    // for(int i=0; i<strlen(gap);i++){
    //        if(ispunct(gap[i])){
    //             count_pun++;
    //         }
    //         if(isupper(gap[i])){
    //             count_up++;
    //         }
    //         if(islower(gap[i])){
    //             count_low++;
    //         }     
    // }

    // if(count_pun>=1&&count_up>=1&&count_low>=1&&strlen(gap)>=8){
    //     printf("Strong parol");
    // }else printf("Strong parol emas");





    
    char gap[100];
 
    int count_pun=0, count_up=0, count_low=0;

   while(1){   
        printf("Kiriting: ");
        scanf("%[^\n]s", gap); 
        for(int i=0; i<strlen(gap);i++){
           if(ispunct(gap[i])){
                count_pun++;
            }
            if(isupper(gap[i])){
                count_up++;
            }
            if(islower(gap[i])){
                count_low++;
            }     
       }
    }


    if(count_pun>=1&&count_up>=1&&count_low>=1&&strlen(gap)>=8){
        printf("Strong parol");
        return 0;
    }else{
     if(count_low<1) printf("Kichik harf ham kiriting\n");
     if(count_up<1) printf("Katta harf ham kiriting\n");
     if(count_pun<1) printf("Belgi harf ham kiriting\n");
     if(strlen(gap)<8) printf("Harflar soni kamdia 8 ta bo'lishi kerak\n");
    }






























    




















    



























}