#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    // int n;
    // printf("n qiymatini kiriting: ");
    // scanf("%d", &n);

    // int arr[n];
    // for(int i = 0; i < n; i++){
    //     if(i % 2 == 0){
    //         arr[i] = (n / 2) + 1 + (i / 2);
    //     } else{
    //         arr[i] = (i / 2) + 1;
    //     }
    // }

    // printf("Output: array= ");
    // for(int i = 0; i < n; i++){
    //     printf("%d ", arr[i]);
    // }

    // return 0;





    // int n;
    // printf("n qiymatni kiriting: ");
    // scanf("%d", &n);

    // int arr[n];
    // for(int i=0; i<n; i++){
    //     if(i%2==0) arr[i]=i/2+1;
    //     else arr[i]= n/2+1+i/2;
    // }

    // printf("Outpu: array= ");
    // for(int i=0; i<n; i++){
    //    printf("%d ", arr[i]);
    // }
    // return 0;



    //   srand(time(NULL));
    // int n;
    // printf("Uzunligini kiriting: ");
    // scanf("%d", &n);

    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     arr[i] = rand() % 31 - 5;
    //     printf("%d ", arr[i]);
    // }

    // for (int i = 0; i < n; i++) {
    //     if (arr[i] <= 0) {
    //         for (int j = 0; j < n - 1; j++) {
    //             for (int k = 0; k < n - 1 - j; k++) {
    //                 if (arr[k] > arr[k + 1]) {
    //                     int c = arr[k];
    //                     arr[k] = arr[k + 1];
    //                     arr[k + 1] = c;
    //                 }
    //             }
    //         }
    //     } else {
    //         for (int j = 0; j < n - 1; j++) {
    //             for (int k = 0; k < n - 1 - j; k++) {
    //                 if (arr[k] < arr[k + 1]) {
    //                     int d = arr[k];
    //                     arr[k] = arr[k + 1];
    //                     arr[k + 1] = d;
    //                 }
    //             }
    //         }
    //     }
    // }

    // printf("Output:  ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // return 0;










    srand(time(NULL));
    int n;
    printf("Uzunligini kiriting: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 31 - 5;
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i]%2==0) {
            for (int j = 0; j < n - 1; j++) {
                for (int k = 0; k < n - 1 - j; k++) {
                    if (arr[k] > arr[k + 1]) {
                        int c = arr[k];
                        arr[k] = arr[k + 1];
                        arr[k + 1] = c;
                    }
                }
            }
        } else {
            for (int j = 0; j < n - 1; j++) {
                for (int k = 0; k < n - 1 - j; k++) {
                    if (arr[k] < arr[k + 1]) {
                        int d = arr[k+1];
                        arr[k+1] = arr[k];
                        arr[k] = d;
                    }
                }
            }
        }
    }

    printf("Output:  ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;









}


















