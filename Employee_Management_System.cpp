#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    string designation;
    double salary;
};

void addEmployee(vector<Employee> &employees);
void displayHighestSalary(const vector<Employee> &employees);
void findEmployeeById(const vector<Employee> &employees, int idToSearch);

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "Employee Management System" << endl;
        cout << "1. Add an employee" << endl;
        cout << "2. Display the highest salary" << endl;
        cout << "3. Find employee by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee(employees);
                break;
            case 2:
                displayHighestSalary(employees);
                break;
            case 3:
                int idToSearch;
                cout << "Enter the ID to search for: ";
                cin >> idToSearch;
                findEmployeeById(employees, idToSearch);
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break; 
            default:
                cout << "Invalid choice" << endl;
                break;
        }

    } while (choice != 4);
}

void addEmployee(vector<Employee> &employees) {
    Employee employee;
    cout << "\nEnter ID: ";
    cin >> employee.id;

    cout << "Enter name: ";
    cin.ignore(); // Use cin.ignore() to clear the newline character.
    getline(cin, employee.name);

    cout << "Enter designation: ";
    getline(cin, employee.designation);

    cout << "Enter salary: ";
    cin >> employee.salary;

    employees.push_back(employee);

    cout << "Employee was added successfully!" << endl;
}

void displayHighestSalary(const vector<Employee> &employees) {
    if (employees.empty()) {
        cout << "No employees to display." << endl;
        return;
    }

    double highestSalary = employees[0].salary;
    for (const Employee &employee : employees) {
        if (employee.salary > highestSalary) {
            highestSalary = employee.salary;
        }
    }

    cout << "Employees with the highest salary:" << endl;
    for (const Employee &employee : employees) {
        if (employee.salary == highestSalary) {
            cout << "Name: " << employee.name << endl;
            cout << "Salary: " << employee.salary << endl;
        }
    }
}

void findEmployeeById(const vector<Employee> &employees, int idToSearch) {
    bool found = false;

    for (const Employee &employee : employees) {
        if (employee.id == idToSearch) {
            cout << "Name: " << employee.name << endl;
            cout << "ID: " << employee.id << endl;
            cout << "Designation: " << employee.designation << endl;
            cout << "Salary: " << employee.salary << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Employee with ID " << idToSearch << " not found." << endl;
    }
}
