#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    printf("x");
    for(i = 2; i <= n; i++) 
    {
         if(i % 2 == 0)
                printf(" - ");
            else
                printf(" + ");
        
        printf("x^%d/%d! ", i,i);
        
    }

    return 0;
}
