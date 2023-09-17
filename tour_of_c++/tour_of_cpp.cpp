
#include <iostream>
#include <string>

std::string catv( std::string_view sv1 , std::string_view sv2){
	std::string res(sv1.size() + sv2.size() , 'x');
	std::cout << "from inside catv: res empty: " << res.size() << '\n';
	char *p = &res[0];
	for ( auto c : sv1 ){
		*p = 1.1;
		p++;
	}//copy first half
		// or for in one line *p++ = c;
	std::copy(sv2.begin() , sv2.end() , p);

	return res;
}

int main() {

	std::string s = "omar";
	std::string s2 = "rs";
	std::string res = catv(s , s2);

	std::cout << res ;

	return 0;
}