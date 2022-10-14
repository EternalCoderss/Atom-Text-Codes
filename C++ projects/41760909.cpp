#include<iostream>
using namespace std;
int main(){
    int withdrawl;
    cin>>withdrawl;
    double balance,remain; cin>>balance;
    remain = balance - withdrawl - 0.50;
    if((withdrawl%5 == 0)  && (withdrawl<=balance-0.50)){
        printf("%0.2f",remain);
    }
    else{
        printf("%0.2f",balance);
    }
    
    return 0;
    
}