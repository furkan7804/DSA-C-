#include<iostream>
using namespace std;
class anime{
public:
    string name;
    int sesone;
};
class episo{
public:
    int episode;

    //  episo(string name,int sesone,int episode){
    //     this->name = name;
    //     this->sesone = sesone;
    //     this->episode = episode;

    //  }  
    //  void getinfo(){
    //     cout<<"name :"<<name<<endl;
    //     cout<<"sesone :"<<sesone<<endl;
    //     cout<<"episode :"<<episode<<endl;
    //  }
};
class mainc:public episo,public anime{
public:
    string mainn;

    mainc(string name,int sesone,int episode,string mainn){
        this->name = name;
        this->sesone = sesone;
        this->episode = episode;
        this->mainn = mainn;


     }  
     void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"sesone :"<<sesone<<endl;
        cout<<"episode :"<<episode<<endl;
        cout<<"mainc :"<<mainn<<endl;


     }
    
};
int main(){
    mainc m1("dregon ball",2,293,"goku");
    m1.getinfo();


    return 0;
}
