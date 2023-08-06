#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("kanika");
    s.push("dhawan");
    s.pop();
    cout<<s.top();
    cout<<s.empty();

return 0;
}