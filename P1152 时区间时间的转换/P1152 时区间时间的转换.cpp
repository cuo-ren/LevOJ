#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, int> time;
	time["HST"] = -600;
	time["AKST"] = -540;
	time["AKDT"] = -480;
	time["PST"] = -480;
	time["PDT"] = -420;
	time["MST"] = -420;
	time["CST"] = -360;
	time["MDT"] = -360;
	time["CDT"] = -300;
	time["EST"] = -300;
	time["AST"] = -240;
	time["EDT"] = -240;
	time["NST"] = -210;
	time["ADT"] = -180;
	time["NDT"] = -150;
	time["UTC"] = 0;
	time["GMT"] = 0;
	time["WET"] = 0;
	time["BST"] = 60;
	time["IST"] = 60;
	time["WEST"] = 60;
	time["CET"] = 60;
	time["CEST"] = 120;
	time["EET"] = 120;
	time["EEST"] = 180;
	time["MSK"] = 180;
	time["MSD"] = 240;
	time["AWST"] = 480;
	time["ACST"] = 570;
	time["AEST"] = 600;
	time["ACDT"] = 630;
	time["AEDT"] = 660;

	int t;
	cin >> t;
	int ts;
	while (t--) {
		string temp, origin, target, judge;
		cin >> temp;
		if (temp == "noon" or temp == "midnight") {
			cin >> origin >> target;
			ts = temp == "noon" ? 720 : 0;
		}
		else {
			cin >> judge >> origin >> target;
			ts = 0;
			ts += judge == "p.m." ? 720 : 0;
			ts += stoi(temp.substr(0, temp.find(":")))%12 * 60 + stoi(temp.substr(temp.find(":") + 1, 2));
		}
		ts = (ts + time[target] - time[origin] + 1440) % 1440;

		if (ts == 720) {
			cout << "noon\n";
		}
		else if (ts == 0) {
			cout << "midnight\n";
		}
		else if (ts / 60 == 0) {
			cout << "12:" << ts % 60 << " a.m.\n";
		}
		else if (ts < 720) {
			cout << ts / 60 << ":" << ts % 60 << " a.m.\n";
		}
		else if (ts /60==12) {
			cout << "12:" << ts % 60 << " p.m.\n";
		}
		else {
			cout << ts / 60 - 12 << ":" << ts % 60 << " p.m.\n";
		}
	}
}
