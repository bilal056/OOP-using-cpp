// Program Name: Zoo Animal Information System
// Description:
/* This program simulates a simple zoo animal information system.
    It defines classes for different types of animals (Mamal, Bird, Reptile) with attributes like name, age, species,
    and specific attributes for each type of animal (fur color for Mamal, feather color for Bird, scale patterns for Reptile).
    It also includes functions to display information about each animal, their food preferences, behaviors, and activities.
    The main function provides a menu for users to interact with the system, allowing them to view and update animal information,
    display behaviors, and perform activities.

Relation between classes and objects:

In this program, there is a hierarchy of classes where each class represents a specific type of animal: Mamal, Bird, and Reptile. These classes are derived from the base class Animal_Type, which contains common attributes and behaviors of all animals.

Each class has its own set of data members (attributes) and member functions (behaviors) specific to that type of animal. For example, the Mamal class has attributes such as fur_color, hunger_level, and grow_level, along with functions to display these attributes and perform activities specific to mammals.

Objects are instances of these classes. For example, the objects cheetah, wolf, eagle, and snake are instances of the Mamal, Bird, and Reptile classes, respectively. These objects hold specific values for their attributes and can perform the behaviors defined in their respective classes.

The relation between classes and objects in this program is called inheritance. Inheritance allows new classes to reuse, extend, and modify the properties and behaviors of existing classes. Here, the derived classes (Mamal, Bird, Reptile) inherit from the base class (Animal_Type), gaining access to its attributes and behaviors while also adding their own specific attributes and behaviors.

*/

#include <iostream>
using namespace std;

class Animal_Type
{
protected:
    string name;
    int age;
    string species;

public:
    // Setters & Getters
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }

    void setage(int age)
    {
        this->age = age;
    }
    int getage()
    {
        return age;
    }

    void setspecies(string species)
    {
        this->species = species;
    }
    string getspecies()
    {
        return species;
    }
};

class Mamal : public Animal_Type
{
private:
    string fur_color;
    string hunger_level;
    string grow_level;

public:
    Mamal(string name, int age, string species, string fur_color)
        : fur_color(fur_color), hunger_level("Very Hungry"), grow_level("Groomed")
    {
        setname(name);
        setage(age);
        setspecies(species);
    }

    // Setters & Getters
    void setsFurcolor(string fur_color)
    {
        this->fur_color = fur_color;
    }
    string getfur_color()
    {
        return fur_color;
    }

    void setshunger_level(string Hunger_level)
    {
        this->hunger_level = Hunger_level;
    }
    string getHunger_level()
    {
        return hunger_level;
    }

    void setsGrow_level(string Grow_level)
    {
        this->grow_level = Grow_level;
    }
    string getGRow_level()
    {
        return grow_level;
    }

    // Functions
    void Display_furcolor()
    {
        cout << "Fur color: " << fur_color << endl;
    }
    void Display_HUngerlevel()
    {
        cout << "Hunger level: " << hunger_level << endl;
    }
    void Display_Growlevel()
    {
        cout << "Grow level: " << grow_level << endl;
    }
    void food_preference()
    {
        cout << "Food Preference: Fruit || Beef" << endl;
    }
    void DisplaySunBathing_duration()
    {
        cout << "Sunbathing Duration: 20 mins" << endl;
    }
    void performActivity()
    {
        cout << "Running and playing for " << getname() << endl;
    }
};

class Bird : public Animal_Type
{
private:
    string feather_color;
    string nest_location;
    string food_Preference;

public:
    Bird(string name, int age, string species, string feather_color)
        : feather_color(feather_color), nest_location("N/A"), food_Preference("N/A")
    {
        setname(name);
        setage(age);
        setspecies(species);
    }

    // Setters & Getters
    void setsfeather_color(string feather_color)
    {
        this->feather_color = feather_color;
    }
    string getfeather_color()
    {
        return feather_color;
    }

    void setsnest_location(string nest_location)
    {
        this->nest_location = nest_location;
    }
    string getnest_location()
    {
        return nest_location;
    }

    void setsfood_preference(string food_Preference)
    {
        this->food_Preference = food_Preference;
    }
    string getfood_pereference()
    {
        return food_Preference;
    }

    // Functions
    void food_preference()
    {
        cout << getname() << " Food Preference: " << getfood_pereference() << endl;
    }
    void nest_location_result()
    {
        cout << "A nest location is " << nest_location << endl;
    }
    void Display_HUngerlevel()
    {
        cout << "Hunger level: Very hungry" << endl;
    }
    void DisplaySunBathing_duration()
    {
        cout << "Sunbathing Duration: 20 mins" << endl;
    }
    void performActivity()
    {
        cout << "Flying high in the sky for " << getname() << endl;
    }
};

class Reptile : public Animal_Type
{
private:
    string scalePatterns;
    int SunBathing_duration;
    string preferred_Habitat_Areawise;

public:
    Reptile(string name, int age, string species, string scalePatterns)
        : scalePatterns(scalePatterns), SunBathing_duration(30), preferred_Habitat_Areawise("")
    {
        setname(name);
        setage(age);
        setspecies(species);
    }

    // Setters & Getters
    void setsscale_patters(string scalePatters)
    {
        this->scalePatterns = scalePatterns;
    }
    string getscale_patters()
    {
        return scalePatterns;
    }

    void setsSunBathing_duration(int SunBathing_duration)
    {
        this->SunBathing_duration = SunBathing_duration;
    }
    int getSunBathing_duration()
    {
        return SunBathing_duration;
    }

    void setspreferred_habitate(string preferred_habitate)
    {
        this->preferred_Habitat_Areawise = preferred_Habitat_Areawise;
    }
    string getpreferred_Habitat()
    {
        return preferred_Habitat_Areawise;
    }

    // Functions
    void DisplayscalePatters()
    {
        cout << "Scale patterns: " << scalePatterns << endl;
    }

    void DisplaySunBathing_duration()
    {
        cout << "Sunbathing Duration: " << SunBathing_duration << " mins" << endl;
    }

    void Display_preferred_habitat_Areawise()
    {
        cout << "Preferred habitat: " << preferred_Habitat_Areawise << endl;
    }
    void Display_HUngerlevel()
    {
        cout << "Hunger level: Very hungry" << endl;
    }
    void food_preference()
    {
        cout << "Food Preference: Insects" << endl;
    }
    void performActivity()
    {
        cout << "Basking in the sun for " << getname() << endl;
    }
};

int main()
{
    Mamal cheetah("Cheetah", 10, "Acinonyx jubatus", "Brown"), wolf("Wolf", 8, "Wild Wolf", "Light Black");
    Bird eagle("Eagle", 5, "Aquila chrysaetos", "Golden");
    Reptile snake("Snake", 8, "King Cobra", "Striped");

    int choose = 0;
    int choice = 0;

    cout << "Welcome to the Zoo Animal Information System!" << endl;
    while (1)
    {
        cout << "Select an option:" << endl;
        cout << "1. Display all animal information" << endl;
        cout << "2. Display food preferences" << endl;
        cout << "3. Display animal behaviors" << endl;
        cout << "4. Display specific animal information" << endl;
        cout << "5. Perform activities for all animals" << endl;
        cout << "0. Exit" << endl;
        cin >> choose;

        if (choose == 1)
        {
            cout << "All Animal Information:" << endl;
            cout << "-----------------------" << endl;
            cout << "Name: " << cheetah.getname() << ", Age: " << cheetah.getage() << ", Species: " << cheetah.getspecies() << endl;
            cout << "Name: " << wolf.getname() << ", Age: " << wolf.getage() << ", Species: " << wolf.getspecies() << endl;
            cout << "Name: " << eagle.getname() << ", Age: " << eagle.getage() << ", Species: " << eagle.getspecies() << endl;
            cout << "Name: " << snake.getname() << ", Age: " << snake.getage() << ", Species: " << snake.getspecies() << endl;
            cout << endl;
        }
        else if (choose == 2)
        {
            cout << "Select an option:" << endl;
            cout << "1. Feed the animals" << endl;
            cout << "2. Check updates of all animals" << endl;
            cin >> choice;
            if (choice == 1)
            {
                cout << "Feeding the animals:" << endl;
                eagle.setsfood_preference("Seeds");
                wolf.setsfood_preference("Meat");
                cheetah.setsfood_preference("Meat");
                snake.setsfood_preference("Insects");
                cout << "Food preferences set." << endl;
            }
            else if (choice == 2)
            {
                cout << "Animal Updates:" << endl;
                cout << "-----------------------" << endl;
                eagle.food_preference();
                wolf.food_preference();
                cheetah.food_preference();
                snake.food_preference();
                cout << endl;
            }
        }
        else if (choose == 3)
        {
            cout << "Animal Behaviors:" << endl;
            cout << "-------------------------";
        }
        else if (choose == 4)
        {
            int choice;
            cout << "Choose an animal:" << endl;
            cout << "1. Cheetah" << endl;
            cout << "2. Wolf" << endl;
            cout << "3. Eagle" << endl;
            cout << "4. Snake" << endl;
            cin >> choice;

            if (choice == 1)
            {
                cout << "Cheetah Information:" << endl;
                cout << "Name: " << cheetah.getname() << ", Age: " << cheetah.getage() << ", Species: " << cheetah.getspecies() << endl;
                cheetah.food_preference();
                cout << endl;
            }
            else if (choice == 2)
            {
                cout << "Wolf Information:" << endl;
                cout << "Name: " << wolf.getname() << ", Age: " << wolf.getage() << ", Species: " << wolf.getspecies() << endl;
                wolf.food_preference();
                cout << endl;
            }
            else if (choice == 3)
            {
                cout << "Eagle Information:" << endl;
                cout << "Name: " << eagle.getname() << ", Age: " << eagle.getage() << ", Species: " << eagle.getspecies() << endl;
                eagle.food_preference();
                cout << endl;
            }
            else if (choice == 4)
            {
                cout << "Snake Information:" << endl;
                cout << "Name: " << snake.getname() << ", Age: " << snake.getage() << ", Species: " << snake.getspecies() << endl;
                snake.food_preference();
                cout << endl;
            }
        }
        else if (choose == 5)
        {
            cout << "Performing activities for all animals:" << endl;
            cout << "----------------------------------------" << endl;
            cheetah.performActivity();
            wolf.performActivity();
            eagle.performActivity();
            snake.performActivity();
            cout << "----------------------------------------" << endl
                 << endl;
        }
        else if (choose == 0)
        {
            cout << "Exiting the program..." << endl;
            break;
        }
    }

    return 0;
}
