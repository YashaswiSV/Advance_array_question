#include <iostream>
#include <vector>
using  namespace std;

int main(){

       vector <int> v {7,9,4,3,5,6,5,3};

       vector <int> vE ;
       vector <int> vO;

        int flag;
        for(int i : v){



                 if(i%2==0){
                    vE.push_back(i);

                }
                 else{
                    vO.push_back(i);
                 }


        }
         for(int i: v){
        cout<<i<<" ";
       }
       cout<<endl;

       for(int i: vE){
        cout<<i<<" ";
       }
       cout<<endl;

       for(int i: vO){
        cout<<i<<" ";
       }
       cout<<endl;




}
