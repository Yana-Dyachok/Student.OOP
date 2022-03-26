/*Реалізуйте клас «Студент». Необхідно зберігати в змінних-членах класу: ПІБ, дату народження, контактний телефон, місто, країну,назву навчального закладу, місто та
країну (де знаходиться навчальний заклад), номер групи. Реалізуйте функції-члени класу для введення даних, виведення даних.*/
#include <iostream>
#include <string>
using namespace std;
class Student {// створюємо клас Student
public:// створюємо поля класу
    string name;// ім'я
    string surname;//прізвище
    string patronymic;//по-батькові
    int numbOfBirthday = 0;//день народження
    string monthOfBirthday;//місяць народження
    int yearOfBirthday = 0;//рік народження
    long long int phone_number = 0;//контактний телефон
    string yourCity;// місто студента
    string yourCountry;//країна студента
    string university;//назва навчального закладу
    string cityOfUniversity;//місто (де знаходиться навчальний заклад)
    string countryOfUniversity;//країна (де знаходиться навчальний заклад)
    int group_number = 0;// номер групи
    void Input() {//метод класу  для вводу даних 
        cout << "Student's name- "; getline(cin, name);
        cout << "Student's surname- "; getline(cin, surname);
        cout << "Student's patronymic- "; getline(cin, patronymic);
        cout << "The number of student's birthday- "; cin >> numbOfBirthday; cin.ignore(32767, '\n');//використовуємо cin.ignore для видалення пробілу з пам'яті
        cout << "The month of student's birthday- "; getline(cin, monthOfBirthday);
        cout << "The year of student's birthday- "; cin >> yearOfBirthday;
        cout << "Student's phone number- "; cin >> phone_number; cin.ignore(32767, '\n');//використовуємо cin.ignore для видалення пробілу з пам'яті
        cout << "Student's city- "; getline(cin, yourCity);
        cout << "Student's country- "; getline(cin, yourCountry);
        cout << "Student's university- "; getline(cin, university);
        cout << "The city of student's university- "; getline(cin, cityOfUniversity);
        cout << "The country of student's university- "; getline(cin, countryOfUniversity);
        cout << "The number of student's group- "; cin >> group_number; cin.ignore(32767, '\n');//використовуємо cin.ignore для видалення пробілу з пам'яті
    }
    void Output() {//метод класу  для виводу даних 
        cout << "Student's name- " << name << endl;
        cout << "Student's surname- " << surname << endl;
        cout << "Student's patronymic- " << patronymic << endl;
        cout << "The number of student's birthday- " << numbOfBirthday << endl;
        cout << "The month of student's birthday- " << monthOfBirthday << endl;
        cout << "The year of student's birthday- " << yearOfBirthday << endl;
        cout << "Student's phone number- " << phone_number << endl;
        cout << "Student's city- " << yourCity << endl;
        cout << "Student's country- " << yourCountry << endl;
        cout << "Student's university- " << university << endl;
        cout << "The city of student's university- " << cityOfUniversity << endl;
        cout << "The country of student's university- " << countryOfUniversity << endl;
        cout << "The number of student's group- " << group_number << endl;
    }
};
int main()
{
    Student firstSt;//створюємо об'єкт класу- дані першого студента
    Student secondtSt;//створюємо об'єкт класу- дані другого студента
    Student thirdSt;//створюємо об'єкт класу- дані третього студента
    cout << "Put some information about the first student" << endl;
    firstSt.Input();////вводимо дані  першого студента
    cout << "Put some information about the second student" << endl;
    secondtSt.Input();//вводимо дані другого студента
    cout << "Put some information about the third student" << endl;
    thirdSt.Input();//вводимо дані  третього студента
    cout << "\t The first student has data:" << endl;
    firstSt.Output();//виводимо дані  першого студента
    cout << "\t The second student has data:" << endl;
    secondtSt.Output();//виводимо дані  другого студента
    cout << "\t The third student has data:" << endl;
    thirdSt.Output();//виводимо дані  третього студента
}
