#include<bits/stdc++.h>


using namespace std;



void solve2(string s , string osf,vector<string> &ans){

    if(s.size() == 0){
        ans.push_back(osf);
        return;
    }
    
    unordered_set<char> ss;
    
    for(int i = 0; i < (int)s.size() ;i++){

        char ch = s[i];
        
        if(ss.count(ch) == 0){
        
        ss.insert(ch);
            
        string ros = s.substr(0,i) + s.substr(i+1);
        
        solve2(ros,osf + ch,ans);
            
        }
    }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string s;
    cin>>s;
    
    if(s == ""){
        cout<<"";
        return 0;
    }

string osf = "";
  
vector<string> ans;
    
solve2(s,osf,ans);
    
    cout<<ans.size()<<endl;
    
    
sort(ans.begin(),ans.end());
    
for(auto i:ans){
    cout<<i<<endl;
}
    return 0;
}
