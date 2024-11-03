#include <iostream>
using namespace std;
// ####___1____####
// struct Human {
//     const char *humanFname;
//     const char *humanLname;
//     int humanAge;
//     float humanWeight;
//     float humanHeight;

//     void IMT() {
//         float a = 2.205;
//         float b = 39.37;
//         double weight = humanWeight;
//         double height = humanHeight;
//         double IMT = (weight/a)/((height/b)*(height/b));

//         cout << "IMT = " << IMT << endl;
//         cout << "___________________________________________" << endl;
//     }

//     void Birthday() {
//         int age = humanAge;
//         int year = 2024;
//         int birthday = year - age;

//         cout << "Birthday = " << birthday << endl;
//         cout << "___________________________________________" << endl;
//     }

//     void displayHuman() {
//         cout << "Human first name = " << humanFname << endl;
//         cout << "Human last name = " << humanLname << endl;
//         cout << "Human age = " << humanAge << endl;
//         cout << "Human weight = " << humanWeight << endl;
//         cout << "Human height = " << humanHeight << endl;
//         cout << "___________________________________________" << endl;
//     }
    
// };

 // ####___2____####

// struct Car {
//     const char *carMark;
//     const char *carColor;
//     const char *carBody;
//     float carCapacity;
//     float carMileage;

//     void AFC() {
//         float capacity = carCapacity;
//         float mileage = carMileage;
//         double AFC = capacity / mileage * 100;

//         cout << "Average Fuel Consumption = " << AFC << endl;
//         cout << "___________________________________________" << endl;
//     };

//     void twistMileage(float mileage) {
//         if (mileage > carMileage) {
//             cout << "Lol, here you can only twist the mileage" << endl;
//             cout << "___________________________________________" << endl;
//         }
//         else {
//             carMileage = mileage;
//         }
//     };

//     void displayCar() {
//         cout << "Car Mark = " << carMark << endl;
//         cout << "Car color = " << carColor << endl;
//         cout << "Car body = " << carBody << endl;
//         cout << "Car capacity = " << carCapacity << endl;
//         cout << "Car mileage = " << carMileage << endl;
//         cout << "___________________________________________" << endl;
//     }
    
// };

// ####___3____####

struct Animal {
    const char *animalName;
    const char *animalClass;
    const char *animalColor;
    float animalAge;
    float animalWeight;

    void AddWeight(int days) {
        float weight = animalWeight;
        double AddWeight = weight + (weight * 0.01 * days);
        animalWeight = AddWeight;
    };

    void setName(const char *name) {
        animalName = name;
    };

    void displayAnimal() {
        cout << "Animal name = " << animalName << endl;
        cout << "Animal class = " << animalClass << endl;
        cout << "Animal color = " << animalColor << endl;
        cout << "Animal age = " << animalAge << endl;
        cout << "Animal weight = " << animalWeight << endl;
        cout << "___________________________________________" << endl;
    }
};

int main() {
    // ####___1____####
    // Human first;
    // first.humanFname = "Tony";
    // first.humanLname = "Stark";
    // first.humanAge = 47;
    // first.humanWeight = 70;
    // first.humanHeight = 163;
    // first.displayHuman();
    // first.Birthday();
    // first.IMT();

    // Human second{"Steve", "Richards", 25, 75, 170};
    // second.displayHuman();
    // second.Birthday();
    // second.IMT();

    // Human *third = new Human;
    // third -> humanFname = "Jack";
    // third -> humanLname = "Black";
    // third -> humanAge = 32;
    // third -> humanWeight = 60.5;
    // third -> humanHeight = 180.2;
    // third -> displayHuman();
    // third -> Birthday();
    // third -> IMT();

    // Human *fourth = new Human;
    // (*fourth).humanFname = "Peter";
    // (*fourth).humanLname = "Parker";
    // (*fourth).humanAge = 16;
    // (*fourth).humanWeight = 50;
    // (*fourth).humanHeight = 175;
    // fourth -> displayHuman();
    // fourth -> Birthday();
    // fourth -> IMT();
    

    // delete third;
    // delete fourth;
    // return 0;

    // ####___2____####
    // Car first;
    // first.carMark = "Mersedes-Benz";
    // first.carColor = "Black";
    // first.carBody = "Crossover";
    // first.carCapacity = 325;
    // first.carMileage = 1560;
    // first.twistMileage(600);
    // first.displayCar();
    // first.AFC();

    // Car second{"Audi", "White", "Sedan", 200, 3250};
    // second.twistMileage(500);
    // second.displayCar();
    // second.AFC();

    // Car *third = new Car;
    // third -> carMark = "Toyota";
    // third -> carColor = "Brown";
    // third -> carBody = "Hatchback";
    // third -> carCapacity = 100;
    // third -> carMileage = 2000;
    // third -> twistMileage(1000);
    // third -> displayCar();
    // third -> AFC();

    // Car *fourth = new Car;
    // (*fourth).carMark = "Ferrari";
    // (*fourth).carColor = "Red";
    // (*fourth).carBody = "Sport car";
    // (*fourth).carCapacity = 2500;
    // (*fourth).carMileage = 10;
    // fourth -> twistMileage(5);
    // fourth -> displayCar();
    // fourth -> AFC();
    

    // delete third;
    // delete fourth;
    // return 0;

    // ####___3____####
    Animal first;
    first.animalName = "Rabbit";
    first.animalClass = "Mammals";
    first.animalColor = "Brown";
    first.animalAge = 3;
    first.animalWeight = 5;
    first.setName("Rabbit`s");
    first.AddWeight(6);
    first.displayAnimal();

    Animal second{"Whale", "Mammals", "Blue and white", 30, 2500};
    second.setName("Whale`s");
    second.AddWeight(9);
    second.displayAnimal();

    Animal *third = new Animal;
    third -> animalName = "Dog";
    third -> animalClass = "Mammals";
    third -> animalColor = "Grey";
    third -> animalAge = 9;
    third -> animalWeight = 11;
    third -> setName("Dog`s");
    third -> AddWeight(4);
    third -> displayAnimal();

    Animal *fourth = new Animal;
    (*fourth).animalName = "Cat";
    (*fourth).animalClass = "Mammals";
    (*fourth).animalColor = "Black";
    (*fourth).animalAge = 6;
    (*fourth).animalWeight = 8;
    fourth -> setName("Cat`s");
    fourth -> AddWeight(10);
    fourth -> displayAnimal();
    

    delete third;
    delete fourth;
    return 0;
}