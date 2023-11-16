#include <stdio.h>

int main(){



// int n;
// printf("Qiymatni kiriitng: ");
// scanf("%d", &n);
// int arr[n];
// for(int i=0; i<n; i++){
//     printf("Sonlarni kiriting: ");
//     scanf("%d", &arr[i]);
// }
// int max=arr[0], min=arr[n], index_max=0, index_min=0;
// for(int i=0; i<n; i++){
//     if(arr[i]>=max) max=arr[i];
//     index_max=i;
// }
// for(int i=n; i<n&&i>=0; i--){
//     if(arr[i]>=min) min=arr[i];
//     index_min=i;
// }
// printf("Maksimum qiymat indeksi: %d", index_max);
// puts("");
// printf("Minimum qiymat indeksi: %d", index_min);








// int n;
// printf("Sonni kiriting: ");
// scanf("%d", &n);
// int arr[n];
// for(int i=0; i<n;i++){
//     printf("Sonlarni kiriting: ");
//     scanf("%d", &arr[i]);
// }
// for(int i=(n-1)/2; i<n&&i>=0; i--){
//     printf("%d ", arr[i]);
// }for(int i=(n+1)/2; i<n; i++){
//     printf("%d ", arr[i]);
// }




// int arr[10];

// for(int i=0; i<10; i++ ){
//     printf("Sonlarni kiriting: ");
//     scanf("%d", &arr[i]);
// }
// int juft=0, toq=0, natija=0;
// for(int i=0; i<10; i++){
//     if(i%2==0) juft=juft+arr[i];
//     else toq=toq+arr[i];
// }natija=toq-juft;
// printf("Natija: %d", natija);



float arr1[5], arr2[5], arr3[5];
for(int i=0; i<5; i++){
    printf("1-array sonlarni kiriting: ");
    scanf("%f", &arr1[i]);
}puts("");
for(int j=0; j<5; j++){
    printf("2-array sonlarni kiriting: ");
    scanf("%f", &arr2[j]);
}puts("");
for(int i=0, j=0, c=0; i<5&&j<5; i++, j++){
    arr3[c]=(arr1[i]+arr2[i])/2;
    printf("%.1f ", arr3[c]);
}


























}