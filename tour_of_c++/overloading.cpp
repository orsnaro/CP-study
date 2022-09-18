#include <bits/stdc++.h>
using namespace std;

class co_rdinates {
    pair<int, int> location;
  public :
  //CONSTRUCTORS
    //bad way which add overhead to compilation a constructor
        // co_rdinates(int x , int y){
        //   location.first = x;
        //   location.second = y;
        // }

    //better way 
    co_rdinates(int x , int y ) : location(x,y) {}
    //its called Member Initializer List (a bookmark have more data)

    co_rdinates(){ // same with this u can use Member Initializer List 
          location= {0,0};
    }
    //OPERATOR OVERLOADING
    co_rdinates operator+(co_rdinates right_hand_new_cord) {
      co_rdinates final_cord;
      final_cord.location.first = location.first + right_hand_new_cord.location.first;
      final_cord.location.second = location.second + right_hand_new_cord.location.second;
      return final_cord;
    }

    void operator&=(co_rdinates right_hand_overwrite) {
      location.first = right_hand_overwrite.location.first;
      location.second =  right_hand_overwrite.location.second;
    }

    friend ostream &operator << (ostream &output, co_rdinates &instance);
    //there is reason why it must be friend function  defined out side. not a  member function!
};
  
ostream &operator << (ostream &output, co_rdinates &instance){
  output << '(' <<instance.location.first << ',' << instance.location.second << ')';
  return output;
}


int main() {
  //EX0 constructor to assign pair member auto

  co_rdinates loc1,loc2(10,7);
  co_rdinates fnl_loc;
  // fnl_loc.location.first = 10;// wont work if location is private
  // fnl_loc.location.second = 9;

  // FIRST example overload '+': //

  // loc2.location = {10, 0};
  // fnl_loc = loc1 + loc2;
  // cout << fnl_loc.location.first <<" "<< fnl_loc.location.second;

  // // SECOND example overload '&=' : //

  //  loc1 &= fnl_loc;
  //  cout << loc1.location.first <<' '<< loc1.location.second;

  //  3RD example == overload //


  //4TH example << to output first , second pair member in class auto;
  cout << loc2;

  


  return 0;
}