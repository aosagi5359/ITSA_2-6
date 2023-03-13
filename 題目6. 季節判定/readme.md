題目6. 季節判定
---
```c
#include <iostream>
using namespace std;
int main(){
    int month;
    cin>>month;
    switch(month){
        case 3:
        case 4:
        case 5:
            cout<<"Spring\n";
            break;
        case 6:
        case 7:
        case 8:
            cout<<"Summer\n";
            break;
        case 9:
        case 10:
        case 11:
            cout<<"Autumn\n";
            break;
        default:
            cout<<"Winter\n";
            break;
    }
}
```
利用 switch 按照題目設定月份的季節，

最後剩下 12、1、2月，用 default 設定為Winter就好。
