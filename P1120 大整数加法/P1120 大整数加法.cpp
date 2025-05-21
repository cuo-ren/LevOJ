#include <iostream>
#include <string>
using namespace std;

string Addition(string a, string b) {
  reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string c = "";
	int temp = 0, i = 0;
	for (; i < (a.length()>b.length() ? b.length() : a.length()); i++) {
		c += (a[i] - '0' + b[i] - '0' + temp) % 10 + '0';
		temp = (a[i] - '0' + b[i] - '0' + temp) / 10;
	}
	for (; i < (a.length() < b.length() ? b.length() : a.length()); i++) {
		c += ((a.length() < b.length() ? b[i] : a[i]) - '0' + temp) % 10 + '0';
		temp = ((a.length() < b.length() ? b[i] : a[i]) - '0' + temp) / 10;
	}
	if (temp) {
		c += temp + '0';
	}
	reverse(c.begin(), c.end());
	return c;
}

int main(){
  string a,b;
  cin>>a>>b;
  cout<<Addition(a,b);
}
