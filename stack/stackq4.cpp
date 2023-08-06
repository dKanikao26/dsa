#include<iostream>
#include<stack>
using namespace std;
stack <int> stacksort( stack <int> &input){
    stack<int> temp;
    while(!input.empty()){
        if(temp.top() >  input.top()){
            int k = input.top();
            input.pop();


            while((!temp.empty() &&temp.top()<input.top())){
                input.push(temp.top());
                temp.pop();
            }
            temp.push(k);

        }
    }
    return temp;
}

int main(){


return 0;
}