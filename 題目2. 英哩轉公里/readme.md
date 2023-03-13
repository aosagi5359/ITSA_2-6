題目2. 英哩轉公里
---
```C
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int mile;
    cin>>mile;
    double km = 1.6* mile;
    cout <<fixed << setprecision(1) << km<<endl;
}
```
本題唯一注意項目僅
cout <<fixed << setprecision(1) << km <<endl;

setprecision() 為 < iomanip > 中的函式，
用來取有效數字位數。

fixed 配合 setprecision() 可以取 km 小數點後位數。
