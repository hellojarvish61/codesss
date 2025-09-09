#include<iostream>
#include<string.h>
using namespace std;

void replaceSpace(char sentence[]){
    int i = 0;
    int n = strlen(sentence);
    for(int i = 0;i<=n;i++){
        if(sentence[i]==' '){
            sentence[i] = '@';
        }
    }
}
int main(){
    char sentence[100];
    cin.genline(sentence,100);

    replaceSpace(sentence);
    cout<<"printing sentence "<<endl<<sentence<<endl;
}