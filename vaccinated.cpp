//https://www.codechef.com/BCMN2021/problems/BCMVAC
#include<iostream>
using namespace std;
int main(){
    int a, b , c; 
    cin>> a >> b >> c;
    if(a < b && a < c){
        cout<< "A";
    }
    else if(b < c && b < a){
        cout<< "B";
        
    }
    else {
        cout << "C";
    }
    
    return 0;
    
}
