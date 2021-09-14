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
		this->name = n;
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
	human me("Lucas");

	 cout << "name: " << me.name << "\n";
	 cout << "Age: " << me.age << "\n";
	 cout << "height: " << me.height << "\n";
	 cout << "weight: " << me.weight << "\n";

	
	system("pause");


	return 0;
}
