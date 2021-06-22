#include <iostream> //This is used
using namespace std;

string functionTest(string passValue, string returnValue);
int sum(int a, int b);
float sum(float a, float b);
void increment(int& a);

template<typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

class exClass {
public:
    int a = 1;
private:
    int b = 2;
};

class exClassConstructor {
public:
    int a = 0;

    exClassConstructor(int A) {
        a = A;
    }
};

class exClassInherit : public exClassConstructor {
public:
    exClassInherit(int a):exClassConstructor(a) {}
};

void print(void* var, char varType) {
    switch (varType) {
    case 's':
        cout << *((string*)var) << endl;
        break;
    case 'i':
        cout << *((int*)var) << endl;
        break;
    }
}

int main()
{
    string command;
    cout << "Please Input A Command" << endl;
    cin >> command;

    if (command == "cin/cout") {
        cout << "capturing variable from cin(console input) and" << endl;
        cout << "displaying variables from cout(console output)" << endl;
        cout << "Please Input A Float." << endl;
        float floatTest;
        cin >> floatTest;
        cout << "The Float You Entered Was " << floatTest << endl;
        cout << "The Float You Entered *10 Was " << floatTest * 10 << endl;
    }

    if (command == "variable_overflow") {
        cout << "This is the maximum Int Value " << INT_MAX << endl;
        cout << "This is the maximum Int Value +1 " << INT_MAX + 1 << endl;
        cout << "This is the maximum Int Value +2 " << INT_MAX + 2 << endl;

        cout << "This is the minimum Int Value " << INT_MIN << endl;
        cout << "This is the minimum Int Value -1 " << INT_MIN - 1 << endl;
        cout << "This is the minimum Int Value -2 " << INT_MIN - 2 << endl;
    }

    if (command == "ascii_basics") {
        char c = 'c';
        int num = 99;
        cout << "The numeric value of " << c << " is " << int(c) << endl;
        cout << "The character value of " << num << " is " << char(num) << endl;

        char c1, c2, c3, c4, c5;
        cout << "Please Input 5 Chars." << endl;
        cin >> c1 >> c2 >> c3 >> c4 >> c5;
        cout << "c1= " << c1 << " c2= " << c2 << " c3= " << c3 << " c4= " << c4 << " c5= " << c5 << endl;
        cout << "ASCII_c1= " << int(c1) << " ASCII_c2= " << int(c2) << " ASCII_c3= " << int(c3) << " ASCII_c4= " << int(c4) << " ASCII_c5= " << int(c5) << endl;
    }

    if (command == "ints_and_floats") {
        int a = 5;
        int b = 2;
        cout << "These are two ints being divided, the result must be a Whole Number:" << endl;
        cout << a << " / " << b << " = " << a / b << endl;

        cout << "These are two floats being divided" << endl;
        cout << "5.0 / 2.0 = " << 5.0 / 2.0 << endl;

    }

    if (command == "switch") {
        int x;
        int exVar = 3;
        cout << "Enter an Int 1-7" << endl;
        cin >> x;

        switch (x) {
            case 1:
                cout << "Sunday" << endl;
                break;
            case 2:
                cout << "Monday" << endl;
                break;
            case 3:
                cout << "Tuesday" << endl;
                break;
            case 4:
                cout << "Wednesday" << endl;
                break;
            case 5:
                cout << "Thursday" << endl;
                break;
            case 6:
                cout << "Friday" << endl;
                break;
            case 7:
                cout << "Saturday" << endl;
                break;
        }
    
    }

    if (command == "do_while") {
        cout << "Iteration Number: " << endl;
        int i;
        cin >> i;

        do { i -= 1; cout << i << endl; } while (i != 0);
    
    }

    if (command == "function") { cout << functionTest("Value Passed To Function", "Value Returned From Function") << endl; }

    if (command == "function_overloading") {
        cout << "With Function Overloading We Can Name 2 Functions The Same Thing" << endl;
        cout << "And Make A Call To Them, However Only The Function That Recieved" << endl;
        cout << "Proper Parameters Will Be Called, This Is Useful For Return Values" << endl;
        cout << "Such As Int and Float, Or Char And String, Review The Example Below" << endl;
        int b;
        float d;
        int a = b = 5;
        float c = d = 1.5;
        cout << "Using Two Functions Named Sum, One With Float Parameters And One With Int Params and return" << endl;
        cout << "Passing Int Params To Sum Function:  sum(" << a << "," << b << ")= " << sum(a, b) << endl;
        cout << "Passing Float Params To Sum Function:  sum(" << c << "," << d << ")= " << sum(c, d) << endl;
    }

    if (command == "function_manipulate_passed_vars") {
        cout << "By Using The & Operator Directly After The Value Type In Our Function Parameters" << endl;
        cout << "We Can Directly Manipulate The Variable That Was Passed, Review The Example Below" << endl;
        int x = 0;
        cout << "x = 0 to start with, but after we call this function" << endl;
        cout << "---void increment(int& a) { a++; }---" << endl;
        increment(x);
        cout << "x = " << x << endl;
    }

    if (command == "template") {
        cout << "Templates Can Be Used With Functions When We Do Not Know The Variable Types We Are Passing" << endl;
        cout << "Take A Look At This Function:" << endl;
        cout << " " << endl;
        cout << "template<typename T>" << endl;
        cout << "void Swap(T& a, T& b) {" << endl;
        cout << "    T temp = a;" << endl;
        cout << "    a = b;" << endl;
        cout << "    b = temp;" << endl;
        cout << "}" << endl;
        cout << " " << endl;
        cout << "Using This Function We Can Swap 2 Of Any Same Variable Type" << endl;
        cout << " " << endl;

        int a, b;
        cout << "Input int a" << endl;
        cin >> a;
        cout << "Input Different int b" << endl;
        cin >> b;
        Swap(a, b);
        cout << "After Swapping Ints They Now Equal: " << endl;
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;


        string c, d;
        cout << "Input String" << endl;
        cin >> c;
        cout << "Input Different String" << endl;
        cin >> d;
        Swap(c, d);
        cout << "After Swapping Strings They Now Equal: " << endl;
        cout << "a= " << c << endl;
        cout << "b= " << d << endl;
    }

    if (command == "class") {
        cout << "Class Allows For The Declaration Of Global Variables In A File" << endl;
        cout << "Classes Must Be Made Outside Other Functions Or Classes" << endl;
        cout << "Take A Look At This Code: " << endl;
        cout << "class exClass{" << endl;
        cout << "public:" << endl;
        cout << "    int a = 1;" << endl;
        cout << "private:" << endl;
        cout << "    int b = 2;" << endl;
        cout << "};" << endl;
        cout << " " << endl;
        cout << "While The Public Variables Are Accessible Throughout The File" << endl;
        cout << "The Private Variables Are Only Accessible Through The Class Itself" << endl;
        cout << " " << endl;
        cout << "To Access The Classes Public Variables We Use The Code Below:" << endl;
        cout << "exClass refClass;" << endl;
        exClass refClass;
        cout << "refClass.a = " << refClass.a << endl;
    }

    if (command == "class_constructor") {
        cout << "Class Constructors Allow Us To Set Variables In Classes More Easily" << endl;
        cout << "Take A Look At This Code: " << endl;
        cout << "class exClassConstructor {" << endl;
        cout << "public:" << endl;
        cout << "    int a = 0;" << endl;
        cout << " " << endl;
        cout << "    exClassConstructor(int A) {" << endl;
        cout << "        a = A;" << endl;
        cout << "    }" << endl;
        cout << "};" << endl;
        cout << " " << endl;
        cout << "Now To Manipulate The A Value Outside The Class We Can Use" << endl;
        cout << "exClassConstructor refConstructor(5);" << endl;
        exClassConstructor refConstructor(5);
        cout << "refConstructor.a= " << refConstructor.a << endl;
    }

    if (command == "class_inherit") {
        cout << "Class Inheritance Allows Us To Re-Use Classes public/protected vars/methods Within Other Classes" << endl;
        cout << "Take A Look At The Code Below: " << endl;
        cout << "class exClassConstructor {" << endl;
        cout << "public:" << endl;
        cout << "    int a = 0;" << endl;
        cout << " " << endl;
        cout << "    exClassConstructor(int A) {" << endl;
        cout << "        a = A;" << endl;
        cout << "    }" << endl;
        cout << "};" << endl;
        cout << "" << endl;
        cout << "class exClassInherit : public exClassConstructor {" << endl;
        cout << "public:" << endl;
        cout << "    exClassInherit(int a):exClassConstructor(a) {}" << endl;
        cout << "};" << endl;
        cout << " " << endl;
        cout << "Now In Order To Access The Variables Within The exClassInherit Outside Of The Class: " << endl;
        cout << "exClassInherit inherit(5);" << endl;
        exClassInherit inherit(5);
        cout << "inherit.a= " << inherit.a << endl;
    }

    if (command == "pointer") {
    //varType* varName = &anotherVarName;
        cout << "Pointers Allow Us To Manipulate Variables Outside Of There Normal Scope Using Address References" << endl;
        cout << "Take A Look At The Code Below: " << endl;
        int num = 0;
        int* numRef = &num;
        cout << "int num = 0;" << endl;
        cout << "int* numRef = &num;" << endl;
        cout << "numRef Is Now Assigned num Address Which Is: " << numRef << endl;
        cout << "" << endl;
        cout << "Now We Can Change num Value Using numRef Using The Following: " << endl;
        cout << "*numRef = 10;" << endl;
        *numRef = 10;
        cout << "" << endl;
        cout << "Now num= " << num << endl;
    }

    if (command == "pointer_void") {
        cout << "Void Pointers Allow Us To Call Functions With Any Type Of Variable" << endl;
        cout << "However In Order To Access And Change The Vars Value We Must DeReference" << endl;
        cout << "Take A Look At The Code Below: " << endl;
        cout << "" << endl;
        cout << "int num = 5;" << endl;
        cout << "string str = 'String';" << endl;
        cout << "print(&num, 'i');" << endl;
        cout << "print(&str, 's');" << endl;
        cout << "" << endl;
        cout << "void print(void* var, char varType) {" << endl;
        cout << "    switch (varType) {" << endl;
        cout << "    case 's':" << endl;
        cout << "        cout << *((string*)var) << endl;" << endl;
        cout << "        break;" << endl;
        cout << "    case 'i':" << endl;
        cout << "        cout << *((int*)var) << endl;" << endl;
        cout << "        break;" << endl;
        cout << "    }" << endl;
        cout << "}" << endl;
        cout << "" << endl;
        cout << "This Code Will Then Print Out The Following: " << endl;
        int num = 5;
        string str = "String";
        print(&num, 'i');
        print(&str, 's');
    }

    if (command == "array") {
        cout << "Arrays In C++ Are A Bit Different Take A Look At The Code Below" << endl;
        cout << "" << endl;
        cout << "int arr[5] = {1, 3, 5, 7, 9};" << endl;
        cout << "cout << arr[0] << endl;" << endl;
        cout << "" << endl;
        cout << "Here We Have Initialized The Var arr And Are cout Its First Value: " << endl;
        int arr[5] = { 1, 3, 5, 7, 9 };
        cout << arr[0] << endl;
        cout << " " << endl;
        cout << "Another Way We Can Access arr Values Is With Pointers (use command pointer for more info)" << endl;
        cout << "arr by itself is the address of arr[0], Thus If We DeReference Like So: " << endl;
        cout << "cout << *arr << endl;" << endl;
        cout << " " << endl;
        cout << "We Get This Output: " << endl;
        cout << *arr << endl;
        cout << " " << endl;
        cout << "And If We Do Something Like This: " << endl;
        cout << "cout << *(arr + 1) << endl;" << endl;
        cout << " " << endl;
        cout << "We Get The arr Second Value Which Is: " << endl;
        cout << *(arr + 1) << endl;
    }
    system("pause > 0");
}

string functionTest(string passValue, string returnValue) { cout << passValue << endl; return returnValue; };

int sum(int a, int b) { return a + b; }
float sum(float a, float b) { return a + b; }

void increment(int& a) { a++; }