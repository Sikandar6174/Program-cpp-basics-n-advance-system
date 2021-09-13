#include <bits/stdc++.h>
using namespace std;
void increment(int *v int *b) {
    (*v)=*v+*b;
}
void decr(int *l,int b) {
    if (*l>b)
    {
        (*l)=*l-*b;
    }
    else
    {
        (*b)=*b-*l;
    }
    
    
}

int main() {
     int a, b;
    // int *pa = &a, *pb = &b; 
    
    scanf("%d\n", &a);
    scanf("%d", &b);
    increment(&a);
    decr(&b); 
    printf("%d ",a);
    printf("%d ",b);
    return 0;
}  
