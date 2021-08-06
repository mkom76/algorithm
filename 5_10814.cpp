#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <utility>

using namespace std;

bool cmp (pair<int, string> u, pair<int, string> v)
{
    return u.first < v.first;
}
int main(){
    int N;
    cin >> N;

    vector<pair<int, string>> result(N);

    for(int i=0;i<N;i++){
        cin >> result[i].first >> result[i].second;
    }

    stable_sort(result.begin(), result.end(), cmp);

    for(int i=0;i<N;i++){
        cout << result[i].first << " " << result[i].second << "\n";
    }
}

