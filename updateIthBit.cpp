#include<iostream>
using namespace std;

int updateIthBit(int num,int i,int val){
    num=num & ~(1<<i);
    
    num=num | (val<<i);
    cout<<num<<endl;
    return num;
}

int main(){
    updateIthBit(7,2,0);
    updateIthBit(7,3,1);
    return 0;
}