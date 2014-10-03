// length kitna word tak constant rehta hai
// C implementation --------------
// define a array to store the string
// find the place of spaces in the array
// subract to find the length of each word
// store length of each word in another array
// find the maximum consecutive length from here using a loop

#include<iostream>
#include<stdio.h>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int N;
    string str,word;
    cin>>N;
    getline(cin,str);
    for(int i=0;i<N;i++){
        int sz=0,cnt=0,maxcnt=0;
        getline(cin,str);
        istringstream iss(str, istringstream::in);
        while(iss>>word){
            if(word.length()==sz) cnt++;
            else{
                sz=word.length();
                cnt=1;
            }
            if(cnt>maxcnt) maxcnt=cnt;
        }
        cout<<maxcnt<<endl;
    }
    return 0;
}
