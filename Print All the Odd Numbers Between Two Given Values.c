//Print All the Odd Numbers Between Two Given Values
#include<stdio.h>
int main () {
    int n1, n2, i;
    
    printf("Input a value to Initialte with : \n");
    scanf("%d", &n1);
    
    printf("Input a value to Conclude with : \n");
    scanf("%d", &n2);
    
    for (i=n1; i<=n2; ++i) {
        if (i%2==0) {
            continue;
        }
        printf("%d \n",i);
        }
    return 0;
}