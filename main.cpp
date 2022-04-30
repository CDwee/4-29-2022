// Started at 5:02 4-29-2022

#include <iostream>

using namespace std;

int main() {
    
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1{}, num2{};
    
    cout << boolalpha; // will display true/false instead of 1/0 for booleans
    
//    cout << "Enter two integers separated by a space: ";
//    cin >> num1 >> num2;
//    equal_result = (num1 == num2);
//    not_equal_result = (num1 != num2);
//    cout << "Comparision result (equals): " << equal_result << endl;
//    cout << "Comparision result (not equals): " << not_equal_result << endl;
    
    
//    char char1{}, char2{};
//    cout << "Enter two characters separated by a space: ";
//    cin >> char1 >> char2;
//    equal_result = (char1 == char2);
//    not_equal_result = (char1 != char2);
//    cout << "Comparision result (equals): " << equal_result << endl;
//    cout << "Comparision result (not equals): " << not_equal_result << endl;
    
    double double1{}, double2{};
//    cout << "Enter two doubles separated by a space: ";
//    cin >>  double1>> double2;
//    equal_result = (double1 == double2);
//    not_equal_result = (double1 != double2);
//    cout << "Comparision result (equals): " << equal_result << endl;
//    cout << "Comparision result (not equals): " << not_equal_result << endl;

    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> double1;
    equal_result = (num1 == double1);
    not_equal_result = (num1 != double1);
    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;
    
    
    cout << endl;
    return 0;
}

// Section 8
// Relational Operators
#include <iostream>

using namespace std;

int main() {
    int num1{}, num2{};
    
    cout << boolalpha;
//    cout << "Enter 2 integers eparated by a space: ";
//    cin >> num1 >> num2;
    
//    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
//    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
//    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
//    cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;
//    
    const int lower {10};
    const int upper {20};
    
    cout << "\nEnter an integer that is greater than " << lower << ": ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;
    
    cout << "\nEnter an integer that is less than or equal to " << upper << ": ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;
    
    cout << endl;
    return 0;
}

// Section 8
// Logical Operators

#include <iostream>

using namespace std;

int main() {
    int num {};
    const int lower{10};
    const int upper{20};
    
    cout << boolalpha;
    
    // Determine if an entered integer is between two other integers
    // assume lower < upper
//    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
//    cin >> num;
//    
//    bool within_bounds {false};
//    
//    within_bounds = (num > lower && num < upper);
//    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;

    // Determine if an entered integer is outside two other integers
    // assume lower < upper
//    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ": ";
//    cin >> num;
//    
//    bool outside_bounds {false};
//    outside_bounds = (num < lower || num > upper);
//    cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;
    
    // Determine if an entered integer is exactly on the boundary
    // assume lower < upper
//    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ": "; 
//    cin >> num;
//    
//    bool on_bounds {false};
//    on_bounds =  (num == lower || num == upper);
//    cout << num << " is on one of the bounds which are " << lower << " and " << upper << ": " << on_bounds << endl;

    // Determine if you need to wear a coat based on temperature and wind speed
    bool wear_coat {false};
    double temperature {};
    int wind_speed {};
    
    const int wind_speed_for_coat { 25 }; // Wind over this value requires a coat 
    const double temperature_for_coat {45}; // temperature below this requires a caot
    
    // Require a coat if either wind is too high OR temperature is too low
    cout << "\nEnter the current temperature in (F): ";
    cin >> temperature;
    cout << "Enter windspeed in (MPH): ";
    cin >> wind_speed;
    
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;
    
    
    // Require a coat if BOTH the windspeed is too high AND temperature is too low 
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;
    
    
    cout << endl;
    return 0;
}

// Section 8 Challenge
#include <iostream>

using namespace std;

int main() {
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int change_amount {};
    
    cout << "Enter an amount in cents: ";
    cin >> change_amount;
    
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);
    
    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;
    
    dimes = balance / dime_value;
    balance -= dimes * dime_value;
    
    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;
    
    pennies = balance;
    
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    
    cout << endl;
    return 0;
}

// Ended at 9:05 4-29-2022
