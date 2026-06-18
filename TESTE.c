

#include <stdio.h>

int divisibilidade(int a, int b){
    int c;
    if(a<0){
        a = -a;
    }
    if(b<0){
        b = -b;
    }
    if(b==0){
        return 0;
    }
    c = b;
    while(a!=0){
        a--;
        c--;
        if(c==0){
            c = b;
        }
    }
    if(c==b){
        return 1;
    }else{
        return 0;
    }
}

int main(){
     int a = 8, b = 2, k; 
    k = divisibilidade(a,b);
    if(k==0){
        printf("a nao eh divisivel por b\n");
    } else if(k==1){
        printf("a eh divisivel por b\n");
    }

    return 0;
}







