#include <iostream>
using namespace std;

class number{
	
	public:
	
	int n_number;
	int s_square;
	int c_cube;
	
	void num(){
	
	cout<<"Enter Number";
	cin>>n_number;
	
	
	cout<<"Number =";
	cout<<n_number<<endl;
	}
};

class square : public number{
	
	public:
			
	void squ()
	{
		s_square=n_number*n_number;
		
			
		cout<<"Square =";
		cout<<s_square<<endl;
	}
};

class cube : public number{
	
	public:
	
	void cub()
	{
		c_cube=n_number*n_number*n_number;
		
			
		cout<<"Cube =";
		cout<<c_cube<<endl;
	}
};


main ()
{
	square obj1;
	cube obj2;
	
	obj1.num();
	obj1.squ();
	obj2.num();
	obj2.cub();
}
