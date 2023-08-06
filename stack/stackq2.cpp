/* reverse string using stack*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string ch = "kanika";
    stack <string> s;
    for(int i=0;i<ch.length();i++){
        char x = ch[i];
        s.push(x);
    }
    string sh = "";
    while(!s.empty()){
        sh = s.top();
        sh.pop();

    }


return 0;
}