#include<iostream>
using namespace std;


int main(){
	int N,i=1,j,num=1;
    cin>>N;
    if(0<=N<=50){
        while(i<=N){
            j=1;
			while(j<=N-i){
                cout<<" ";
    			j++;
            }
            j=1;
            while(j<=num){
                cout<<"*";
                j++;
            }
            num+=2;
            cout<<endl;
            i++;
        }
    }
}
