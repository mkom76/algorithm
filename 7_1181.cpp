#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <utility>

using namespace std;

bool cmp (string u, string v)
{
    if(u.size() != v.size()) return u.size() < v.size();
    else return u < v;
}
int main(){
    int N;
    cin >> N;

    vector<string> result(N);

    for(int i=0;i<N;i++){
        cin >> result[i];
    }

    sort(result.begin(), result.end(), cmp);
    result.erase(unique(result.begin(), result.end()), result.end());

    for(int i=0;i<result.size();i++){
        cout << result[i] << "\n";
    }
}