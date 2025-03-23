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
class mainc:public anime{
public:
    string mainn;
    
};
class rightman:public mainc{
public:
     string nameright;
     rightman(string name,int sesone,string mainn,string nameright){
        this->name = name;
        this->sesone = sesone;
        this->mainn = mainn;
        this->nameright = nameright;


     }  
     void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"sesone :"<<sesone<<endl;
        cout<<"mainc :"<<mainn<<endl;
        cout<<"nameright :"<<nameright<<endl;


     }
};
int main(){
    episo e1("dregon ball",2,293);
    e1.getinfo();
    rightman r1("dregon ball",2,"goku","vegita");
    r1.getinfo();


    return 0;
}
