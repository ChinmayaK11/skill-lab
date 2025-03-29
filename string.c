#include <stdio.h>
#include <string.h>

int longestPrefixSuffix(char s[]) {
    int res = 0;
    int n = strlen(s);
    for (int len = 1; len < n; len++) {
      
        int j = n - len;
        
        int flag = 1;
     
        for (int k = 0; k < len; k++) {
            if (s[k] != s[j + k]) {  
                flag = 0;
                break;
            }
        }

        if (flag)
            res = len;
    }
    
    return res;
}

int main() {
    char s[] = "ababab";
    printf("%d", longestPrefixSuffix(s)); 
    return 0;
}