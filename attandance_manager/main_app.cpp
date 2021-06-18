
#include <iostream>
#include <string>
#include <time.h>
#include <fstream>
#include <cstring>

using namespace std;

/*
    @author ThakurAman
    
    This program is to manage Attandance of a class
    according to days status of student i.e. present / absent
*/

int globalIndex = 0;
int studentLogin();
int adminLogin();
int checkCredentials(string username, string password);
string markMyAttendance(string username);
void viewMyAttendance(string username);
void adminView();
int registerStudent();
int deleteAllStudents();
void deleteStudentbyID();
void checkListOfStudentsRegistered();
void checkPresenseCount();
string currentDateTime();

void deleteStudentbyID()
{
    string username, password;
    string line;

    cout << "\nEnter Username of student you want to Delete:";
    cin >> username;
    getchar();

    cout << "\nEnter password of student you want to Delete:";
    cin >> password;
    getchar();

    ifstream out;
    out.open("db.txt", ios::app);

    ofstream temp;
    temp.open("temp.txt");

    while (getline(out, line))
    {
        line.replace(line.find(username + ' ' + password), (username + ' ' + password).length(), "");
        temp << line << endl;
    }

    out.close();
    temp.close();
    remove("db.txt");
    rename("temp.txt", "db.txt");
}

void checkListOfStudentsRegistered()
{
    ifstream read;
    read.open("db.txt");
    cout << "Here is the list of student usernames and passwords" << endl;
    string line;
    int index = 0;
    while (getline(read, line))
    {
        index++;
        cout << index << ". " << line << endl;
    }
}
void checkPresenseCount()
{
    string line;
    ifstream read("attendance.txt");
    while (getline(read, line))
    {
        cout << line << endl;
    }
    cout << "------------------------------------------\n";
}

int registerStudent()
{
    cout << "\n ----- Form to Register Student ---- \n";
    getchar();
    string name, username, password, rollno, address, father, mother;

    cout << "\n Enter Name : ";
    getline(cin, name);
    // getchar();
    // getchar();
    cout << "\n Enter Username : ";
    cin >> username;

    cout << "\n Enter password : ";
    cin >> password;
    cout << "\n Enter rollno : ";
    cin >> rollno;
    getchar();

    char add[100];
    cout << "\n Enter address : ";
    cin.getline(add, 100);
    cout << "\n Enter father : ";
    cin >> father;
    cout << "\n Enter mother : ";
    cin >> mother;

    //check if record already exist..
    ifstream read;
    read.open("db.txt");

    if (read)
    {
        int recordFound = 0;
        string line;
        while (getline(read, line, ' '))
        {
            if (line == username)
            {
                recordFound = 1;
                break;
            }
        }
        if (recordFound == 1)
        {
            cout << "\n Username already Register. Please choose another username ";
            getchar();
            getchar();
            read.close();
            return 0;
        }
    }
    read.close();

    ofstream out;
    out.open("db.txt", ios::app);
    out << username + ' ' + password << "\n";
    out.close();

    ofstream out1;
    string temp = username + ".txt";
    out1.open(temp.c_str());
    out1 << name << "\n";
    out1 << username << "\n";
    out1 << password << "\n";
    out1 << rollno << "\n";
    out1 << add << "\n";
    out1 << father << "\n";
    out1 << mother << "\n";
    out1.close();

    cout << "\n Student Registered Successfully !!";

    cout << "\n Please any key to continue..";
    getchar();
    getchar();
    return 0;
}

int deleteAllStudents()
{
    cout << "\nDelete all students !!";
    cout << "\nPlease any key to continue..";
    getchar();
    getchar();
    ofstream out;
    out.open("db.txt");
    out.close();

    return 0;
}

void adminView()
{
    int goBack = 0;
    while (1)
    {

        cout << "\n 1 Register a Student";
        cout << "\n 2 Delete All students name registered";
        cout << "\n 3 Delete student by userID";
        cout << "\n 4 Check List of Student registered by userame";
        cout << "\n 5 Check presense count of students";
        cout << "\n 0. Go Back <- \n";
        int choice;

        cout << "\n Enter you choice: ";
        cin >> choice;
        system("clear");
        switch (choice)
        {
        case 1:
            registerStudent();
            break;
        case 2:
            deleteAllStudents();
            break;
        case 3:
            deleteStudentbyID();
            break;
        case 4:
            checkListOfStudentsRegistered();
            break;
        case 5:
            checkPresenseCount();
            break;

        case 0:
            goBack = 1;
            break;
        default:
            cout << "\n Invalid choice. Enter again ";
            getchar();
        }

        if (goBack == 1)
        {
            break; //break the loop
        }
    }
}
string markMyAttendance(string username)
{
    string line, word;
    int index = 1;
    ofstream attend("attendance.txt", ios::app);
    ifstream stud;
    string filename = username + ".txt";
    stud.open(filename.c_str());
    string name;
    getline(stud, word);
    // cout<<word<<endl;

    string rollnum;
    while (getline(stud, line))
    {
        // cout<<"this is while loop"<<endl;
        if (index == 1)
        {
            name = line;
            // cout<<name<<endl;
        }

        if (index == 4)
        {
            rollnum = line;
            // cout<<rollnum<<endl;
            break;
        }
        if (globalIndex == 0)
        {
            attend << "SR.   Name   Date" << endl;
            globalIndex++;
        }
        index++;
    }
    word = (to_string(globalIndex) + "   " + name + "   " + currentDateTime() + "\n");
    attend << word;
    stud.close();
    attend.close();
    return "Attendanec Marked successfully...\n";
}

string currentDateTime()
{
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

int adminLogin()
{
    system("clear");
    cout << "\n --------- Admin Login --------";

    string username;
    string password;

    cout << "\n Enter username : ";
    cin >> username;
    cout << "\n Enter password : ";
    cin >> password;
    getchar();
    // getchar();

    if (username == "admin" && password == "admin")
    {
        adminView();
        getchar();
    }
    else
    {
        cout << "\n Error ! Invalid Credintials..";
        cout << "\n Press any key for main menu ";
        getchar();
    }

    return 0;
}

int checkCredentials(string username, string password)
{
    // read file line by line & check if username-password.dat exist?
    // if it exsist return 1 else 0

    ifstream read;
    read.open("db.txt");

    if (read)
    {
        // The file exists, and is open for input
        int recordFound = 0;
        string line;
        string temp = username + ' ' + password;
        cout << "\n file name is : " << temp;
        while (getline(read, line))
        {
            if (line == temp)
            {
                recordFound = 1;
                break;
            }
        }

        if (recordFound == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

int studentLogin()
{
    system("clear");
    cout << "\n ------- Student Login-------- \n";

    string username, password;

    cout << "\n Enter username : ";
    cin >> username;

    cout << "\n Enter password : ";
    cin >> password;

    int res = checkCredentials(username, password);

    if (res == 0)
    {
        cout << "\n Invalid Credentials !!";
        cout << "\n Press any key for Main Menu..";
        getchar();
        return 0;
    }

    int goBack = 0;
    system("clear");
    while (1)
    {
        cout << "\n 1 Mark Attendance of Today ";
        cout << "\n 0. Go Back <- \n";
        int choice;

        cout << "\n Enter you choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << markMyAttendance(username) << endl;
            break;

        case 0:
            goBack = 1;
            break;
        default:
            cout << "\n Invalid choice. Enter again ";
            getchar();
        }

        if (goBack == 1)
        {
            break; //break the loop
        }
    }
    return 0;
}

int main(int argc, char **argv)
{
    while (1)
    {
        // system("clear");
        // cout << "Press Key to countinue..." << endl;
        // getchar();
        // getchar();
        // getchar();
        // getchar();
        // getchar();
        // getchar();
        cout << "\n Attendance Management System \n";
        cout << "-------------------------------------\n\n";

        cout << "1. Student Login\n";
        cout << "2. Admin Login\n";

        cout << "0. Exit\n";
        int choice;
        cout << "\n Enter you choice: ";
        cin >> choice;
        system("clear");
        getchar();
        // getchar();

        switch (choice)
        {
        case 1:
            studentLogin();
            break;
        case 2:
            adminLogin();
            break;
        case 0:
            while (1)
            {
                cout << "\n Are you sure, you want to exit? y | n \n";
                getchar();
                char ex;
                cin >> ex;
                getchar();
                if (ex == 'y' || ex == 'Y')
                {
                    return 0;
                    exit(0);
                }
                else if (ex == 'n' || ex == 'N')
                {
                    break;
                }
                else
                {
                    cout << "\n Invalid choice !!!";
                    getchar();
                }
            }

        default:
            cout << "\n Invalid choice. Enter again ";
            getchar();
        }
    }
    return 0;
}
