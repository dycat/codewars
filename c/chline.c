#include<stdio.h>

void chline(char ch[250], int i, int j){
    for(int n = i; n <= j; n++){
        printf("%c", ch[n]);
    }
}

int main(void){
    chline("hello,world", 3, 9);
}