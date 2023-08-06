/* find mid and remove*/;
#include <bits/stdc++.h> 
void deleteMiddle(stack<int>&inputStack, int N){
  stack<int>temp;
  int count = 0;
  if(n%2==0){
     count = n/2;
  }
  else{
     count = (n/2)+1;
  }
  int i=0;
  while(i!= count){
     int c = inputStack.top();
     inputStack.pop();
     temp.push(c);
  }
  while(!temp.empty()){
     st.push(temp.top());
     temp.pop  ();
	
   // Write your code here
   
}

/*
using recursion */
void middstack( stack<int>&input ,int count, int size ){
    if(count == size/2){
        input.pop(count);
        return;
    }
    int num = input.top();
    input.pop();
    middstack(input,count++,size);
    input.push(num);
}


/* valid parenthesis
the expreesion [({})] is valid 

however [{(})] is invalid
*/



bool matches(char s1, char s2){
    if( s1 = "("  && s2 = ")"){
        return true;
    }
    /* write similar for other brackerts as well*/
}


bool isValidParenthesis(string s)
{
    stack<string> sh;
    for(int i = 0; i<s.length;i++){
        char ch = s[i];
        if(ch =="{"|| ch =="(" || ch == "["){
            s.push(ch);

        }
        else{
            if( !sh.empty()){
             char top = sh.top();
            
              if(matches(top,ch)){
                  sh.pop();

              }
               else{
                   return false;

               }


        }
        else{
            return false;
        }



        }
         

    }
    if(!s.empty()){
        return true;
    }
    else{
        return false;
    }
    // Write your code here.

}
/* add element at end of stack*/
void add(stack <int> &input , int count ,int size ,int num){
    if(count == size){
        input.push(num);
        return;
    }
    int n =input.top();
    input.pop();
     add(input,count++,size,num);
     input.push(n);
}