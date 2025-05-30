#include <stdio.h>
#include<iostream>
#include<list>
using namespace std;

int main() {
	list<const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	printf("1970\n");
	list<const char*>::iterator i;
	for (i = eki_list.begin(); i != eki_list.end(); ++i) {
		std::cout << *i << endl;
	}

	printf("2019\n");
	list<const char*>::iterator j;
	for (j = eki_list.begin(); j != eki_list.end(); ++j) {
		if (*j == "Tabata") {
			j = eki_list.insert(j, "Nishi-Nippori"); 
			std::cout << *j << endl; 
			++j; 
		}
		std::cout << *j << endl; 
	}

	printf("2020\n");
	list<const char*>::iterator k;
	for (k = eki_list.begin(); k != eki_list.end(); ++k) {
		if (*k == "Tamachi") {
			k = eki_list.insert(k, "Takanawa Gateway");
			std::cout << *k << endl;
			++k;
		}
		std::cout << *k << endl;
	}
	return 0;
}