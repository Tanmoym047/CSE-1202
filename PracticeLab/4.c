#include <stdio.h>
double fact(double x){
    
    for(double i = x - 1; i >= 2; i--){
        x *= i;
    }
    return x;
}

void npr(double x, double y){
    
    printf("%lf\n", fact(x)/fact(x - y));
}
void ncr(double x, double y){
    
    printf("%lf", fact(x)/(fact(y)*fact(x - y)));
}

int main(){
    double n, r;
    scanf("%lf %lf", &n, &r);
    npr(n,r);
    ncr(n,r);
    
}