// https://m3.codeforces.com/contest/1884/problem/D



#include <stdio.h>

int findZero(char * List,int n){
    for(int i = n; i >= 0;i--){
        if (List[i] == '0') return i;
    }
    return -1;
}
int main(){
    int t;
    int n, NumberOp , nbBits;
    char temp;
    int posZero , numberofOperations = 0;
    int CountZero = 0;
    scanf("%d",&t);
    for(int j = 0 ; j < t ; j++){
        scanf("%d",&n);
        char bin[n];
        scanf("%s",&bin);
        numberofOperations = 0;
        CountZero = 0;
        for(int i = 0; i < n; i++){
            if (bin[i] == '0') CountZero++;
        }
        for(int i = n - 1; i > n - 1 - CountZero; i--){
            posZero = findZero(bin ,i);
            bin[posZero] = '1';
            bin[i] = '0';
            numberofOperations = numberofOperations + i - posZero;
            printf("%d ",numberofOperations);
        }
        for(int i = 0; i < n - CountZero; i++){
            printf("-1 ");
        }
        printf("\n");
    }
    return 0;
}