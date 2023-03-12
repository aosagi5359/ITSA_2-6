#include<iostream>
using namespace std;
int main(){
    int i_hour,i_min,f_hour,f_min;
    cin>>i_hour>>i_min>>f_hour>>f_min;
    
    int time=(f_hour*60+f_min)-(i_hour*60+i_min);
    if(time<=120 && time>=0){
        cout<<time/30*30<<endl;
    } 
    else if(time>120 && time<=240){
        cout<<(time-120)/30*40+120<<endl;
    }
    else{
        cout<<(time-240)/30*60+120+160<<endl;
    } 
}