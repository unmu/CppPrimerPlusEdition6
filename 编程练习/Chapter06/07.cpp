#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char ch) {
	ch = tolower(ch);
	return ch == 'a' || ch == 'e' || ch == 'i' | ch == 'o' || ch == 'u';
}

bool isConsonant(char ch) {
	ch = tolower(ch);
	return ch != 'y' && !isVowel(ch) && !isdigit(ch);
}

int main () {
	cout << "Enter words (q to quit):\n";
	char ch;
	string word = "";
	int vowel = 0, consonant = 0, other = 0; 
	while ((ch = cin.get())) {
		if (isalpha(ch) || isdigit(ch)) {
			word += ch;
		} else {
			if (word == "q") {
				break;
			} else if (word != "") {
				if (isVowel(word[0])) {
					vowel++;
				} else if (isConsonant(word[0])) {
					consonant++;
				} else {
					other++;
				}
			}
			word = "";
		}
	}
	cout << vowel << " words beginning with vowels" << endl;
	cout << consonant << " words beginning with consonants" << endl;
	cout << other << " others" << endl;
	return 0;
}

