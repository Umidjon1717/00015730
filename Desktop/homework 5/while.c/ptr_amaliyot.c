#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main(){
    // int n;
    // printf("Sonni kiriting: ");
    // scanf("%d", &n);
    // int *ptr=&n;
    // int sum=0;
    //  for(;*ptr; *ptr/=10){
    //     int raqamlari=*ptr%10;
    //     sum=raqamlari+sum;
    //  }printf("Yig'indisi: %d ", sum);





    // int n;
    // printf("Sonni kiriting: ");
    // scanf("%d", &n);
    // int *ptr=&n;
    // printf("%x", ptr);

//}





// void Kvadrat(int *ptr){
//     *ptr=*ptr * *ptr;
//     printf("%d ", *ptr);
// }




// int main(){
//     int n;
//     printf("Sonni kriiting: ");
//     scanf("%d", &n);
//     int *ptr=&n;
//     Kvadrat(ptr);
// }




// void Change(int *ptr){
//     for(; *ptr; *ptr/=10){
//         int raqamlari=*ptr%10;
//         printf("%d", raqamlari);
//     }
// }


// int main(){
//     int n;
//     printf("Sonni kiriting: ");
//     scanf("%d", &n);
//     int *ptr=&n;
//     Change(ptr);
// }




// int main(){

// int a,b;
// printf("Sonlarni kiriting: ");
// scanf("%d%d", &a, &b);
// int c;
// int *ptr=&c;
// *ptr=a;
// a=b;
// b=*ptr;
// printf("a=%d, b=%d", a, b);
// }



// void ScanArr(int *ptr, int uzunlik){
//     for(int i=0; i<uzunlik; i++){
//         scanf("%d", (ptr+i));
//     }
// }


// void Sum(int *ptr, int uzunlik){
//     int sum=0;
//     for(int i=0; i<uzunlik; i++){
//        sum=*(ptr+i)+sum;
//     }printf("%d ", sum);
// }




// int main(){
//     int n;
//     printf("Nechta son kiritasiz: ");
//     scanf("%d", &n);
//     int arr[n];
//     int *ptr=&arr[n];
//     printf("Sonlarni kiriting: ");
//     ScanArr(ptr, n);
//     Sum(ptr, n);


// }



// void RandArr(int a[], int *n){
//     for(int i=0; i<*n; i++){
//         a[i]=rand()%48-23;
//         printf("%d ", a[i]);
//     }
// }



// void musbat(int a[], int *n){
//     for(int i=0; i<*n; i++){
//         if(a[i]>0) printf("%d ",a[i]);
//     }
// }
// void nol(int a[], int *n){
//     for(int i=0; i<*n; i++){
//         if(a[i]==0) printf("%d ",a[i]);
//     }
// }
// void manfiy(int a[], int *n){
//     for(int i=0; i<*n; i++){
//         if(a[i]<0) printf("%d ",a[i]);
//     }
// }



// int main(){
//     srand(time(NULL));
//     int n;
//     printf("Nechta son kiritasiz: ");
//     scanf("%d", &n);
//     int arr[n];
//     int *ptr=&n;
//     RandArr(arr, &n);
//     puts("");
//     printf("Manfiy: ");
//     manfiy(arr,&n);
//     printf("Nollar: ");
//     nol(ptr,&n);
//     printf("Musbat: ");
//     musbat(arr,&n);
// }



// 




int main(){
    // int arr[3][3]= {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for(int i=0; i<3; i++){
    //     for(int j=0;j<3; j++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     puts("");
    // }






    // int n, m;
    // printf("Qator sonini kiriting: ");
    // scanf("%d", &n);
    // printf("Ustun sonini kiriting: ");
    // scanf("%d", &m);
    // int arr[n][m];
    // int kopaytma=1;
    // for(int i=0; i<n*m; i++){
    //     scanf("%d", &arr[0][i]);
    // }
    // for(int i=0; i<n*m; i++){
    //     if(arr[0][i]%2!=0){
    //      kopaytma=kopaytma*arr[0][i];
    //     }
    // }
    // printf("Output: %d", kopaytma);







    // int n,m;
    // printf("Qator sonini kiriting: ");
    // scanf("%d", &n);
    // printf("Ustun sonini kiriting: ");
    // scanf("%d", &m);
    // int arr[n][m];
    // int juft=0, toq=0;
    // for(int i=0; i<n*m; i++){
    //     scanf("%d", &arr[0][i]);
    // }
    // for(int i=0; i<n*m; i++){
    //     if(arr[0][i]%2==0) juft=juft+1;
    //     else toq=toq+1;
    // }
    // printf("Toq sonalr: %d ta\n", toq);
    // printf("Juft sonalr: %d ta\n", juft);





    // int n,m;
    // printf("Qator sonini kiriting: ");
    // scanf("%d", &n);
    // printf("Ustun sonini kiriting: ");
    // scanf("%d", &m);
    // int arr[n][m];
    // int yigindi_mus=0, yigindi_man=0;
    // for(int i=0; i<n*m; i++){
    //     scanf("%d", &arr[0][i]);
    // }
    // for(int i=0; i<n*m; i++){
    //     if(arr[0][i]>0) yigindi_mus=yigindi_mus+arr[0][i];
    //     else yigindi_man=yigindi_man+arr[0][i];
    // }
    // printf("Musbat: %d\n", yigindi_mus);
    // printf("Manfiy: %d", yigindi_man);




    // int n,m;
    // printf("Qator sonni kiriting: ");
    // scanf("%d", &n);
    // printf("Ustun sonni kiriting: ");
    // scanf("%d", &m);
    // int arr[n][m];
    // int engk=0;
    // for(int i=0; i<n*m; i++){
    //     scanf("%d", &arr[0][i]);
    // }
    // for(int i=1; i<n*m; i++){
    //     if(arr[0][engk]<arr[0][i]) arr[0][engk]=arr[0][i];
    // }
    // printf("Eng katta son: %d", arr[0][engk]);




    // int n,m;
    // printf("Qatorni kiriting; ");
    // scanf("%d", &n);
    // printf("Ustunni kiriitng: ");
    // scanf("%d", &m);
    // int arr[n][m];
    // int sum=0;
    // for(int i=0; i<n*m; i++){
    //     scanf("%d", &arr[0][i]);
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         sum=sum+arr[i][j];
    //     }printf("%d-qator -> %d\n ", i+1, sum);
    //     sum=0;
    // }




    // int n,m;
    // printf("Qatorni kiritng: ");
    // scanf("%d", &n);
    // printf("Ustunni kiritng: ");
    // scanf("%d", &m);
    // int arr[n][m];
    // int sum=0;
    // for(int i=0; i<n*m; i++){
    //     scanf("%d", &arr[0][i]);
    // }
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //        sum=sum+arr[j][i];
    //     }printf("%d-ustun -> %d\n ", i+1, sum);
    //     sum=0;
    // }









}