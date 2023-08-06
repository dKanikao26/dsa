#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int , 4> a ={1,2,3,3};
    cout<<a.at(2)<<endl;/* get ith element*/
    int j = a.size();
    for (int i = 0; i < j; i++)
    {
        /* code */
        cout<<a[i]<<endl;
    }
    cout<<a.front()<<endl;/* get first element*/
     cout<<a.back()<<endl;/* get last element*/
     cout<<a.empty()<<endl;/* check weather empty or not*/

    

return 0;
}