#include <stdio.h>
int Sum(int x){
    int sum;
    sum = 0;
    while(x != 0){
        sum = sum + x % 10;
        x /= 10;
    }
    return sum;
}
int main(){
    int t;
    int x , k;
    scanf("%d",&t);
    int ListNb[t];
    for(int i = 0; i < t;i++){
        scanf("%d %d",&x,&k);
        while(Sum(x) % k != 0){
            x++;
        }
        ListNb[i] = x;
    } 
    for(int i = 0; i < t;i++){
        printf("%d\n",ListNb[i]);
    } 
    return 0;
}