#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstring>
using std::strcat;
using std::strncat;

int main() {
	char s1[] = "Happy ";
	char s2[]= "New Year ";
	char s3[40]="";

	cout << "s1 =" << s1 << "\ns2 =" << s2;
	strcat(s1, s2); //concat s2 with s1 size 15

	cout << "\n\nAfter strcat (s1, s2):\ns1 = " << s1 <<"\ns2 = "<<s2;

	strncat(s3, s1, 6); //place \0 after the last character

	cout << "\n\nAfter strcat (s3, s1, 6):\ns1 = " << s1 << "\ns3 = " << s3;

	strcat(s3, s1); //concat s2 with s1 size 15
	cout << "\n\nAfter strcat (s3, s1):\ns1 = " << s1 << "\ns3 = " << s3;

	return 0;
}