#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

class Player{
    public:
 virtual  string player_name();
 virtual  string selection();
};

class Computer_Player{
    virtual string computer_selection();
};

class HumanPlayer:public Player{
 public :
  string player_name() override
  {
      string name;
      cout<<"please enter your name"<<endl;
      getline(cin,name);
      return name;
  }
   string selection() override{
     cout<<"please select stone,paper or scissors"<<endl;
     string select;
     getline(cin,select);
     return select;
   }
   HumanPlayer(){

   }
};

class RandomComputerPlayer : public Computer_Player{
    public:
     string computer_selection() override {
       return "the computer has been selected";}
     RandomComputerPlayer(){
          
     }
};






int main(){
  HumanPlayer player1=HumanPlayer();
  string name= player1.player_name();
  cout<<name<<endl;
  string select=player1.selection();
  cout<<select<<endl;
  RandomComputerPlayer computer=RandomComputerPlayer();
  string status=computer.computer_selection();
  cout<<status<<endl;
}