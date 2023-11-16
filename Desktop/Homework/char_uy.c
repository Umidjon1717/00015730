#include <stdio.h>

int main(){
    //1-misol

    // char belgi[50];
    // printf("Kiriting: ");
    // scanf("%[^\n]s", belgi);
    // int son1=0, son_oxirgi=0;
    // for(int i=0; belgi[i]; i++){
    //     if(belgi[i]>='0'&&belgi[i]<='9'){
    //         son1=i;
    //         break;
    //     }
    // }
    // for(int i=0; belgi[i]; i++){
    //     son_oxirgi++;
    //     if(belgi[i]>='0'&&belgi[i]<='9'){
    //         son_oxirgi=i;
    //         continue;
    //     }
    // }
    
    // for(int i=son1+1; i<son_oxirgi; i++){
    //     printf("%c", belgi[i]);
    // }




    //2-misol

    // char tartib[50];
    // printf("Kiriting: ");
    // scanf("%[^\n]s",tartib );

    // for(char a='a'; a<='z'; a++){
    //     for(int i=0; tartib[i]; i++){
    //        if(a==tartib[i]){
    //         printf("%c", a);
    //        }
    //     }
    // }






    //3-misol

    // char seriya[100];
    // int ind, son;
    // printf("Kiriting: ");
    // scanf("%[^\n]s", seriya);
    // printf("Indeksni kiriting: ");
    // scanf("%d", &ind);
    // printf("Sonini kriting: ");
    // scanf("%d", &son);

    // for(int i=ind; i<son+ind; i++){
    //     printf("%c", seriya[i]);
    // }






    //4-misol

    char seriya[100];
    printf("Kiriting: ");
    scanf("%[^\n]s",seriya );
    int count=0, his=0;
    int soz=0, soz1=0;

    for(int i=0; seriya[i]; i++){
       count++; 
    }

    for(int i=0, j=count-1;j>=0&&i<count/2;j--, i++){
       if(seriya[i]==seriya[j]){
           his++;
       }
    }

    
    if(his==count/2) printf("URA");
    else printf("KUKU");
    








    //5-misol

    char seriya[100];
    printf("Kiriting: ");
    scanf("%[^\n]s",seriya );

    for(int i=0; seriya[i]; i++){
        if(seriya[i]=='a') {
            seriya[i]=2*(int)seriya[i];
            printf("%c", seriya[i]);
            }
        else if(seriya[i]=='o') {
            seriya[i]=2*(int)seriya[i];
            printf("%c", seriya[i]);
            }
        else if(seriya[i]=='i') {
            seriya[i]=2*(int)seriya[i];
            printf("%c", seriya[i]);
            }
        else if(seriya[i]=='e') {
            seriya[i]=2*(int)seriya[i];
            printf("%c", seriya[i]);
            }
        else printf("%c", seriya[i]);
   
    }
    

    

    
  





















}
