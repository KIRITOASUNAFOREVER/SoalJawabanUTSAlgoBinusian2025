#include<stdio.h>
#include<string.h>
#include<ctype.h>

bool sentencePalindrome(char str[]){
    int l = 0, h = strlen(str)-1;
  
    for (int i = 0; i <= h; i++){
    	str[i] = tolower(str[i]);
	}
        
  
    while (l <= h) {
        if (!(str[l] >= 'a' && str[l] <= 'z'))
            l++;
        else if (!(str[h] >= 'a' && str[h] <= 'z'))
            h--;
        else if (str[l] == str[h])
            l++, h--;
        else
            return false;
    }

    return true;
}

int main(){
	int testCase;
    char str[105];
    
    scanf("%d",&testCase); getchar();
    for(int j = 0 ; j < testCase; j++){
    	scanf("%[^\n]",&str); getchar();
		if (sentencePalindrome(str))
			printf("true\n");
		else
			printf("false\n");	
	}
  
    return 0;
}
