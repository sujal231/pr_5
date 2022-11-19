#include<iostream>
using namespace std;

class batting{
	
	
	public :

	
		char bat_name[100];
		int bat_match;
		double bat_run;
		double bat_ball;
		double bat_not_out;
		double  bat_strike_rate;
		double bat_average;
		int bat_hundreds;
		int bat_fifties;
		int bat_sixes;
		int bat_highest_scores;
	
	
	
		void setbatting()
		{
		
		
			
			cout<<endl<<"_____BATTING ENTER INFORMATIN _____"<<endl;
			cout<<"Enter better Name:-";
			cin>>bat_name;
			cout<<"Enter better matches:-";
			cin>>bat_match;
			cout<<"Enter better run:-";
			cin>>bat_run;
			cout<<"Enter better ball:-";
			cin>>bat_ball;
			cout<<"Enter better not_out:-";
			cin>>bat_not_out;
			cout<<"Enter better hundreds:-";
			cin>>bat_hundreds;
			cout<<"Enter better fifties:-";
			cin>>bat_fifties;
			cout<<"Enter better sixes:-";
			cin>>bat_sixes;
			cout<<"Enter better highest_scores:-";
			cin>>bat_highest_scores;

			bat_strike_rate=(bat_run/bat_ball)*100;
			bat_average=bat_run/(bat_match-bat_not_out);
			
			
			cout<<endl<<"_____BATTING INFORMATIN _____"<<endl;
			cout<<"better name="<<bat_name<<endl;
			cout<<"better matches="<<bat_match<<endl;
			cout<<"better run="<<bat_run<<endl;
			cout<<"better ball="<<bat_ball<<endl;
			cout<<"better not_out="<<bat_not_out<<endl;
			cout<<"better hundreds="<<bat_hundreds<<endl;
			cout<<"better fifties="<<bat_fifties<<endl;
			cout<<"better sixes="<<bat_sixes<<endl;
			cout<<"better highest_scores="<<bat_highest_scores<<endl;
			cout<<"better strike rate="<<bat_strike_rate<<endl;
			cout<<"better average="<<bat_average<<endl;

		}
};

class bowling{
	
	public :
		
		char bowl_name[100];
		int bowl_match;
		double bowl_run;
		double bowl_ball;
		double bowl_over;		
		double bowl_strike_rate;		
		double bowl_wickets;		
		double bowl_economy;		
		double bowl_average;	
		int bowl_maidens;
	
	

				
		void setbowling()
		{

			cout<<endl<<"_____BOWLING ENTER INFORMATIN _____"<<endl;
			cout<<"Enter bowler Name:-";
			cin>>bowl_name;
			cout<<"Enter bowler match:-";
			cin>>bowl_match;
			cout<<"Enter bowler run:-";
			cin>>bowl_run;
			cout<<"Enter bowler ball:-";
			cin>>bowl_ball;
			cout<<"Enter bowler wickets:-";
			cin>>bowl_wickets;
			cout<<"Enter bowler maidens:-";
			cin>>bowl_maidens;
			
			bowl_strike_rate=bowl_ball/bowl_wickets;
			bowl_over=bowl_ball/6;
			bowl_economy=bowl_run/bowl_over;
			bowl_average=bowl_run/bowl_wickets;
	
		cout<<endl<<"_____BOWLING  INFORMATIN _____"<<endl;
		cout<<"bowler name="<<bowl_name<<endl;
		cout<<"bowler match="<<bowl_match<<endl;
		cout<<"bowler run="<<bowl_run<<endl;
		cout<<"bowler ball="<<bowl_ball<<endl;
		cout<<"bowler over="<<bowl_over<<endl;
		cout<<"bowler wickets="<<bowl_wickets<<endl;
		cout<<"bowler maidens="<<bowl_maidens<<endl;
		cout<<"bowler strike_rate="<<bowl_strike_rate<<endl;
		cout<<"bowler economy="<<bowl_economy<<endl;
		cout<<"bowler average="<<bowl_average<<endl;
		}
};

class all_round : public batting, public bowling{
	

		
		
	public :
	
	void setall(){
	
	
			cout<<endl<<"_____ALL ROUND ENTER INFORMATIN _____"<<endl;
			cout<<"Enter all round's Name:-";
			cin>>bat_name;
			cout<<"Enter all round's matches:-";
			cin>>bat_match;
			cout<<"Enter all round's battng run:-";
			cin>>bat_run;
			cout<<"Enter all round's battng ball:-";
			cin>>bat_ball;
			cout<<"Enter all round's battng not_out:-";
			cin>>bat_not_out;
			cout<<"Enter all round's battng hundreds:-";
			cin>>bat_hundreds;
			cout<<"Enter all round's battng fifties:-";
			cin>>bat_fifties;
			cout<<"Enter all round's battng sixes:-";
			cin>>bat_sixes;
			cout<<"Enter all round's battng highest_scores:-";
			cin>>bat_highest_scores;
			cout<<"Enter all round's bowling run:-";
			cin>>bowl_run;
			cout<<"Enter all round's bowling ball:-";
			cin>>bowl_ball;
			cout<<"Enter all round's bowling wickets:-";
			cin>>bowl_wickets;
			cout<<"Enter all round's bowling maidens:-";
			cin>>bowl_maidens;
			
			
			
			
			bat_strike_rate=(bat_run/bat_ball)*100;
			bat_average=bat_run/(bat_match-bat_not_out);
			bowl_strike_rate=bowl_ball/bowl_wickets;
			bowl_over=bowl_ball/6;
			bowl_economy=bowl_run/bowl_over;
			bowl_average=bowl_run/bowl_wickets;
			
			cout<<endl<<"_____ALL ROUND  INFORMATIN _____"<<endl;
			cout<<" all round's  name="<<bat_name<<endl;
			cout<<" all round's  matches="<<bat_match<<endl;
			cout<<" all round's batting run="<<bat_run<<endl;
			cout<<"all round's batting ball="<<bat_ball<<endl;
			cout<<"all round's batting not_out="<<bat_not_out<<endl;
			cout<<"all round's batting hundreds="<<bat_hundreds<<endl;
			cout<<"all round's batting fifties="<<bat_fifties<<endl;
			cout<<"all round's batting sixes="<<bat_sixes<<endl;
			cout<<"all round's batting highest_scores="<<bat_highest_scores<<endl;
			cout<<"all round's batting strike rate="<<bat_strike_rate<<endl;
			cout<<"all round's batting average="<<bat_average<<endl;

			cout<<"all round's bowling run="<<bowl_run<<endl;
			cout<<"all round's bowling ball="<<bowl_ball<<endl;
			cout<<"all round's bowling over="<<bowl_over<<endl;
			cout<<"all round's bowling wickets="<<bowl_wickets<<endl;
			cout<<"all round's bowling maidens="<<bowl_maidens<<endl;
			cout<<"all round's bowling strike_rate="<<bowl_strike_rate<<endl;
			cout<<"all round's bowling economy="<<bowl_economy<<endl;
			cout<<"all round's bowling average="<<bowl_average<<endl;
	
	
	}	
		
	
};



main()
{
	all_round obj;
	obj.setbatting();
	obj.setbowling();
	obj.setall();
}





