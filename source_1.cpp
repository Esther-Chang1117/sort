#include <iostream>
using namespace std;
int main(){
    int n, a[1000];//一共n個數,n不超過1000.a用來保存這些數
    cin >> n; //輸入n個數
    for (int i = 0; i<n; i++){
        cin >> a[i];
    
    }
    for (int i = 0; i <n - 1; i++){
        for (int j = 1; j < n; j++){
            if (a[j - 1] > a[j]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;

            }
        }
    }
    //依次輸出
    for (int i = 0; i< n; i++){
        cout << a[i] <<endl;

    }
    return 0;
}