#include<iostream>
using namespace std;
class anime{
public:
     string name;
     int ep;
     string mainc;
     anime(string name,int ep,string mainc){
        this->name = name;
        this->ep = ep;
        this->mainc = mainc;
     }   
     void getinfo(){
        cout<<"anime name :"<<name<<endl;
        cout<<"ep :"<<ep<<endl;
        cout<<"mainc :"<<mainc<<endl;
     }
     ~anime(){
      cout<<"MAHAL D TEACH"<<endl;
     }

};
int main(){
    anime a1 ("solo levling",7,"sonjinwoo");
    anime a2(a1); //("one piece",1022,"Monk D luiff");
    a1.getinfo();
    cout<<endl;
    a2.getinfo();



}