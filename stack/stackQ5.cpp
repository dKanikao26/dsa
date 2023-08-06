/* find the next smallest number of each entry in array 
[ 2,1,4,3]
 if we start from 2 and move till 3 and compare it will be a long process so to 
 solve this we use an stack 
 push -1 into stack  start from end
 now compare curr element if top
 if top of satck <curr push element  into stack and smallestr element == stack top
 else curr elemnent > stack so pop fom stack till you finf small top}

 stack : -1 3 4(pop) 3 (pop)
       :-1 1


     3>-1 t 
     4  >3 t 
     1>4 f
     (pop)1>4 f
     1>3 f (pop 3)
     1>-1 t hence smaalest next element for 1 is -1 
     2>-1 t 
*/














#include<stack>
#include<iostream>
using namespace std;

void smalllest( stack<int> s , int arr[4] , int ans[4]){
    int i =4;
     s.push(-1);
    while(i<0){
        if (arr[i]> s.top()){
             ans[i] = s.top() ;
             s.push(arr[i]);
        }
        else
        if( arr[i]< s.top()){
            while (arr[i]< s.top()){
                s.pop();

            }
         ans[i] = s.top();
         s.push(arr[i])   ;

        }

        i++;


    }
   


}
int main(){

return 0;
}

/*
 largest area in histogram
 histogram is a graph that has attached bars we have to findhe max rectangular area 
 now area = length * breath here lenght i s dsame so we can change the breath 

 arr[5] = { 2,1,3,9,2,1} it shows lenngth oh histo gram

 brut force method we traverse till left and rigth untill we find smaller element 

  
  for( int i =0 ; i<n;i++){
    int left =i
  int right =i
  while(a[left]> a[i]){
    left--;

  }
  while(a[right]> a[i]){
    right++;
    
  }
  int area // find area 
    
  }
  'in this the complexity become O(n2)

  so we use stack 
   a[5] = { 2,1,3,9,2,1}
        = { 1,2,3,4,5,6} we mark indexfor each entry and find next and previous index value for each entry in a[i]
        next = nesarest smallest element right to it
        prev = nesarest smallest element left to it\

        width = n-p-1

        area = width * length
*/

#include<iostream>
#include <stack>
using namespace std;
int pr(int *arr[5]){
    int ps [] = new int [arr.length];
    stack<int > s;
    int s_top;
    for( int i = 0;i<5;i++){
         while(!s.empty() || s.top() >arr[i]){
            s.pop();

         }
         s_top = s.top();

}

    }
   
void max(stack<int > s , int arr[5]){


}
int main(){

return 0;
}


