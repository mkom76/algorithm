#include <iostream>
#include <cstdio>

using namespace std;

int zero_call = 0;
int one_call = 0;

int fibonacci(int n) {
    if (n == 0) {
        zero_call++;
        return 0;
    } else if (n == 1) {
        one_call++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int T;
    scanf("%d", &T);

    int N;
    for(int i=0;i<T;i++){
        cin >> N;
        fibonacci(N);
        cout << zero_call << " " << one_call << "\n";
        zero_call = one_call = 0;
    }
}