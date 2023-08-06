#include<iostream>

using namespace std;
class stack{
    public:
    int top;
    int size;
    int *arr;
    stack(int size){

        this->size= size;
        arr = new int[size];
        top = -1;
}
void push(int element){
    if(size-top>1){
         top = top+1;
        arr[top] = element;
       

    }
    else{
        cout<<"stack overflow"<<endl;
    }
}
void pop(){
    if(top>=0){
        top= top-1;

    }
    else{
        cout<<"stack underflow"<<endl;
    }
}
int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"stack is empty";
        return -1;
    }
}

};
int main(){
    stack st(4);
    st.push(1);
    st.push(3);
    st.push(5);
     cout<< st.peek();


return 0;
}