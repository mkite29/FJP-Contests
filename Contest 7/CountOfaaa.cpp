#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
bool f = false;

void solve(string s ,int idx,string osf){

    //
    if(idx >= s.size()){
        return;
    }

    if(s[idx] == '('){
        f = true;
        osf +='(';
        solve(s,idx+1,osf);
        //f= false;
    }


    else if(s[idx] == ')'){
        f = false;
        osf += ')';
        ans.push_back(osf);
        osf.clear();
        solve(s,idx+1,osf);
        //return;
    }
    else{

        if(f == true){
            osf+=s[idx];
            solve(s,idx+1,osf);    
        }

        else
            solve(s,idx+1,osf);
        
    }

}

int total = 0;
//string ans = "";

void counthi(string s , int idx){

    if(idx >= s.size()){
        return;
    }

    if(s[idx] == 'a' and s[idx + 1] == 'a' and s[idx + 2] == 'a'){
        total++;
        counthi(s,idx + 1);
    }

    else{
        //ans += s[idx];
        counthi(s,idx + 1);
    }
    

}
int total2 = 0;
void counthi2(string s , int idx){

    if(idx >= s.size()){
        return;
    }

    if(s[idx] == 'a' and s[idx + 1] == 'a' and s[idx + 2] == 'a'){
        total2++;
        counthi2(s,idx + 3);
    }

    else{
        //ans += s[idx];
        counthi2(s,idx + 1);
    }
    

}

//Let's Start The Magic
int32_t main(){    
fio;


// int t;
// cin>>t;

// while(t--)
// {
//     solve();
// }

string s;
cin>>s;

counthi(s,0);
cout<<total<<endl;
counthi2(s,0);

cout<<total2<<endl;

cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
return 0;

}
