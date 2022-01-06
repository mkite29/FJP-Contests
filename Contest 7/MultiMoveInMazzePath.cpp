
#include<bits/stdc++.h>
using namespace std;




    int total = 0;
    void printMazePaths(int sr, int sc, int dr, int dc, string psf) {
        // write your code here
        
        if(sr > dr || sc > dc){
            return;
        }
        
        if(sr == dr and sc == dc){
            total++;
            //cout<<psf<<endl;
            return;
        }
        
        int jumps = 1;
        while(jumps + sc <= dc){
        printMazePaths(sr,sc + jumps,dr,dc,psf + "h" + to_string(jumps));
        jumps++;
        }
        
        jumps = 1;
        while(jumps + sr <= dr){
        printMazePaths(sr + jumps , sc,dr,dc,psf + "v" + to_string(jumps));
        jumps++;    
        }
        
        jumps = 1;
        while(jumps + sr <= dr and jumps + sc <= dc){
        printMazePaths(sr + jumps , sc + jumps,dr,dc,psf + "d" + to_string(jumps));
        jumps++;    
        }
        
    }


 void printMazePaths2(int sr, int sc, int dr, int dc, string psf,vector<string> &paths) {
        // write your code here
        
        if(sr > dr || sc > dc){
            return;
        }
        
        if(sr == dr and sc == dc){
            //total++;
            paths.push_back(psf);
            return;
        }
        
        int jumps = 1;
        while(jumps + sc <= dc){
        printMazePaths2(sr,sc + jumps,dr,dc,psf + "H" + to_string(jumps),paths);
        jumps++;
        }
        
        jumps = 1;
        while(jumps + sr <= dr){
        printMazePaths2(sr + jumps , sc,dr,dc,psf + "V" + to_string(jumps),paths);
        jumps++;    
        }
        
        jumps = 1;
        while(jumps + sr <= dr and jumps + sc <= dc){
        printMazePaths2(sr + jumps , sc + jumps,dr,dc,psf + "D" + to_string(jumps),paths);
        jumps++;    
        }
        
    }



int main() {
        int n ;
        int m ;cin>>n>>m;
        printMazePaths(0, 0, n - 1, m - 1, "");
        cout<<total<<endl;
    
        vector<string> paths;
       
        printMazePaths2(0, 0, n - 1, m - 1, "",paths);
       
        
    
        cout<<"[";    
        for(int i = 0;i<paths.size()-1;i++)
            cout<<paths[i]<<", ";
    
        cout<<paths[paths.size()-1];
            cout<<"]";
    
        cout<<endl;
    
        for(auto i : paths){
            cout<<i<<endl;
        }
    }
