#include <iostream>

double convert_meters_to_feet(double& meters) {
    return meters * 3.26084;
}

int convert_kilograms_to_pounds(int& kilograms) {
    return static_cast<int>(kilograms * 2.20462);
}

std::string determine_jacket_size(double& feet, int& pounds) {
    if (feet > 6.5 || pounds >= 86 && pounds <= 95)
        return "Extra Large 2";
    else if (feet >= 6.3 && feet <= 6.5 || pounds >= 75 && pounds <= 85)
        return "Extra Large";
    else if (feet >= 5.9 && feet <= 6.2 || pounds >= 65 && pounds <= 75)
        return "Large";
    else if (feet >= 5.7 && feet <= 5.8 || pounds >= 56 && pounds <= 65)
        return "Medium";
    else if (feet >= 5.2 && feet <= 5.6 || pounds >= 50 && pounds <= 55)
        return "Small";
    else
        return "Invalid height or weight";
}

int main() {
    double height_meters, height_feet;
    int weight_kilograms, weight_pounds;

    std::cout << "Enter your height in meters:";
    std::cin >> height_meters;
    std::cout << "Enter your weight in kilograms:";
    std::cin >> weight_kilograms;

    height_feet = convert_meters_to_feet(height_meters);
    weight_pounds = convert_kilograms_to_pounds(weight_kilograms);

    std::cout << "\nheight = " << height_meters << "m = " << height_feet << "ft";
    std::cout << "\nweight = " << weight_kilograms << "kg = " << weight_pounds << "lbs\n";

    std::string size = determine_jacket_size(height_feet, weight_pounds);

    std::cout << "\nYour suitable jacket size is: " << size << std::endl;

    return 0;
}