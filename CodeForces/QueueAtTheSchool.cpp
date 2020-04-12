#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int n, t;
string s;
int main(){
    cin>>n>>t;
    cin>>s;
    int i;
    int n = s.length();
    while(t--){
        for(i = 0; i < n - 1; i++){
            if(s[i]=='B' && s[i+1]=='G')
                swap(s[i], s[i+1]), i++;
        }
    }
    cout<<s;
    return 0;
}

