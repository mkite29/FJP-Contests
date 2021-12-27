
#include <iostream>
using namespace std;

int total = 0;
string ans = "";

void counthi(string s , int idx){

    if(idx >= s.size()){
        return;
    }

    if(s[idx] == 'h' and s[idx + 1] == 'i' and s[idx + 2] != 't'){
        total++;
        counthi(s,idx + 2);
    }

    else if(s[idx] == 'h' and s[idx + 1] == 'i' and s[idx + 2] == 't'){
        
        ans += "hit";
        counthi(s,idx + 3);
    }

    else{
        ans += s[idx];
        counthi(s,idx + 1);
    }
    

}
int main() {
    // your code goes here
    int n;
    string s;
    cin>>s>>n;

    counthi(s,0);

    cout<<total<<endl;
    cout<<ans[n]<<endl;
    cout<<ans;

    return 0;
}

