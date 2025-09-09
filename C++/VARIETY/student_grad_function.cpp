#include <iostream>
using namespace std;

char getGrade(int marks){
    // if(marks>=90)
    // return 'A';
    // else if(marks>=80)
    // return 'B';
    // else if(marks>=70)
    // return 'C';
    // else if(marks>=60)
    // return 'D';
    // else
    //     return 'E';

    switch(marks){
        case 90 : return 'A';break;
        case 80 : return 'B';break;
        case 70 : return 'C';break;
        case 60 : return 'D';break;
        default: return 'E';
    }

}
int main(){
    int marks;
    cout<<"enter the marks"<<endl;
    cin>>marks;

    char finalGrade = getGrade(marks);
    cout<<finalGrade<<endl;
}