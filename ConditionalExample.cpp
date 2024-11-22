#include <iostream>
using namespace std;

int main() {

	string like;

	cout << "Do you like dogs?(Y/N): ";
	cin >> like;

		if (like == "Y" || like == "y") {

			cout << "Can't relate, because I like cats more, but resepct ^v^" << endl;
		}
		else if (like == "N" || like == "n") {

			cout << "Can't relate, I'm a cat person but I still like dogs...eme" << endl;
		}
		else {
			cout << "\t\nPlease Input Y/y or N/n ONLY PLEASE!" << endl;
		}
	
	return 0;
}