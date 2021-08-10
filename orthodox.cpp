//https://www.codechef.com/BCMN2021/problems/BCMOFG
#include<iostream>
#include<vector>
using namespace std;
void input(vector<int> &ivec){
  for(auto &i : ivec){
    cin>>i;
  }
}

int main(){
  int n;
  cin>>n;
  vector<int> ivec(n);
  input(ivec);
  int move= 0;
  for(int i = 0; i < ivec.size()-1 ; i++){
    if(ivec[i] != ivec[i+1]){
      ivec[i] = ivec[i+1];
      move++;
    }
  }
  cout<<move<<endl;
   return 0;  
}
