ITSA 2 ~ 6 解題方式
===

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

setprecision() 為 < iomanip > 中的函式"，
用來取有效數字位數。

fixed 配合 setprecision() 可以取 km 小數點後位數。

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

題目4. 停車費計算
---
```c
#include<iostream>
using namespace std;
int main(){
    int i_hour,i_min,f_hour,f_min;
    cin>>i_hour>>i_min>>f_hour>>f_min;
    //總時間計算
    int time=(f_hour*60+f_min)-(i_hour*60+i_min);

    //判斷是否 未滿2小時 ; 每半小時 30 圓。
    if(time<=120 && time>=0){
        cout<<time/30*30<<endl;
    } 
    //判斷 超過2小時 並 未滿4小時 ; 每半小時 40 圓。
    else if(time>120 && time<=240){
        cout<<(time-120)/30*40+120<<endl;
    }
    //超過4小時後 ; 每小時 60 圓
    else{
        cout<<(time-240)/30*60+120+160<<endl;
    } 
}
```
本題僅要注意的是，每個時間段過後的計算方式的轉換，

要減去先前階段已經過計算的時間。

題目5. 十進制轉二進制
---
```c
#include<iostream>  
using namespace std;  
int main(){  
    int n=0;  
    int bin[8]={0};  
    cin>>n;  
    if (n<0){  
        n+=256; //將負數移至整數計算
    }

    //由後往前計算並儲存除2的餘數，即為轉換為二進位
    for (int i = 7; i >= 0; i--){  
        bin[i]=n%2;  
        n/=2;  
    } 
    //由前往後輸出餘數，即輸出二進位表示 
    for (int i = 0; i < 8; i++){  
        cout<<bin[i];  
    }  
    cout<<endl;  
}
```
本題範圍介於-128～127之間，十進位-128開始為二進位表示的127往後接續，

所以要用 n+256 來計算。

再利用陣列 bin[8] 由後往前計算並儲存2的餘數,

計算完後並輸出的數字便是二進位表示。


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