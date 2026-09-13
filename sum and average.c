#include <stdio.h>
int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    
    float average = (float) (a+b)/2;
    
    printf("average:%.3f",a,b,average);
    

    return 0;
}
  
