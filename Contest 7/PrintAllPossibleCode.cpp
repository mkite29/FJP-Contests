
#include <iostream>
#include<string>
using namespace std;



void printEncoding(string str, string asf,int idx){
   
    if(idx == str.size()){
        cout<<asf<<endl;
        return;
    }

    
    int ch1 = str[idx] - '0';
    if(ch1 >= 1 and ch1 <= 9){

       
        printEncoding(str,asf + (char)('a' + ch1 - 1),idx + 1);
    }


  

    if(idx + 1 < str .size())
    {
       
        int ch2 = (str[idx] - '0')*10 + (str[idx+1] - '0');
            
        
        if(ch2 >= 10 and ch2 <= 26){
            printEncoding(str,asf + (char)('a' + ch2 - 1),idx + 2);
        }

    }   

}

int main(){
    
    string str;
    cin>>str;

    printEncoding(str,"",0);
    
}
