#include <cstdio>
#include <algorithm>
using namespace std;

int result[1000000];
int N;

//void Quicksort(int start, int end);
//void swap(int x, int y);// 배열 안의 두 값의 위치 변경

int main(){
    scanf("%d", &N);

    for(int i=0;i<N;i++){
        scanf("%d", &(result[i]));
    }
    sort(result, result+N);

    for(int i=0;i<N;i++){
        printf("%d\n", result[i]);
    }
}
/*
void Quicksort(int start, int end){
    int pivot = result[start];
    int low = start+1;
    int high = end;

    while(true){
        while(result[low] < pivot && low <= end) low++;
        while(result[high] > pivot && high > start) high--;
        
        if(low < high) swap(low, high);
        else break;
    }
    swap(start, high);

    if(high-1 > start) Quicksort(start, high-1);
    if(end > high+1) Quicksort(high+1, end);
}

void swap(int x, int y){
    int temp = result[x];
    result[x] = result[y];
    result[y] = temp;
}
*/
/*
void pivotsort(int start, int end){
    int pivot = result[start];

    int small_count=0;// pivot보다 작은 값들의 개수
    for(int i=start+1;i<end+1;i++){
        if(result[i] < pivot){
            temp[start+small_count] = result[i];
            small_count++;
        }
    }
    temp[start+small_count] = pivot;
    int large_count=0;// pivot값보다 큰 값들의 개수
    for(int i=start+1;i<end+1;i++){
        if(result[i] > pivot){
            temp[start+small_count+large_count+1] = result[i];
            large_count++;
        }
    }

    for(int i=0;i<N;i++) result[i] = temp[i];

    if(small_count > 1) pivotsort(start, start+small_count);
    
    if(large_count > 1) pivotsort(start+small_count+2, end);
}
*/