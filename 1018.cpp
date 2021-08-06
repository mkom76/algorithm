#include <iostream>
using namespace std;

char map[50][50];

int check_number_of_change(int start_index_X, int start_index_Y);

int main(){
    int N, M;
    cin >> N >> M;


    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> map[i][j];
        }
    }

    // 모든 시작 인덱스에 대해 최솟값을 찾음
    int min = 2147483647;
    int return_value = 0;
    for(int k=0;k<N-7;k++){
        for(int q=0;q<M-7;q++){
            return_value = check_number_of_change(k, q);
            if(return_value<min) min = return_value;
        }
    }
    cout << min;
}
int check_number_of_change(int start_index_X, int start_index_Y){
    int case1 = 0;// 왼쪽 위가 'W'
    int case2 = 0;// 왼쪽 위가 'B'
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if((i+j) % 2 == 0){// 
                if(map[i+start_index_X][j+start_index_Y] == 'W') case2++;//왼쪽 위와 같아야하는 모든 부분들이 W인 겨우
                else case1++;
            }
            else{
                if(map[i+start_index_X][j+start_index_Y] == 'W') case1++;//왼쪽 위와 같아야하는 모든 부분들이 W인 겨우
                else case2++;

            }
        }
    }
    return (case1 < case2) ? case1:case2;
}