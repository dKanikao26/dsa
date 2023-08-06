/* to implement  2 stack  in one array*/
#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    stack( int size){
        this->size = size;
        arr = new int [size];
        top1 = -1;
        top2 = size;

    }
    void push1( int element){
        if(top2-top1 >1){
            top1++;
            arr[top1] = element;
        }
        else{
            cout<<"stackoverflow"<<endl;
        }
    }
    void push2( int element){
        if(top2-top1 >1){
            top2--;
            arr[top2] = element;
        }
        else{
            cout<<"stackoverflow"<<endl;
        }
    }
    void pop1(){
        if(top1>0){
            int elenemt = arr[top1];
            top1--;

        }
        else{
            cout<<"stack under flow"<<endl;
        }
        

    }
        void pop1(){
        if(top1>0){
            int elenemt = arr[top1];
            top1--;

        }
        else{
            cout<<"stack under flow"<<endl;
        }
        

    }
    void pop2(){
        if(top2<size){
            int elenemt = arr[top2];
            top1++;

        }
        else{
            cout<<"stack under flow"<<endl;
        }
        

    }


};
int main(){

return 0;
}