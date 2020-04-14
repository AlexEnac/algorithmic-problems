#include<iostream>
#include<string>
using namespace std;

int main(){

    int stoneNumber, count = 0;
    string s;
    cin>>stoneNumber;
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout<<count;

    return 0;
}