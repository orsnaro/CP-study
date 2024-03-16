//https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=false


#include<bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
private: // it's by default but let's be verbose
	int l,b,h;

public:
	Box() {
		l = b = h = 0;
	}
	Box(int L, int B, int  H): l(L), b(B), h(H) {}
	Box (const Box& bx){
		l = bx.l;
		h = bx.h;
		b = bx.b;
	}

	int getLength(){
		return l;
	}
	int getHeight(){
		return h;
	}
	int getBreadth(){
		return b;
	}
	long long CalculateVolume(){
		return 1ll * l * h * b;
	}

	friend bool operator < (const Box& me, const Box& other);
	friend ostream& operator << ( ostream& os, const Box& box);
};

bool operator < (const Box& me, const Box& other){
	if ( me.l > other.l) return false;
	else if (  me.l < other.l) return true;
	else if ( me.b > other.b) return false;
	else{
		if ( me.b < other.b) return true;
		if( me.h >= other.h) return false; // b must be == other.b
		else return true;
	} // l must == other.l and b <= other.b
}

ostream& operator << ( ostream& os, const Box& box){
	os << box.l<< " " << box.b << " " << box.h;
	return os;
}




void check2() {
	int n;
	cin >> n;
	Box temp;
	for (int i = 0;i < n;i++) {
		int type;
		cin >> type;
		if (type == 1) {
			cout << temp << endl;
		}
		if (type == 2) {
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3) {
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox < temp) {
				cout << "Lesser\n";
			}
			else {
				cout << "Greater\n";
			}
		}
		if (type == 4) {
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5) {
			Box NewBox(temp);
			cout << NewBox << endl;
		}

	}
}

int main() {
	// fastio;
	check2();
}