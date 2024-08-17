#include <iostream>
#include <vector>
using  namespace std;

int main(){

       vector <int> v {7,9,4,3,5,6,5,3};

       vector <int> v1 ;

        int flag;
        for(int i : v){
            flag=0;
            for(int j : v1){
                if(i==j){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                v1.push_back(i);
            }
        }


       for(int i: v){
        cout<<i<<" ";
       }
       cout<<endl;

       for(int i: v1){
        cout<<i<<" ";
       }
       cout<<endl;




}
