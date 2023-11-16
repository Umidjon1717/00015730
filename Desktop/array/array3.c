#include <stdio.h>
// void ScanArr(int a[], int uzunlik){
//     for(int i=0; i<uzunlik; i++){
//      scanf("%d", &a[i]);
//     }
// }

// void BubleSort(int a[], int uzunlik){
//     for(int i=0; i<uzunlik-1; i++){
//         for(int j=0; j<uzunlik-1-i; j++){
//             if(a[j]<a[j+1]){
//             int c=a[j];
//             a[j]=a[j+1];
//             a[j+1]=c;
//             }
//         }
//     }
// }
// void printArr(int a[], int uzunlik){
//     for(int i=0; i<uzunlik; i++){
//         printf("%d ", a[i]);
//     }
// }
// int main(){
//     int n;
//     printf("Qiymatni kiriting: ");
//     scanf("%d ", &n);
//     int arr[n];
//     ScanArr(arr, n);
//     BubleSort(arr,n);
//     printArr(arr, n);

// }









void scanArr(int a[], int uzunlik){
    for(int i=0; i<uzunlik; i++){
        scanf("%d", &a[i]);
    }
}

void Initialise(int a[], int uzunlik){
    for(int i=0; i<uzunlik; i++){
        printf("%d ", a[i]);
    }
}

void change(int a[], int uzunlik){
    for(int i=0; i<uzunlik; i++){
        int xohlagan[], 
        scanf("%d", &a[i]);
        xohlagan[xohlagan_i++]=a[i]
    }
}

void BubleSort(int a[], int uzunlik){
    for(int i=0; i<uzunlik-1; i++){
        for(int j=0; j<uzunlik-1-i; j++){
            if(a[j]>a[j+1]){
                int c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
}

int main(){
    int n;
    printf("Qiymat kiriting: ");
    scanf("%d", &n);
    int arr[n];
    scanArr(arr, n);
    change(arr, n);
    BubleSort(arr, n);
    Initialise(arr,n);
}