題目3. 判斷座標是否在圓形的範圍內
---
```C
#include <iostream>  
using namespace std; 
int main() {  
    int x, y;
    cin >> x >> y;

    //利用畢氏定理 x^2 + y^2 <= 100^2，判斷範圍
    if(x*x+y*y <= 10000) {  
        cout << "inside" << endl;     
    }  
    else {  
        cout << "outside" << endl;  
    }  
    return 0;  
}  
```
本題利用畢氏定理求出面積是否大於圓面積,

如果大於圓面積則在圓外，

反之，則在圓內。
