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
  int f;
  cin>>f;
   for(int i = 0; i < ivec.size() ; i++){
    if(ivec[i] == f){
        cout<< i;
    }
    else if(ivec[i] < f && f < ivec[i+1]){
        cout<< i+1;
    }
  }

   return 0;  
}
