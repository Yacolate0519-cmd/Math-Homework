#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of array= ");
    
    if(scanf("%d",&size) != 1){
        printf("Input Error! Enter the number !");
        return 1;
    }else if(size <= 0){
        printf("Enter the positive integer !");
        return 1;
    }
   
    int arr[size][size];
    int count = 1;

    int flag = 0;
    for (int i = 0; i < size; i++) {
        if (flag % 2 == 0) {
            for (int j = 0; j < size; j++) {
                arr[j][i] = count;
                count++;
            }
        } else {
            for (int j = size - 1; j >= 0; j--) {
                arr[j][i] = count;
                count++;
            }
        }
        flag++;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
