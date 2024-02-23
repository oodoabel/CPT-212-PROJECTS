#include <stdio.h>
int main(){
    
    int input;
    float sum;
    float count;
    float Average;

    printf("Enter amount of first natural numbers: \n");
    scanf("%d", &input);
    for(int i = 1; i <= 20; i++){
        sum = sum + i;
        count += 1;   
        // printf("%d\n", i);
    }
    Average = sum/count;
    printf("Total: %f\n", sum);
    printf("Average: %f", Average);

    return 0;
}