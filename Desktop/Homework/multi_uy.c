#include <stdio.h>
#include <stdlib.h>
int main(){
    // int n,m;
    // printf("Qatorlar sonini kiriting: ");
    // scanf("%d", &n);
    // printf("Ustunlar sonini kiriting: ");
    // scanf("%d", &m);
    // int arr[n][m];
    // for(int i=0; i<n*m; i++){
    //     scanf("%d", &arr[0][i]);
    // } puts("");
    
    // for(int i=0;i<n;i++){
    //     for(int j=0; j<m; j++){
    //         if((i==1&&(j==1||j==m-2))||(i==n-2&&(j==1||j==m-2))){
    //             printf("* ");
    //         }else printf("%d ", arr[i][j]);    
    //     }
    //     puts("");
    // }




    // int n,m;
    // printf("Qatrolar sonini kiriting: ");
    // scanf("%d", &n);
    // printf("Ustunlar sonini kiriting: ");
    // scanf("%d", &m);
    // int arr[n][m];

    // for(int i=0; i<n*m;i++){
    //     scanf("%d", &arr[0][i]);
    // }puts("");
    // for(int i=0, d=m-1; i<n;i++, d--){
    //     for(int j=0 ; j<m; j++){
    //         if(d==j) printf("* ");
    //         else printf("%d ", arr[i][j]);
    //     }
    //     puts("");
    // }





    // int n,m;
    // printf("Qatrolar sonini kiriting: ");
    // scanf("%d", &n);
    // printf("Ustunlar sonini kiriting: ");
    // scanf("%d", &m);
    // int arr[n][m];
    // int sum_d=0, sum_td=0;
    // for(int i=0; i<n*m;i++){
    //     scanf("%d", &arr[0][i]);
    // }puts("");

    // for(int i=0, d=m-1; i<n; i++, d--){
    //     for(int j=0; j<m; j++){
    //         if(d==j) sum_d=sum_d+arr[i][j];
    //         if(i==j) sum_td=sum_td+arr[i][j];
    //     }
    // }
    // printf("Diagonal: %d\n", sum_d);
    // printf("Teskari diagonal: %d", sum_td);
    // return 0;







    int n, m;
    printf("Qatrolar sonini kiriting: ");
    scanf("%d", &n);
    printf("Ustunlar sonini kiriting: ");
    scanf("%d", &m);
    int arr[n][m];
    int sum_d = 0, sum_td = 0;

    printf("Sonlarni kiriting:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    puts("");

    int max_d = -100000, min_d = 100000, max_td = -100000, min_td = 100000;

    for (int i = 0, d = m - 1; i < n; i++, d--) {
        if (max_d < arr[i][d]) {
            max_d = arr[i][d];
        }
        if (min_d > arr[i][d]) {
            min_d = arr[i][d];
        }

        if (max_td < arr[i][i]) {
            max_td = arr[i][i];
        }
        if (min_td > arr[i][i]) {
            min_td = arr[i][i];
        }
    }

    for (int i = 0, d = m - 1; i < n; i++, d--) {
        if (arr[i][d] == max_d) {
            arr[i][d] = min_d;
        } else if (arr[i][d] == min_d) {
            arr[i][d] = max_d;
        }

        if (arr[i][i] == max_td) {
            arr[i][i] = min_td;
        } else if (arr[i][i] == min_td) {
            arr[i][i] = max_td;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }

    return 0;










   
    
   


















    





    






















}