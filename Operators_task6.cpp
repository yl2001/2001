#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	int b;
	
	cout << "А сейчас будем выбирать праздники!" << endl;
	cout << "У нас есть Новый год, 23 февраля и 8 Марта." << endl;
	cout << "Введите 1, 2 или 3 соответственно, чтобы выбрать праздник" << endl;
	cin >> a;

	switch (a) {
		case 1: {
			cout << "Счастья, успехов, побед в Новом году!" << endl;
			break;
		}
		case 2: {
			cout << "С праздником, мужчина!" << endl;
			break;
		}
		case 3: {
			cout << "Самые тёплые слова самым лучшим девушкам!" << endl;
			break;
		}
		default: {
			cout << "В эти дни мы не празднуем!" << endl;
			break;
		}
	}

	system("pause"); 
    return 0;
}