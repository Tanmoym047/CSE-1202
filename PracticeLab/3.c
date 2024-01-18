#include <stdio.h>

struct cricketer{
    int id;
    char name[100];
    int runs;
};

int main(){
    int num, sum = 0;
    scanf("%d", &num);
    struct cricketer players[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &players[i].runs);
        sum += players[i].runs;
    }
    printf("Total run = %d\n", sum);
    double average = sum;
    printf("Average run = %lf", average / num);
}