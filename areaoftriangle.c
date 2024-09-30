include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    float s,area;
    printf("enter the a,b and c values:");
    scanf("%d%d%d",&a,&b,&c);
    s=((a+b+c)/2);
    printf("the values of s is %f",s);
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle %f",area);
    
    return 0;
}
