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
