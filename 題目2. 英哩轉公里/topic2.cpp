#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int mile;
    cin>>mile;
    double km = 1.6* mile;
    cout <<fixed << setprecision(1) << km<<endl;
}