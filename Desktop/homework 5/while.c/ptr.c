#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//int main(){
    // int a;
    // int *ptr=&a;
    // printf("Sonni kiriting: ");
    // scanf("%d", &a);
    // if(*ptr%2==0) printf("SALOM");
    // else printf("HAYR");





    // int a, b, c;
    // int *ptr=&a;
    // printf("Sonlarni kiriting: ");
    // scanf("%d%d%d", &a, &b, &c);
    // if(*ptr>b&&*ptr>c) printf("Eng kattasi: %d", *ptr);
    // int *ptr1=&b;
    // if(*ptr1>a&&*ptr1>c) printf("Eng kattasi: %d", *ptr1);
    // int *ptr2=&c;
    // if(*ptr2>a&&*ptr2>b) printf("Eng kattasi: %d", *ptr2);




    // int n;
    // int *ptr=&n;
    // printf("Sonni kiriting: ");
    // scanf("%d", &n);

    // for(int i=*ptr-1; i<=*ptr&&i>0; i--){
    //     *ptr=*ptr*i;
    // }printf("%d", *ptr);





    // char A=65;
    // char *ptr=&A;
    // for(int i=*ptr;i<='Z'; i++){
    //     printf("%c ", i);
    // }




    // int a, hisobla=0;
    // int *ptr=&a;
    // printf("Sonni kiriting: ");
    // scanf("%d", &a);
    
    // for( ; *ptr ; *ptr/=10){
    //     int i=*ptr%10;
    //     hisobla=hisobla+1;
    // }printf("%d", hisobla);





    // int a, b;
    // printf("Sonlarni kiriting: ");
    // scanf("%d%d", &a, &b);
    // int *ptr=&a;
    // int *ptr1=&b;

    // int c=*ptr;
    // *ptr=*ptr1;
    // *ptr1=c;
    // printf("%d va %d", *ptr, *ptr1);


//}




// void Katta(int *a, int *b){
//     if(*a>*b) *b=*a;
//     else  *a=*b;
// } 


// int main(){
//     int a, b;
//     scanf("%d%d", &a, &b);
//     Katta(&a, &b);
//     printf("%dva %d", a,b);
    
// }






// void yigindi(int son, int *sum){
//     int birinchi=0, oxirgi=son%10;
//     for(; son; son/=10){
//         birinchi=son%10;
//     }*sum=birinchi+oxirgi;
// }


// int main(){
//     int son, sum=0;
//     printf("Sonni kiriting: ");
//     scanf("%d", &son);
//     yigindi(son, &sum);
//     printf("Yig'indisi: %d", sum);

// }






// void Sum(int son, int *sum ){
//     for(; son; son/=10){
//         int raqamlari=son%10;
//         *sum=raqamlari+*sum;
//     }
// }



// int main(){
//     int son, sum=0;
//     printf("Sonni kiriting: ");
//     scanf("%d", &son);
//     Sum(son, &sum);
//     son=sum;
//     printf("Son= Sum= %d",son );

// }





// void engkatta(int son, int *engk){
//     int oxirgi=son%10;
//     for(; son; son/=10){
//         int raqamlari=son%10;
//         if(raqamlari>=oxirgi){
//             *engk=raqamlari;
//         }
//     }
// }


// int main(){
//     int son, engk=0;
//     printf("Sonni kiriting: ");
//     scanf("%d", &son);
//     engkatta(son, &engk);
//     son=engk;
//     printf("Son = eng katta raqami= %d", son);

// }






// void Teskari(int son, int *teskari){
//     for(; son; son/=10){
//         int raqamlari=son%10;
//         *teskari=raqamlari;
//         printf("%d", *teskari);
//     }
// }



// int main(){
//     int son, teskari=0;
//     printf("Sonni kiriting: ");
//     scanf("%d", &son);
//     Teskari(son, &teskari);
// }




// void ScanArr(int a[], int uzunlik){
//     for(int i=0; i<uzunlik; i++){
//         scanf("%d", &a[i]);
//     }
// }

// void Equibulurum(int a[], int uzunlik){
//     for(int i=0; i<uzunlik; i++){

//     }
// }




// int main(){
//     int n;
//     printf("Nechta son kiritasiz: ");
//     scanf("%d", &n);
//     int arr[n];
//     ScanArr(arr, n);


// }

// void Scanarr(int *a, int uzunlik){
//     for(int i=0; i<uzunlik; i++){
//         scanf("%d", &a[i]);
//     }
// }

// void Yigindi(int *a, int uzunlik){
//     a[uzunlik]=0;
//     for(int i=0; i<uzunlik; i++){
//         a[uzunlik]=*(a+i)+a[uzunlik];
//     }
// }

// void Printarr(int *a, int uzunlik){
//         printf("%d", a[uzunlik]);
  
// }




// int main(){
//     int n;
//     printf("Nechta son kiritasiz: ");
//     scanf("%d", &n);
//     int arr[n];
//     Scanarr(arr, n);
//     Yigindi(arr, n);
//     Printarr(arr, n);
// }







// void ScanArr(int *a, int uzunlik){
//     for(int i=0; i<uzunlik; i++){
//         scanf("%d", &a[i]);
//     }
// }



// void change(int *a, int uzunlik){
//     int c=*a;
//     *a=*(a+uzunlik-1);
//     *(a+uzunlik-1)=c;
// }

// void PrintArr(int *a, int uzunlik){
//     for(int i=0; i<uzunlik; i++){
//         printf("%d ", *(a+i));
//     }
// }



// int main(){
//     int n;
//     printf("Nechta son kiritasiz: ");
//     scanf("%d", &n);
//     int arr[n];
//     ScanArr(arr, n);
//     change(arr, n);
//     PrintArr(arr, n);

// }






// void PrintRand(int *a, int uzunlik){
//     for(int i=0; i<uzunlik; i++){
//         *(a+i)=rand()%10+1;
//         printf("%d ", *(a+i));
//     }
// }

// void Find(int *a, int uzunlik, int input){
//     for(int i=0, k=uzunlik-1; i<uzunlik&&k>0; i++, k--){
//         if(a[i]+a[k]==input) printf("%d %d", i, k);
//     }
// }






// int main(){
//     srand(time(NULL));
//     int n;
//     printf("Nechta son kiritasiz: ");
//     scanf("%d", &n);
//     int arr[n];
//     PrintRand(arr, n);
//     int m;
//     printf("Input kiriting: ");
//     scanf("%d", &m);
//     Find(arr, n, m);


// }
















