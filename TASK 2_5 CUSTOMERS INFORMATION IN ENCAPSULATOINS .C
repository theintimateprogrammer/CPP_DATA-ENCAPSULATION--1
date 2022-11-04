#include<iostream>
using namespace std;

class customers {
     	private:
		int cust_id;
		char cust_name[10];
		int cust_age;
		char cust_telecome_brand_name[19];
		int cust_mobilenumber;
		char cust_city[5];
		int cust_simcard_validity;
		
			
		public:
		void setter (){
		cout<<"enter the cust_id:";
		cin>>cust_id;
	    cout<<"enter the cust_name :";
		cin>>cust_name;	
		cout<<"enter the cust_age :";
		cin>>cust_age;		
		cout<<"enter the cust_telecome_brand_name  :";
		cin>>cust_telecome_brand_name;
		cout<<"enter the cust_mobilenumber :";
		cin>>cust_mobilenumber;
		cout<<"enter the cust_city :";
		cin>>cust_city;
		cout<<"enter the cust_simcard_validity :";
		cin>>cust_simcard_validity;
	}
	    void getter(){
	        cout<<"\nyour value are hear ::";
	    	cout<<"\n cust_id :"<<cust_id;
	    	cout<<"\n cust_name :"<<cust_name;
	    	cout<<"\n cust_age :"<<cust_age;
	    	cout<<"\n cust_telecome_brand_name :"<<cust_telecome_brand_name;
	    	cout<<"\n cust_mobilenumber :"<<cust_mobilenumber;
	    	cout<<"\n cust_city :"<<cust_city;
	    	cout<<"\n cust_simcard_validity:"<<cust_simcard_validity<<endl;
	    	
	    	
	    	}
};
 main(){
			customers obj1,obj2,obj3,obj4,obj5;
			obj1.setter();
			obj1.getter();
			obj2.setter();
			obj2.getter();
			obj3.setter();
			obj3.getter();
			obj4.setter();
			obj4.getter();
			obj5.setter();
			obj5.getter();
		}	
		
		
