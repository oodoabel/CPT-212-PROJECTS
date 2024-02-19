#include <stdio.h>
int main(){
    float sum;
    float count;
    float Average;
    for(int i = 1; i <= 10; i++){
        sum = sum + i;
        count += 1;   
        // printf("%d\n", i);
    }
    Average = sum/count;
    printf("Total: %f\n", sum);
    printf("Average: %f", Average);

    return 0;
}