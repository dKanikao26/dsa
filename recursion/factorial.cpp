


/* #include<iostream>
using namespace std;
int factorial(int n){
    if( n ==0){
        return 1;

    }
    /*
    big problem =  n* (n-1)!
    small problem = (n-1)!
    return */
return n*factorial(n-1);
} 

int main(){
    int n;
    cin>>n;
    /* recursion is when we have to solve bigger problem usong smaller one
    4! = 4 * 3!
    3! = 3* 2!
    */



return 0;
}

 */



#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;

    }
    return 2*power(n-1);
}
int main(){

return 0;
}

/* print counting*/
#include<iostream>
using namespace std;
int counting(int n){
    if (n == 1){
        return 1;
    }
    return n;
    return counting(n-1);

}
int main(){

return 0;
}

/* fibonacci series*/

#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==1 ){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int a = fibonacci(n)+fibonacci(n-1);
    return a;

}
int main(){

return 0;
}




