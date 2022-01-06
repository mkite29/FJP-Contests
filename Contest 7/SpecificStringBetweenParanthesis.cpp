

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


    else if(s[idx] == ')' and f == true){
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



// vector<int> st;
// vector<int> end;

// for(int i = 0;i<s.size();i++){
//     if(s[i] == '('){
//         st.push_back(i);
//     }
//     else if(s[i] == ')'){
//         end.push_back(i);
//     }

// }

// //cout<<st.size()<< " "<<end.size()<<endl;

// vector <string> ans;

// int p1 = 0;
// int p2 = 0;

// while(p1 < st.size() and p2 < end.size())
// {

    

//     string make = "";

//     if(s[st[p1]] == '(' and s[end[p2]] ==')')
//     {
    
//     //cout<<st[p1]<<" "<<end[p2]<<endl;

//     for(int x = st[p1] ;x <= end[p2] ;x++)
//         make += s[x];

//     ans.push_back(make);
    
//     }

    
//     p1++,p2++;

// }

// if(ans.empty()){
//     cout<<"()";
// }

// for(auto i : ans)
//     cout<<i;


solve(s,0,"");
for(auto i : ans){
    cout<<i;
} 

cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
return 0;

}
