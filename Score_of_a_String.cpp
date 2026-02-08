#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int t=0;
    for(int i=0;i<s.length()-1;i++){
        t+=abs(s[i]-s[i+1]);
    }
    cout<<t<<endl;
    return 0;
}