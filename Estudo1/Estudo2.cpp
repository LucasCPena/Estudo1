#include <iostream>;
#include <string>;

using namespace std;

struct human {
	human() {
		this->name = "Human";
		this->age = 0;
		this->height = 0.30f;
		this->weight = 0.800f;

	}
	human(string n) {
		this->name = "Human";
		this->age = 0;
		this->height = 0.30f;
		this->weight = 0.800f;

	}

	string name;

	int age;
	float height;
	float weight;
};

int main() {
	human me ("Ghuilherme");

	me.name = "Lucas";
	me.age = 18;
	me.height = 1.81f;
	me.weight = 80.f;

	cout << me.name << "\n";
	cout << me.age << "\n";
	cout << me.height << "\n";
	cout << me.weight << "\n";

	system("pause");


	return 0;
}