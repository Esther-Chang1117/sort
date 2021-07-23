#include <iostream>
using namespace std;

int main(){
    int a[10];
    for (int i = 0; i < 10; i++){
        cin >> a[i];
    }
    //首先,我們把奇數放到數組左邊,偶數放到數組右邊
    int l = 0, r = 9;//用左手和右手分別指向數組兩邊
    while (l <= r){
        bool leftIsOdd = a[l] % 2 == 1;
        bool rightIsEven = a[r] % 2 == 0;
        if (leftIsOdd){
            l++;
        } else if (rightIsEven){
            r--;
        } else if (!leftIsOdd && !rightIsEven){
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }
    //對l左邊(奇數部分)冒泡,不斷比較相鄰的兩個數,如果順序錯了,那麼就交換
    int start = 0, end = l;
    for (int i = start; i < end - 1; i++){
        for (int j =start + 1; j <start + end -i; j++){
            if (a[j - 1] > a[j]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }

        }
    }
    //對l右邊(偶數部分)冒泡,不斷比較相鄰兩個數,如果順序錯了,那麼就交換
    start = l, end = 10;
    for (int i =start; i < end - 1; i++){
        for (int j = start + 1; j < start + end - i; j++){
            if (a[j - 1] > a[j]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++){
        cout << a[i] <<' ';

    }
    return 0;
}