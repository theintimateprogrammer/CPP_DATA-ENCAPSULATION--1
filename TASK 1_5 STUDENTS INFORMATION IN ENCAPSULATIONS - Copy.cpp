#include<iostream>
using namespace std;

class students{
     	private:
		int stu_id;
		char stu_name[10];
		int stu_age;
		char stu_course[10];
		char stu_email[15];
		char stu_city[20];
		char stu_collage[30];
		
			
		public:
		void setter (){
		cout<<"enter the stu_id :";
		cin>>stu_id;
	    cout<<"enter the stu_name :";
		cin>>stu_name;	
		cout<<"enter the stu_age :";
		cin>>stu_age;		
		cout<<"enter the stu_course :";
		cin>>stu_course;
		cout<<"enter the stu_email :";
		cin>>stu_email;
		cout<<"enter the stu_city :";
		cin>>stu_city;
		cout<<"enter the stu_collage:";
		cin>>stu_collage;
	}
	    void getter(){
	        cout<<"\nyour value are hear ::";
	    	cout<<"\n stu_id:"<<stu_id;
	    	cout<<"\n stu_name:"<<stu_name;
	    	cout<<"\n stu_age:"<<stu_age;
	    	cout<<"\n stu_course:"<<stu_course;
	    	cout<<"\n stu_email:"<<stu_email;
	    	cout<<"\n stu_city:"<<stu_city;
	    	cout<<"\n stu_collage:"<<stu_collage<<endl;
	    	
	    	
	    	}
};
 int main(){
			students obj1,obj2,obj3,obj4,obj5;
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
		
		


			
	
