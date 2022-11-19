#include<iostream>
using namespace std;
class animal{
	
	public:
		char name[100];
		int age;
		char place[100];
		
		void setvalue(char nick_name[]){
			
			cout<<nick_name<<" Enter Name:-";
			cin>>name;
			
			cout<<nick_name<<" Enter Age:-";
			cin>>age;
			
			cout<<nick_name<<" Enter place:-";
			cin>>place;
		}
	
};

class Zebra : public animal{
	
	public:
		
		void getvalue(){
			
			char nick_name[100] = "Zebra";
			
			cout<<endl<<"<<<<<<<<<Zebra>>>>>>> "<<endl;
			
			setvalue(nick_name);
			
			cout<<endl<<"<<<<<<<<<Zebra>>>>>>> "<<endl;
			
			cout<<nick_name<<" Name:-"<<name<<endl;
			cout<<nick_name<<" Age:-"<<age<<endl;
			cout<<nick_name<<" Place:-"<<place<<endl;

			
		}

};

class Dolphin : public animal{
	
	public:
	
	void getvalue(){
		
			char nick_name[100] = "Dolphin";
			
			cout<<endl<<"<<<<<<<<<Dolphin>>>>>>> "<<endl;
			
			setvalue(nick_name);
			
			cout<<endl<<"<<<<<<<<<Dolphin>>>>>>> "<<endl;
			
			cout<<nick_name<<" Name:-"<<name<<endl;
			cout<<nick_name<<" Age:-"<<age<<endl;
			cout<<nick_name<<" Place:-"<<place<<endl;
			
		}
};

main(){
	
	Zebra obj1;
	Dolphin obj2;
	
	
	obj1.getvalue();
	obj2.getvalue();
	
	
}
