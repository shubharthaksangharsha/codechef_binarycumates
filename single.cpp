#include<iostream>
#include<vector>
using namespace std;
void input(vector<int> &ivec){
  for(auto &i : ivec){
    cin>>i;
  }
}

void display(vector<int> &ivec){
  for(auto i : ivec){
    cout<< i << " " ;
  }
}

void seperate(vector<int> &ivec){
  int count = 0;
  for(int i = 0; i < ivec.size() ; i++){
     int j = i, min = j;
     for(; j < ivec.size(); j++){
       if(ivec[j] <=  ivec[min]){
     	min = j;
       }
     }
     int swap;
     swap = ivec[i];
     ivec[i] = ivec[min];
      ivec[min] = swap;
  
    
  }
}
int main(){
  int n;
  cin>>n;
  vector<int> ivec(n);
  input(ivec);
  seperate(ivec);
  //  display(ivec);
  
}
