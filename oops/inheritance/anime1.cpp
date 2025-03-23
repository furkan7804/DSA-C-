#include<iostream>
using namespace std;
class anime{
public:
    string name;
    int sesone;
};
class episo:public anime{
public:
    int episode;

     episo(string name,int sesone,int episode){
        this->name = name;
        this->sesone = sesone;
        this->episode = episode;

     }  
     void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"sesone :"<<sesone<<endl;
        cout<<"episode :"<<episode<<endl;
     }
};
int main(){
    episo e1("dregon ball",2,293);
    e1.getinfo();


    return 0;
}