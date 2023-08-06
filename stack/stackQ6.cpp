/*
infix to postfix  
  here suppose we have (a-b/c)* (a/k-l)
   alge : 
   if operant : 
   push();
    if "("
      push();
      if operator 
       check precedence if curr operator precedance > stack .top()
       push()
       else pop till curr element precedence >s.top
       push operant into stack


if
  */

#include<iostream>
#include<stack>

using namespace std;
string convert( string s1){
    char c;
    string res;
    int ans;
    stack<string> s;
    int prec( char c){
        if ( c== "("){
            return 3;
        }
        if( c== "*" || c == "/"){
            return 2;

        }
        if( c== "+" || c == "-"){
            return 1;

        }
    }
    for(int i =0; i<s1.length() ; s1++){
        if(s1[i]=="a" && s1[i]=="z" || s1[i] == "A" && s1[i] == "Z"){
             res = res+s1[i];      


        }
        else if(s1[i] == "(" ){
            s.push("(");
        }
        else if(s1[i] == ")"){
            while(!s.empty() && s.top () == "("){
              res = res+s1[i];
              s.pop();
            }

        }
       
            while(!s.empty() && prec(s1[i]< s.top())){
                 res = res+s1[i];      

                 s.pop();
            }
            s.push(s1[i]);

            while(!s.empty()){
                res = res+s1[i];
                s.pop();
            }

            return res;
        




    }
    
    
}
int main(){

return 0;
}

/* infix to prefix 

first reverse the sring the "(" bracket become ")" 
covert the string to iots postfix expressiin
 at end reverrse the string*/

 #include<iostream>
 #include<stack>
 #include<algorithm>
 using namespace std;
 string reverse(string s){
    stack<string> s1;
      string rev;
    reverse(s.begin(), s.end());
    int precedence(char c) {
         if ( c== "("){
            return 3;
        }
        if( c== "*" || c == "/"){
            return 2;

        }
        if( c== "+" || c == "-"){
            return 1;

        }
    }
  

    for ( int i = 0; i<s.length();i++){
        if(s[i]>="a"&& s[i] <="z" || s[i]>= "A " && s[i] <= "Z"){
            rev = rev+s[i];

        }
        else if (s[i] == "(")
        {
            /* code */
            s1.push(s[i]);
        }
          if (s[i] == ")")
          {
            while(!s1.empty() && s1.top() == ")"){
                res = res+s1[i];
              s.pop();
            }
            s.pop();

          }

          while(!s1.empty() && precedence(s1.top) >s[i]){
             res = res+s1[i];
             s1.pop();
          };
          s1.push(s[i]);

          while(!s1.empty()){
                res = res+s1[i];
                s1.pop();
          }
          reverse(res.begin() , res.end());


          return res;


          
        
    




 }
 int main(){
 
 return 0;
 }

 /*  prefix to postfix

 algo:
  revers prefix convert it inti infix and infixto postfix
  if operant push onto stack 
  if operator pop first two operator and concat and push resultsnt into stack

 */

#include<iostream>
#include<stack>
using namespace std;
bool isoperator(char c){
    switch(  c){
        case '+';
        case "-" ;
        case '/' ;
        case '*' ;
        return true ;
    }
    return false;
}
string reversepre( string s){
    stack<string>s1;
reverse(s.begin() , s.end());
for(int i =0;i<s.length() , i++){
    if(isoperator(s[i])){
        string c = s1.top();
        s1.pop();
        string c2 = s1.top();
        s1.pop();
        string concat = c+c2+s[i];
        s1.push(concat);


    }
    else{
        s1.push( string( 1,s[i]));
    }
   


}
 string result = s1.top();
 return result;
}
int main(){

return 0;
}

/* postfix to prefix expression 
here it is similar to previous case but only diffrence is thar it is tread from left to right i.e no reverse of string
however in prefix we will first reverse the string 

push if operant and pop first two operant and cocat operator+op1+op2

now wewill will conact lile op1 + operator +op2

*/