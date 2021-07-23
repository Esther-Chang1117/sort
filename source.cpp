#include <iostream>
using namespace std;

int main(){
    int a[10];
    for (int i = 0; i < 10; i++){
        cin >> a[i];

    }
    //冒泡,不斷比較相鄰的兩個數,如果順序錯了,那麼就交換
    for (int i = 0; i < 9; i++){
        for (int j = 1; j < 10 - i; j++){
    //與剛才的冒泡順序不同,我們不只是通過比較數字的大小決定順序
    //如果左邊的為偶數,右邊的為奇數,那麼順序也需要顛倒
    bool leftIsEven = a[j - 1] % 2 == 0;
    bool rightIsEven = a[j] % 2 == 0;
    if((leftIsEven && !rightIsEven) ||(leftIsEven == rightIsEven && a[j - 1] > a[j])){
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
    }

    }
    }
    for (int i = 0; i < 10; i++){
        cout << a[i] << ' ';

    }
    return 0;

}