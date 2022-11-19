#include<iostream>
using namespace std;
class mother{
	
	public :
		
		int mother_age;
		char mother_name[100];
		char mother_work[100];
		char mother_hebit[100];
		char mother_gola[100];
		int mother_study;
	
	
		
	void display()
	{
		cout<<"Enter mother age:-";
		cin>>mother_age;
		cout<<"Enter mother name:-";
		cin>>mother_name;
		cout<<"Enter mother work:-";
		cin>>mother_work;
		cout<<"Enter mother hebit:-";
		cin>>mother_hebit;
		cout<<"Enter mother gola:-";
		cin>>mother_gola;
		cout<<"Enter mother study:-";
		cin>>mother_study;	
		
		cout<<"mother age:-";
		cout<<mother_age<<endl;
		cout<<"mother name:-";
		cout<<mother_name<<endl;
		cout<<"mother work:-";
		cout<<mother_work<<endl;
		cout<<"mother hebit:-";
		cout<<mother_hebit<<endl;
		cout<<"mother gola:-";
		cout<<mother_gola<<endl;
		cout<<" mother study:-";
		cout<<mother_study<<endl;
	}	
};
class daughter: public mother{

	public :

		int daughter_age;
		char daughter_name[100];
		char daughter_work[100];
		char daughter_hebit[100];
		char daughter_gola[100];
		int daughter_study;
	
	
		
	void display()
	{

		cout<<"Enter daughter name:-";
		cin>>daughter_name;
		cout<<"Enter daughter work:-";
		cin>>daughter_work;
		cout<<"Enter daughter hebit:-";
		cin>>daughter_hebit;
		cout<<"Enter daughter gola:-";
		cin>>daughter_gola;
		cout<<"Enter daughter study:-";
		cin>>daughter_study;	

		daughter_age=mother_age-20;

		
		cout<<"daughter age:-";
		cout<<daughter_age<<endl;
		cout<<"daughter name:-";
		cout<<daughter_name<<endl;
		cout<<"daughter work:-";
		cout<<daughter_work<<endl;
		cout<<"daughter hebit:-";
		cout<<daughter_hebit<<endl;
		cout<<"daughter gola:-";
		cout<<daughter_gola<<endl;
		cout<<"daughter study:-";
		cout<<daughter_study<<endl;	
	}
};

main()
{
	daughter obj;
	obj.mother::display();
	obj.display();
	

}
