#include <iostream>



using namespace std;

char option;
int num1,num2,result;


// The options menu once an operation is completed
int options()
{
    char selectedOption;
    char opt;

    cout << "Would you like to calculate more? (y/n)";
    cin >> opt;
    switch(opt)
    {
    case 'y':
        selectedOption = 'y';
        return selectedOption;
        break;
    case 'n':
        selectedOption == 'n';
        return selectedOption;
        break;
    default:
        cout << "Invalid Option";
        break;
    }
}


// Addition Function
double addition(double x, double y)
{
    float res = x + y;
    return res;
}

// Subtraction Function
double substraction(double x, double y)
{
    double res = x - y;
    return res;
}

// Multiplication Function
double multplication(double x, double y)
{
    double res = x * y;
    return res;
}

// Division Function
double division(double x, double y)
{
    double res = x / y;
    return res;
}

// Modulo Function
double modulo(double x, double y)
{   num1 = (int) x;
    num2 = (int) y;
    int result = num1 % num2;
    return result;
}


// Temperature Conversion
double temperature()
{
    double temp, resTemp;
    char choice;
    cout << "\n\t1. Celsius(C) to Fahrenheit(F)\n\t2. Fahrenheit(F) to Celsius(C)\n";
    cout << "Option: ";
    cin >> choice;

    switch(choice)
    {
        case '1':
            cout << "\n\nEnter Temperature in C: ";
            cin >> temp;
            resTemp = (temp * 1.8) + 32;
            cout << resTemp << "\n\n";
            break;
        case '2':
            cout << "\n\nEnter Fahrenheit in F: ";
            cin >> temp;
            resTemp = (5.0/9.0) * (temp - 32.0);
            cout << result << "\n\n";
            break;
        default:
            cout << "Invalid Choice\n\n";
    }

}

// Basic Math Operations Function
double basicMath()
{
    double num1, num2;
    char basicMathOperation, selection;
    double result;


    cout << "\n\tWelcome to Basic Math Calc\n\n\tUse operators (+(addition),-(subtraction),*(multiplication))"
        << ",/(division),%(remainder of a division)\n\n";

        cout << "\t"; cin >> num1;
        cout << "\t"; cin >> basicMathOperation;
        cout << "\t"; cin >> num2;


    switch(basicMathOperation)
    {
        case '+':
            result = addition(num1, num2);
            break;
        case '-':
            result = substraction(num1, num2);
            break;
        case '*':
            result = multplication(num1, num2);
            break;
        case '/':
            result = division(num1, num2);
            break;
        case '%':
            result = modulo(num1, num2);
            break;
        default:
            cout << "Invalid Operation\n\n";
            options();

    }

    cout << "= " << result << "\n\n\n";



}

// Unit Conversion Functions
double unitConverter()
{
    char cOpt;
    cout << "\n\tWelcome to Unit Converter\n\tBelow are the options available\n\n";
    cout << "\t1. Miles(mi) to Kilometers(km)\n\t2. Inches(in) to Meters(m)\n\t3. Pounds(lbs) to Kilograms(kg)";
    cout << "\n\t4. Kilometers(km) to Miles(mi)\n\t5. Meters(m) to Inches(in)\n\t6. Kilograms(kg) to Pounds(lbs)";
    cout << "\n\nSelect an Option: ";
    cin >> cOpt;
    cout << "\n\n";

    float user_input;
    switch(cOpt)
    {
        case '1':

            cout << "Enter Miles(mi): ";
            cin >> user_input;
            cout << user_input << " Miles = "<< user_input * 1.61 << " Kilometers\n\n";
            break;
        case '2':

            cout << "Enter Inches(in): ";
            cin >> user_input;
            cout << user_input << " Inches = "<< user_input * 0.0254 << " Meters(m)\n\n";
            break;
        case '3':

            cout << "Enter Pounds(lbs): ";
            cin >> user_input;
            cout << user_input << " Pounds = "<< user_input * 0.4536 << " Kilograms(kg)\n\n";
            break;
        case '4':

            cout << "Enter Kilometers: ";
            cin >> user_input;
            cout << user_input << " Kilometers = "<< user_input * 0.6213 << " Miles(mi)\n\n";
            break;
        case '5':

            cout << "Enter Meters: ";
            cin >> user_input;
            cout << user_input << " Meters(m) = "<< user_input * 39.3701 << " Inches(in)\n\n";
            break;
        case '6':

            cout << "Enter Kilograms(kg): ";
            cin >> user_input;
            cout << user_input << " Kilogram(kg) = "<< user_input * 2.2046 << " Pounds(lbs)\n\n";
            break;
        default:
            "Invalid Selection!";
            options(); // This calls the function options in order to not exit from the Calculator App
    }
}


// Welcome Function to have a menu selection
void welcome()
{
    char op;
    cout << "\n\tCalculator 1.o" << "\n\n";
    cout << "Choose the Options Below: \n"
    << "1. Basic Match Operations\n"
    << "2. Unit Conversion\n"
    << "3. Temperature Converter\n\n"
    << "Option: ";
    cin >> op;

    if(op == '1') {
        basicMath();
    } else if(op == '2') {
        unitConverter();
    } else if(op == '3') {
        temperature();
    } else {
        cout << "\nInvalid Option!";
    }



}



// The main function that links all above functions declared
int main()
{
    welcome(); // This calls the welcome function of the Calculator App

   char OPT = options(); // This takes the return of the options() function which is used to determine if the user wants to exit

   if(OPT == 'y'){
    welcome();
   } else {
    cout << "Bye...Bye";
   }
}
