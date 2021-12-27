#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve1(int sr,int sc,int dr,int dc,string osf,int &totalpaths,vector<string>&ans){
    
    if(sr > dr or sc > dc){
        return;
    }
    
    if(sr == dr and sc == dc){
        totalpaths++;
        ans.push_back(osf);
        //cout<<osf<<endl;
        return;
    }
    
    solve1(sr,sc+1,dr,dc,osf + "H",totalpaths,ans);
    solve1(sr+1,sc,dr,dc,osf + "V",totalpaths,ans);
    solve1(sr+1,sc+1,dr,dc,osf + "D",totalpaths,ans);
    
} 

void solve2(int sr,int sc,int dr,int dc,string osf){
    
    if(sr > dr or sc > dc){
        return;
    }
    
    if(sr == dr and sc == dc){
        //totalpaths++;
        cout<<osf<<endl;
        return;
    }
    
    solve2(sr,sc+1,dr,dc,osf + "H");
    solve2(sr+1,sc,dr,dc,osf + "V");
    solve2(sr+1,sc+1,dr,dc,osf + "D");
    
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1 , n2;
    cin>>n1>>n2;
    
    string osf = "";
    int totalpaths = 0;
    vector<string> ans;
    
    solve1(0,0,n1,n2,osf,totalpaths,ans);
    
    cout<<totalpaths<<endl;
    cout<<"[";
    for(int i = 0;i<(int)(ans.size()-1);i++){
        cout<<ans[i]<<","<<" ";
    }
    cout<<ans[ans.size()-1];
    cout<<"]";
    cout<<endl;
    
    solve2(0,0,n1,n2,osf);
    
    return 0;
}
