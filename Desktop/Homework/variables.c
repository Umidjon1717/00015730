// int main() {
//     // int a=2, b=3, c=4, natija;
//     // a=natija/100;
//     // b=(natija/10)%10;
//     // c=natija%10;
//     // natija=c+10*b+100*2;

// // int A=25, x, y, B;
// // y=A%10;
// // x=A/10;
// // B=x+10*y;

// // int SON=125, birlar, yuzlar;
// // birlar=SON%10;
// // yuzlar=SON/100;





// }
// #include <stdio.h>

// int main() {
//     int n, m;
//     printf("Qatrolar sonini kiriting: ");
//     scanf("%d", &n);
//     printf("Ustunlar sonini kiriting: ");
//     scanf("%d", &m);
//     int arr[n][m];
//     int sum_d = 0, sum_td = 0;

//     printf("Matrix elementlarini kiriting:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     puts("");

//     int max_d = -100000, min_d = 100000, max_td = -100000, min_td = 100000;

//     for (int i = 0, d = m - 1; i < n; i++, d--) {
//         if (max_d < arr[i][d]) {
//             max_d = arr[i][d];
//         }
//         if (min_d > arr[i][d]) {
//             min_d = arr[i][d];
//         }

//         if (max_td < arr[i][i]) {
//             max_td = arr[i][i];
//         }
//         if (min_td > arr[i][i]) {
//             min_td = arr[i][i];
//         }
//     }

//     for (int i = 0, d = m - 1; i < n; i++, d--) {
//         arr[i][d] = (arr[i][d] == max_d) ? min_d : (arr[i][d] == min_d) ? max_d : arr[i][d];
//         arr[i][i] = (arr[i][i] == max_td) ? min_td : (arr[i][i] == min_td) ? max_td : arr[i][i];
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         puts("");
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    //1-misol

    // char ism[] = "Umidjon";
    // char fam[] = "Izzatullayev";

    // for (int i = 0, j = 1; i < strlen(fam) && j < strlen(ism); i += 2, j += 2) {
    //     char temp = ism[j];
    //     ism[j] = fam[i];
    //     fam[i] = temp;
    // }

    // printf("%s\n", ism);
    // printf("%s\n", fam);

    // return 0;






    //2-misol

    char gap[30]="";
    scanf("%[^\n]s", gap);

    for(int i=0; gap[i]; i++){
       if(islower(gap[0])){
         gap[0]=toupper(gap[0]);
       }else if(gap[strlen(gap)]!='.'){
        gap[strlen(gap)+1]='.';
       }
    }
    puts(gap);

















}





