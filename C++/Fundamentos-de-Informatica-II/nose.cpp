#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    const string name;
    const int age;
    const string nationality;
    const int overallRating;
    const int dribbling;
    const int shooting;
    const int passing;
    const int defending;
    const int physicality;

public:
    // Constructor with input validation
    Player(const string &name, int age, const string &nationality, int overallRating, int dribbling, int shooting, int passing, int defending, int physicality)
        : name(name), age(age >= 0 ? age : 0), nationality(nationality), overallRating(clampRating(overallRating)), dribbling(clampRating(dribbling)), shooting(clampRating(shooting)), passing(clampRating(passing)), defending(clampRating(defending)), physicality(clampRating(physicality)) {}

    // Getters
    const string &getName() const { return name; }
    int getAge() const { return age; }
    const string &getNationality() const { return nationality; }
    int getOverallRating() const { return overallRating; }
    int getDribbling() const { return dribbling; }
    int getShooting() const { return shooting; }
    int getPassing() const { return passing; }
    int getDefending() const { return defending; }
    int getPhysicality() const { return physicality; }

    // Function to print player information
    void printInfo() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Nationality: " << nationality << endl;
        cout << "Overall Rating: " << overallRating << endl;
        cout << "Dribbling: " << dribbling << endl;
        cout << "Shooting: " << shooting << endl;
        cout << "Passing: " << passing << endl;
        cout << "Defending: " << defending << endl;
        cout << "Physicality: " << physicality << endl;
    }

private:
    // Clamp rating within a reasonable range (0-100)
    static int clampRating(int rating)
    {
        return max(0, min(100, rating));
    }
};

int main()
{
    // Example usage
    Player player1("Lionel Messi", 34, "Argentina", 94, 96, 94, 92, 39, 66);
    player1.printInfo();

    return 0;
}
