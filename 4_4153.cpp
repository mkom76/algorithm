#include <cstdio>

using namespace std;

bool check(int a, int b, int c);

int main(){
    int a, b, c;
    int max;
    
    scanf("%d %d %d", &a, &b, &c);
    while(a != 0){
        if(check(a, b, c)) printf("right\n");
        else printf("wrong\n");
        scanf("%d %d %d", &a, &b, &c);
    }
}
bool check(int a, int b, int c){
    if(a >= b && a >= c) return (b*b + c*c == a*a);
    else if(b >= a && b >= c) return (a*a + c*c == b*b);
    else if(c >= a && c >= b) return (a*a + b*b == c*c);
}