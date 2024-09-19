#include <stdio.h>

int main() {
    int N;
    printf("Enter value: ");
    scanf("%d", &N);

    printf("Series: ");


    if (N % 2 != 0) {
        
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }//endfor
    } else {
        
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }//endfor
    }//endelse

    printf("\n");
    return 0;
}//end main function
