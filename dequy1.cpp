#include<bits/stdc++.h>
using namespace std;
long long F(int n)
{
	if(n<=100)
	return F(F(n+11));
	else if(n>=101)
	return n-10;
}
int main()
{
	int n;
cin >>  n;
cout << F(n); //mota2 ///quq/qu/q/uq/u/qu/quq
}

