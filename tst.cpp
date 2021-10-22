//============================================================================
// Name        : cpp4kids_s7(functions)....
// Author      : Omar.R.S
// Version     :
// Copyright   : Your copyright notice (<3)
// Description : solving cpp4kids H.Ws (functions) C++, Ansi-style
//============================================================================
//INCLUDES


#include <iostream>
using namespace std;

int main(  )
{
int *p ;
int  &s=*p;
int   x=1;


*p=1;
cout<<p<<'\t';
cout<<*p<<'\t';

//p=1;
cout<<p<<'\t';
cout<<*p<<'\t';

*p=x;
cout<<p<<'\t';
cout<<*p<<'\t';

//*p=&x;
cout<<p<<'\t';
cout<<*p<<'\t';
//p=x;
cout<<p<<'\t';
cout<<*p<<'\t';
 p=&x;

    return (0);
}
