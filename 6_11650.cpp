#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    vector<vector<string>> result;

    scanf("%d", &N);

    int A, B;
    for(int i=0;i<N;i++){
        scanf("%d %d", &A, &B);
        vector<int> temp;
        temp.push_back(A);
        temp.push_back(B);
        result.push_back(temp);
    }

    sort(result.begin(), result.end());

    for (vector<vector<int>>::const_iterator i = result.begin(); i != result.end(); ++i)
        printf("%d %d\n", (*i).front(), (*i).back());
}