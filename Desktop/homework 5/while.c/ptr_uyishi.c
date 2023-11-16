#include <stdio.h>
#include <stdlib.h>
#include<time.h>

// void Juft(int a[], int uzunlik){
//     srand(time(NULL));
//     for(int i=0; i<uzunlik; i++){
//         a[i]=rand()%10+1;
//         if(a[i]%2==0) printf("%d ", a[i]);
//     }
// }



// int main(){
//     int n=5;
//     int arr[n];
//     Juft(arr, n);

// }







void Fibonaci(int a[], int chegara){
      a[0]=0;
      a[1]=a[0]+1;
    for(int i=2; a[i - 1] + a[i - 2] < chegara; i++ ){
      a[i]=a[i-1]+a[i-2];
      printf("%d ", a[i]);   
    }
}






int main(){
    int n;
    printf("Chegarani kiriting: ");
    scanf("%d", &n);
    int arr[n];
      arr[0]=0;
      arr[1]=arr[0]+1;
    printf("%d %d ", arr[0], arr[1]);
    Fibonaci(arr, n);
    return 0;
}