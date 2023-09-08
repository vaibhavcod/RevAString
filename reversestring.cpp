#include<iostream>
using namespace std;
void reverse (char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getLength(char name[]){
    int count= 0;
    for(int i = 0; name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter Your Name "<<endl;
    cin>> name;

    cout<<"Your name is ";
    cout<<name<<endl;
    int len = getLength(name);
    reverse(name,len);
    cout<<"Your name in reverse  ";
    cout<<name<<endl;
   return 0;
}