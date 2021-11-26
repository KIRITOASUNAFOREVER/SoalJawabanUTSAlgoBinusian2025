#include <stdio.h>

int main(){
    int minVal, maxVal, i;
    scanf("%d %d", &minVal, &maxVal);
    
    for(i=minVal; i<=maxVal; i++){
        if((((i-6) % 7) == 0) && (((i-4) % 5) == 0) && (((i-2) % 3) == 0)){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
