#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    // int n;
    // printf("Qiymat kiriting:  ");
    // scanf("%d", &n);

    // int arr[n];
    // for(int i=0; i<n; i++){
    //     scanf("%d", &arr[i]);
    //     if(arr[i]>0) printf("%d\n", arr[i]);
    // }





    // int n;
    // printf("Qiymatni kiriting: ");
    // scanf("%d", &n);

    // int arr[n];
    // for(int i=0; i<n; i++){
    //     scanf("%d", &arr[i]);
    //     if(arr[i]%2==0) printf("%d\n", arr[i]);
    // }





//     int n;
//     printf("Qiymatni kiriting: ");
//     scanf("%d",&n);

//     int arr[n];
//     int sum_j=0, sum_t=0;
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//         if(arr[i]%2==0) sum_j=sum_j+arr[i];
//         else sum_t=sum_t+arr[i];
//    }printf("Juft yig'indi: %d\n", sum_j);
//    printf("Toq yig'indi: %d", sum_t);





// int arr[4]={1,2,3,4};
// for(int i=0; i<4; i++){
//     printf("Nechinchi index: ");
//     scanf("%d", &i);
//     printf("Qanday qiymat: ");
//     scanf("%d", &arr[i]);
//     printf("arr[4]={%d}", arr[i]);
// }




// int arr[10]={};
// int  yigindi=0;

// for( int i=0; i<10; i++){
//     printf("Qiymatlarini kiriting: ");
//     scanf("%d", &arr[i] );
//     if(arr[i]>0){
//     yigindi=yigindi+i;
//    }
// }printf("Musbat qiymat qabul qilgan indexlar yig'indisi: %d", yigindi);






// int n;
// printf("Qiymat kiriting: ");
// scanf("%d", &n);

// int arr[n];
// int hisobla_j=0, hisobla_t=0;
// for( int i=0; i<n; i++){
//     printf("Sonlarni kiritng; ");
//     scanf("%d", &arr[i]);
//     if(arr[i]%2==0) {
//         hisobla_j+=1;
//     }else{
//         hisobla_t+=1;
//     }
// }printf("Juftlar soni: %d\n", hisobla_j);
// printf("Toqlar soni: %d", hisobla_t);






// int n;
// printf("Qiymatni kiritng: ");
// scanf("%d", &n);

// int arr[n];

// for(int i=0;  i<n; i++){
//     printf("Sonlarni kiritng: ");
//     scanf("%d", &arr[i]);
   
// }for(int i=0; i<n; i++){
//      if(i%2!=0){
//         arr[i]=-1*arr[i];
//         arr[n]=arr[i];
//         printf("%d ", arr[n]);
        
//     }
// }









// int n;
// printf("Qiymatni kiriting: ");
// scanf("%d", &n);

// int arr[n], hisobla=0;

// for(int i=0; i<n; i++){
//     printf("Sonlarni kiriting: ");
//     scanf("%d", &arr[i]);
// }for(int i=0; i<n; i++){
//     if(i%2!=0){
//        hisobla=hisobla+arr[i];
       
//     }
// }printf("%d", hisobla);






// int n;
// printf("Qiymatni kiritign: ");
// scanf("%d", &n);

// int arr[n];

// for(int i=0; i<n; i++){
//     printf("Sonlarni kiriting: ");
//     scanf("%d", &arr[i]);
// }
// for(int i=n-1; i<n&&i>=0; i--){
//     printf("%d ", arr[i]);
// }






// int arr1[5]={1,2,3,4,5};

// int arr2[5];

// for(int i=0; i<5; i++){
//      arr2[i]=arr1[i];
// }

// printf("Birinchi array qiymati:\n ");
// for(int i=0; i<5; i++){
//     printf("%d ", arr1[i]);
// }
// puts("");

// printf("Ikkinchi array qiymati:\n ");
// for(int j=0; j<5; j++){
//     printf("%d ", arr2[j]);
    
// }






// int n;
// printf("Qiymatni kiriiting: ");
// scanf("%d", &n);

// int arr[n], max=arr[0];
// for(int i=0; i<n; i++){
//     printf("Sonlarni kiriting: ");
//     scanf("%d", &arr[i]);
// }
// for(int i=0; i<n; i++){
//     if(arr[i]>=max) max=arr[i];
// }
// printf("Maksimumi: %d", max);





// srand(time(NULL));

// int n;
// printf("Qiymatni kiriting: ");
// scanf("%d", &n);
// int arr[n];

// for(int i=0; i<n; i++){
//     arr[i]=rand()%52-46;
//     if(arr[i]%2!=0) printf("%d ", arr[i]);
// }





// srand(time(NULL));
// int n;
// printf("Qiymatni kiriting: ");
// scanf("%d", &n);

// int arr[n], i=0;
// arr[i]=rand()%24-15;

// for(int i=0; i<n; i++){
//     arr[i]=rand()%24-15;
//    printf("%d ", arr[i]);
// }puts(" ");

// for(int i=1; i<=n; i++){
//    printf("%d ", arr[i]);
// }






// srand(time(NULL));
// int n;
// printf("Qiymatni kiriting: ");
// scanf("%d", &n);
// int arr[n];

// for(int i=0; i<n; i++){
//     arr[i]=rand()%39-12;
//     if(arr[i]>0) printf("1 ");
//     else printf("0 ");
// }






// srand(time(NULL));
// int n;
// printf("Qiymatni kiriting: ");
// scanf("%d", &n);
// int arr[n], his_j=0, his_to=0;

// for(int i=0; i<n; i++){
//     arr[i]=rand()%90+10;
//     if(arr[i]%2==0) his_j+=1;
//     else his_to+=1;

// }printf("Juft sonlar: %d ta\n", his_j);
// printf("Toq sonlar: %d ta\n", his_to);






// srand(time(NULL));
// int n;
// printf("Qiymatni kiriting: ");
// scanf("%d", &n);
// int arr[n];

// for(int i=0; i<n; i++){
//     arr[i]=rand()%21-10;
//     if(arr[i]>0) printf("%d ", (-1)* arr[i]);
//     else printf("%d ", arr[i]);
// }





// srand(time(NULL));
// int n;
// printf("Qiymatni kiriting: ");
// scanf("%d", &n);

// int arr[n], i=0;
// arr[i]=rand()%90+10;
// for(int i=0; i<n; i++){
//     arr[i]=rand()%90+10;
//     printf("%d ", arr[i]);
// }puts("");
// printf("Juft: ");
// for(int i=0; i<n; i++){
//     if(arr[i]%2==0) printf("%d ", arr[i]);
// }puts("");
// printf("Toq: ");
// for(int i=0; i<n; i++){
//     if(arr[i]%2!=0) printf("%d ", arr[i]);
// }







srand(time(NULL));
int n;
printf("Qiymatni kiriting: ");
scanf("%d", &n);
int arr[n] , hisobla_tub=0,b=0 ;

for(int i=0; i<n ; i++){
    arr[i]=rand()%98+2;
    printf("%d ", arr[i]);
    for(int bolovchi=1,  hisobla_b=0 ; bolovchi<=arr[i];bolovchi++){
     if(arr[i]%bolovchi==0) hisobla_b+=1;
     b=hisobla_b;
   }
    if(b==2) hisobla_tub+=1;
}
printf("\n");
printf("Tub sonlar %d ta ", hisobla_tub);




































}