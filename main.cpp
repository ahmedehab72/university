#include <iostream>

using namespace std;

class student  {

private:
    int level;
    double gpa;

public:
    // default constructor
    student() {
      //  cout<< "default constructor in class student " ;
      //level = 0;
       // gpa = 0;
    }

    // parametarize constructor
    student( int id,string name,int age,char gender,int lev , double gp) : person(int id, string name, int age, char gender){
    level = lev ;
    gpa = gp ;
    }


     void set_level(int lev ){
    level = lev ;

    }

    int get_level(){
    return level;
    }


     void set_gpa(double gp ){
    gpa = gp ;

    }
     int get_gpa(){
    return gpa;
    }


};
int main()
{


   student st ;
   student st1(2 , 3.1)

   st.set_level(3) ;
   st.set_gpa(2.5);

   cout<< st.get_level() <<endl  ;
   cout<< st.get_gpa  () <<endl ;
   cout<< st1.level << st1.gpa <<endl ;


    return 0;
}
