#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    double d;
    int result1,result2,result3,result4;
    result1= sizeof(a);
    result2=sizeof(b);
    result3=sizeof(c);
    result4=sizeof(d);
    printf("The size of integer varaible a:%d byte\n",result1);
    printf("The size of float varaible b:%d byte\n",result2);
    printf("The size of charecter varaible c:%d byte\n",result3);
    printf("The size of double varaible d:%d byte\n",result4);
}
