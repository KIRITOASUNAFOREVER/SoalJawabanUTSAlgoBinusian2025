#include <stdio.h>

int main(){
    int i = 0, n;
    scanf("%d", &n); getchar();

    for(i = 0; i < n; i++){
        int j = 0, k, text_chars[35][105], key_chars[35][105], text_lengths, key_lengths;
        scanf("%d %d", &text_lengths, &key_lengths); getchar();

        for(j = 0; j < text_lengths; j++){
            scanf("%d", &text_chars[i][j]);
        }

        for(j = 0; j < key_lengths; j++){
            scanf("%d", &key_chars[i][j]);
        }
        
        for(j = 0; j < (text_lengths - key_lengths + 1); j++){
            unsigned char result = 0;
            for(k = 0; k < key_lengths; k++){
                result = result + (text_chars[i][j + k] ^ key_chars[i][k]);
            }
            if(j){
            	printf(" ");
			}
            printf("%d", result);
        }
        printf("\n");
    }
    
    return 0;
}
