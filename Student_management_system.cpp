#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
class informatiions
{
private:
    string student_id;
    string student_name;
    string father_name;
    string mother_name;
    string date_of_birth;
    string gender;
    string contact_number;
    string campus;
    string program;
    string admission_semester;
    string student_pass;
    string course_code;
    string semester_name;
    string exam_name;
    string course_name;
    string exam_date;
    string mark;
    string exam_time;
    string mcq1;
    string mcq2;
    string mcq3;
    string mcq4;
    string mcq5;
    string mcq1a;
    string mcq1b;
    string mcq1c;
    string mcq1d;
    string mcq2a;
    string mcq2b;
    string mcq2c;
    string mcq2d;
    string mcq3a;
    string mcq3b;
    string mcq3c;
    string mcq3d;
    string mcq4a;
    string mcq4b;
    string mcq4c;
    string mcq4d;
    string mcq5a;
    string mcq5b;
    string mcq5c;
    string mcq5d;
    string cq1;
    string cq2;
    string cq3;
    string cq4;

public:
    void menu();
    void administrator();
    void admin_login();
    void add_student_informations();
    void search_student();
    void edit_student_informations();
    void delete_student_informations();
    void check_deleted_student_informations();
    void set_upcoming_exam_date();
    void add_teacher_user_id();
    void change_password_for_admin();
    string strongpassword(string &pass);
    void student_login();
    void student();
    void course();
    void add_course();
    void course_drop();
    void course_list();
    void attend_quize();
    void show_informations();
    void profile();
    void show_result();
    void show_upcoming_exam_date();
    void show_study_material();
    void change_password_for_student();
    void teacher_login();
    void teacher();
    void set_exam();
    void mark_answer_papers();
    void search_student_results();
    void add_course_material();
    void add_metarials();
    void clear_and_add();
    void change_password_for_teacher();
};

// this function is for menu.. Its first page....
void informatiions::menu()
{

mark:
    int choice;
    cout << "\t\t\t WELLCOME TO" << endl;
    cout << "\t\tNORTHERN UNIVERSITY, BANGLADESH" << endl;
    cout << "\t-------------------------------------------------" << endl;
    cout << "\t-------------------------------------------------" << endl;
    cout << endl;
    cout << "\t1. Administrator." << endl;
    cout << "\t2. Student. " << endl;
    cout << "\t3. Teacher. " << endl;
    cout << "\t4. Exit." << endl;
    cout << endl;
    cout << "\t================================" << endl;
    cout << "\t================================" << endl;
    cout << endl;
    cout << "\t\tEnter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        admin_login();

        break;
    }
    case 2:
    {
        student_login();
        break;
    }
    case 3:
    {
        teacher_login();
        break;
    }
    case 4:
    {
        exit(0);
    }
    default:
    {
        cout << "==> You entered wrong input.\nt Pleasr try again." << endl;

        goto mark;
    }
    }
}

// this function for admin login - here identify admin information(gmail and password)
void informatiions::admin_login()
{
    system("cls");
    cin.ignore();
    fstream data;
    string gmail, g_mail;
    string password, pass_word;
mark3:

    cout << endl;
    cout << "\t\t\tAdmin Login" << endl;
    cout << "\t-------------------------------------------------" << endl;
    cout << "\t-------------------------------------------------" << endl;
    cout << endl;
    cout << "\t\tEnter your Gmail : ";
    getline(cin,gmail);
    cout << "\t\tEnter your password : ";
    getline(cin,password);  
    data.open("admin.txt", ios::in);
    getline(data, g_mail);
    getline(data, pass_word);
    if (gmail == g_mail && password == pass_word)
    {
        administrator();
    }
    else
    {
        cout << "==> Your Gmail or password is incorrect...\n Please try again... ... ..." << endl;
        goto mark3;
    }
}

// this function for administrator - Here display what the admin can do...
void informatiions::administrator()
{
    system("cls");
mark2:
    int choice;
    cout << endl;
    cout << "\t\t\tAdministrator" << endl;
    cout << "\t-------------------------------------------------" << endl;
    cout << "\t-------------------------------------------------" << endl;
    cout << endl;
    cout << "\t1. Add Student Information." << endl;
    cout << "\t2. Search student." << endl;
    cout << "\t3. Modify student information." << endl;
    cout << "\t4. Delete student." << endl;
    cout << "\t5. Check deleted student informations." << endl;
    cout << "\t6. Set Up Coming exam date. " << endl;
    cout << "\t7. Set Teacher User ID." << endl;
    cout << "\t8. Change your password." << endl;
    cout << "\t9. Go back." << endl;
    cout << endl;
    cout << "\t================================================================" << endl;
    cout << "\t================================================================" << endl;
    cout << "\t\t\tEnter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        add_student_informations();
        break;
    }
    case 2:
    {
        search_student();
        break;
    }
    case 3:
    {
        edit_student_informations();
        break;
    }
    case 4:
    {
        delete_student_informations();
        break;
    }
    case 5:
    {
        check_deleted_student_informations();
        break;
    }
    case 6:
    {
        set_upcoming_exam_date();
        break;
    }
    case 7:
    {
        add_teacher_user_id();
        break;
    }
    case 8:
    {
        change_password_for_admin();
        break;
    }
    case 9:
    {
        menu();
        break;
    }
    default:
    {
        cout << "==> Your input is wrong! \n Pleasetry again..." << endl;
        goto mark2;
    }
    }
}

// This function is add student informaion - Here admin will add students information...
void informatiions::add_student_informations()
{
    system("cls");
    fstream data, data2;

    cin.ignore();
    cout << endl;
    cout << "\t\t\t Add Student Information" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tInput student ID                 : ";
    getline(cin, student_id);
    data.open(student_id + ".txt");
    if (!data)
    {
        cout << "\tInput student full name          : ";
        getline(cin, student_name);
        cout << "\tInput student father's name      : ";
        getline(cin, father_name);
        cout << "\tInput student Mother's name      : ";
        getline(cin, mother_name);
        cout << "\tInput student Date of Birth      : ";
        getline(cin, date_of_birth);
        cout << "\tInput student Gender             : ";
        getline(cin, gender);
        cout << "\tInput student contact Number     : ";
        getline(cin, contact_number);
        cout << "\tInput student Campus             : ";
        getline(cin, campus);
        cout << "\tInput student Program name       : ";
        getline(cin, program);
        cout << "\tInput student admission semester : ";
        getline(cin, admission_semester);
        cout << "\tEnter password for student       : ";
        getline(cin, student_pass);
        data.open(student_id + ".txt", ios::app);
        data << student_id << endl
             << student_name << endl
             << father_name << endl
             << mother_name << endl
             << date_of_birth << endl
             << gender << endl
             << contact_number << endl
             << campus << endl
             << program << endl
             << admission_semester << endl;
        data.close();
        data2.open("secure" + student_id + ".txt", ios::out);
        data2 << student_pass << endl;
        data2.close();
    }
    else
    {
        cout << "==> Already have this student information." << endl;
    }
    cin.ignore();
    cout << "==> Successfully Information Added." << endl;
    cin.ignore();
    administrator();
}

// this function for search student - Here the admin will be able to search a student information...
void informatiions::search_student()
{
    system("cls");
    fstream data;
m:
    string si;
    cin.ignore();
    cout << endl;
    cout << "\t\t\t Search Student" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;

    cout << endl;
    cout << "\tStudent ID : ";
    getline(cin, si);
    data.open(si + ".txt", ios::in);
    if (!data)
    {
        cout << "==> File doesnt exist" << endl;
        string x ="yes";
        string y;
        cout << "\tIf you want to search again please enter'yes' else anything else" << endl;
        getline(cin, y);
        if(x==y)
        {
        goto m;
        }
        else
        {
            administrator();
        }
    }
    else
    {
        // here use 'getline' for get the each variable value in one line from file....
        getline(data, student_id);
        getline(data, student_name);
        getline(data, father_name);
        getline(data, mother_name);
        getline(data, date_of_birth);
        getline(data, gender);
        getline(data, contact_number);
        getline(data, campus);
        getline(data, program);
        getline(data, admission_semester);
        while (!data.eof()) // this loop continues until end of file... ... ...
        {
            data >> student_id >> student_name >> father_name >> mother_name >> date_of_birth >> gender >> contact_number >> campus >> program >> admission_semester;

            if (si == student_id)
            {
                // here print student information
                cout << endl;
                cout << "\t\t\tStudent Information" << endl;
                cout << "\t----------------------------------------------------------------" << endl;
                cout << "\t----------------------------------------------------------------" << endl;
                cout << endl;
                cout << "\tStudent ID         : " << student_id << endl;
                cout << "\tStudent Name       : " << student_name << endl;
                cout << "\tFather Name        : " << father_name << endl;
                cout << "\tMother Name        : " << mother_name << endl;
                cout << "\tDate of Birth      : " << date_of_birth << endl;
                cout << "\tGender             : " << gender << endl;
                cout << "\tContact Number     : " << contact_number << endl;
                cout << "\tCampus             : " << campus << endl;
                cout << "\tProgram            : " << program << endl;
                cout << "\tAdmission semester : " << admission_semester << endl;
                data >> student_id >> student_name >> father_name >> mother_name >> date_of_birth >> gender >> contact_number >> campus >> program >> admission_semester;
            }
        }
        data.close();
    }
    cin.ignore();
    administrator();
}

// this functio for edit student information - Here the admin will be anle to edit a student information...
void informatiions::edit_student_informations()
{
    system("cls");
    cin.ignore();
    fstream data;
    string si;
    string s_id;
    string sn;
    string fn;
    string mn;
    string dob;
    string g;
    string con;
    string c;
    string p;
    string as;
    string yes;
m:
    cout << endl;
    cout << "\t\t\tModify Student Information" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "If you want to change information without chnaging id, then enter \n 'yes' \n either \n'no' ." << endl;
    cout << "\tEnter (yes/no): ";
    getline(cin, yes);
    if (yes == "yes")
    {

        cout << "\tStudent ID : ";
        getline(cin, si);
        data.open(si + ".txt", ios::out);
        if (!data.is_open())
        {
            cout << "==> File doesnt exist ...  ... ... ..." << endl;
            goto m;
        }
        else
        {
            cout << endl;
            cout << "\t\t\tStudent New Data" << endl;
            cout << "\t----------------------------------------------------------------" << endl;
            cout << "\t----------------------------------------------------------------" << endl;
            cout << endl;
            cout << "\tInput student new ID                 : ";
            getline(cin, s_id);
            cout << "\tInput student new full name          : ";
            getline(cin, sn);
            cout << "\tInput student new father's name      : ";
            getline(cin, fn);
            cout << "\tInput student new Mother's name      : ";
            getline(cin, mn);
            cout << "\tInput student new Date of Birth      : ";
            getline(cin, dob);
            cout << "\tInput student new Gender             : ";
            getline(cin, g);
            cout << "\tInput student new contact Number     : ";
            getline(cin, con);
            cout << "\tInput student new Campus             : ";
            getline(cin, c);
            cout << "\tInput student new Program name       : ";
            getline(cin, p);
            cout << "\tInput student new admission semester : ";
            getline(cin, as);
            data << s_id << endl
                 << sn << endl
                 << mn << endl
                 << fn << endl
                 << dob << endl
                 << g << endl
                 << con << endl
                 << c << endl
                 << p << endl
                 << as << endl;
            cout << "==> Data inserted succefully ... ... ... ... " << endl;
            data.close();
        }
    }
    else
    {
        cout << "==> You can't chnage id , for change id you have to delete id ... " << endl;
    }
    cin.ignore();
    administrator();
}

// This function for delete student information - Here the admin will be able to delete the student information...
void informatiions::delete_student_informations()
{
    system("cls");
    cin.ignore();
    cout << endl;
    cout << "\t\t\tDelete Student Information" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    string si;
    cout << "\tEnter Student Id for delete : ";
    getline(cin, si);
    string old = si + ".txt";
    string ne = "d-" + si + ".txt";
    char oldname[100];
    char newname[100];
    strcpy(oldname, old.c_str());
    strcpy(newname, ne.c_str());
    if (rename(oldname, newname) != 0)
    {
        cout << "==> File Doesnt Exist" << endl;
    }
    else
    {
        cout << "==> File deleted succefully... ... ..." << endl;
    }
    cin.ignore();
    administrator();
}

// This function is for check deleted student information - Here the admin will be able to see the inforamtion of the delted students
void informatiions::check_deleted_student_informations()
{
    system("cls");
    fstream data;
    string si;
m:
    cout << endl;
    cout << "\t\t\tCheck Deleted Student Information" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tStudent ID : ";
    getline(cin, si);
    data.open("d-" + si + ".txt", ios::in);
    if (!data)
    {
        cout << "==> File doesnt exist" << endl;
        goto m;
    }
    else
    {
        // here use 'getline' for get the each variable value in one line from file....
        getline(data, student_id);
        getline(data, student_name);
        getline(data, father_name);
        getline(data, mother_name);
        getline(data, date_of_birth);
        getline(data, gender);
        getline(data, contact_number);
        getline(data, campus);
        getline(data, program);
        getline(data, admission_semester);
        while (!data.eof()) // this loop continues until end of file... ... ...
        {
            data >> student_id >> student_name >> father_name >> mother_name >> date_of_birth >> gender >> contact_number >> campus >> program >> admission_semester;

            if (si == student_id)
            {
                // here print student information
                cout << endl;
                cout << "\t\t\tStudent Information" << endl;
                cout << "\t----------------------------------------------------------------" << endl;
                cout << "\t----------------------------------------------------------------" << endl;
                cout << endl;
                cout << "\tStudent ID         : " << student_id << endl;
                cout << "\tStudent Name       : " << student_name << endl;
                ;
                cout << "\tFather Name        : " << father_name << endl;
                cout << "\tMother Name        : " << mother_name << endl;
                ;
                cout << "\tDate of Birth      : " << date_of_birth << endl;
                cout << "\tGender             : " << gender << endl;
                cout << "\tContact Number     : " << contact_number << endl;
                cout << "\tCampus             : " << campus << endl;
                cout << "\tProgram            : " << program << endl;
                cout << "\tAdmission semester : " << admission_semester << endl;
                data >> student_id >> student_name >> father_name >> mother_name >> date_of_birth >> gender >> contact_number >> campus >> program >> admission_semester;
            }
        }
        data.close();
    }
    cin.ignore();
    administrator();
}

// This function is for set upcoming exam date - Here the admin will submit the upcoming exam dates...
void informatiions::set_upcoming_exam_date()
{
    system("cls");
    cin.ignore();
    fstream data;
    string exam_name;
    string start_exam_date;
    string finish_exam_date;
    cout << endl;
    cout << "\t\t\tSet Up Coming Exam Date" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    data.open("examdate.txt", ios::out);
    cout << "\tEnter Exam name : ";
    getline(cin, exam_name);
    cout << "\tEnter Starting date of exam : ";
    getline(cin, start_exam_date);
    cout << "\tEnter finishing date of exam : ";
    getline(cin, finish_exam_date);
    data << exam_name << endl
         << start_exam_date << endl
         << finish_exam_date;
    data.close();
    cin.ignore();
    administrator();
}

void informatiions::add_teacher_user_id()
{
    system("cls");
    cin.ignore();
    string user_name;
    string password;
    fstream data;
    cout << endl;
    cout << "\t\t\tAdd Teacher ID" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter User Id for Teacher : ";
    getline(cin, user_name);
    cout << "\tEnter Password for Teacher : ";
    getline(cin, password);
    data.open(user_name + ".txt", ios::app);
    data << password << endl;
    data.close();
    cin.ignore();
    administrator();
}
void informatiions::change_password_for_admin()
{
    system("cls");
    cin.ignore();
    fstream data, data2;
    string gmail, g_mail;
    string password, pass_word;
    cout << endl;
    cout << "\t\t\tChange Password for Admin" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your Gmail : ";
    getline(cin, gmail);
    cout << "\tEnter your password : ";
    getline(cin, password);
    data.open("admin.txt", ios::in);
    getline(data, g_mail);
    getline(data, pass_word);
    if (gmail == g_mail && password == pass_word)
    {
    a:
    m:
        string n_pass, n_c_pass, c_pass;
        // cout << "Enter your current password : ";
        // getline(cin, c_pass);
        cout << "==> For strong password :(lowercase letters & uppercase letters & digits & simbol & 8 characters) " << endl;
        cout << "\tEnter your new password : ";
        getline(cin, n_pass);
        cout << "\tConfirm your new password : ";
        getline(cin, n_c_pass);
        if (n_pass == n_c_pass)
        {
            string newpass = strongpassword(n_c_pass);
            if (newpass == "strong")
            {
                data2.open("admin.txt", ios::out);
                data2 << g_mail << endl
                      << n_c_pass;
                data2.close();
                cout << "==> Password change succefully... ... ..." << endl;
            }
            else
            {
                cout << "==> Your password is not strong. Please enter strong password again." << endl;
                goto m;
            }
        }
        else
        {
            cout << "==> Your password dont matching... ..." << endl;
            goto a;
        }
    }
    data.close();
    cin.ignore();
    administrator();
}

string informatiions::strongpassword(string &pass)
{
    int elements = pass.length();
    bool lowercase = false;
    bool uppercase = false;
    bool digit = false;
    bool specialchar = false;
    string c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
    for (int i = 0; i < elements; i++)
    {
        if (islower(pass[i]))
        {
            lowercase = true;
        }
        if (isupper(pass[i]))
        {
            uppercase = true;
        }
        if (isdigit(pass[i]))
        {
            digit = true;
        }
        size_t special = pass.find_first_not_of(c);
        if (special != string::npos)
        {
            specialchar = true;
        }
    }

    if (lowercase && uppercase && digit && specialchar && (elements >= 8))
    {
        return "strong";
    }
    else
    {
        return "weak";
    }
}
void informatiions::student_login()
{
    system("cls");
    cin.ignore();
    fstream data;
    string si;
    string pass;
    string password;
m:
    cout << endl;
    cout << "\t\t\tStudent Information" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your student Id : ";
    getline(cin, si);
    cout << "\tEnter your pass : ";
    getline(cin, password);
    data.open("secure" + si + ".txt", ios::in);
    getline(data, pass);
    if (!data)
    {
        cout << " ==> Your Student id is wrong... ... ..." << endl;
         cin.ignore();
            menu();
    }
    else
    {
        if (pass == password)
        {
            student();
        }
        else
        {
            cout << " ==>Your password is wrong... ..." << endl;
            cin.ignore();
            menu();
        }
    }
}
void informatiions::student()
{
    system("cls");
m:
    cout << endl;
    cout << "\t\t\tStudent Properties" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\t1. Course." << endl;
    cout << "\t2. Attend Quize." << endl;
    cout << "\t3. Show All Informations." << endl;
    cout << "\t4. Change Password." << endl;
    cout << "\t5. Go back" << endl;
    int c;
    cout << "\t================================" << endl;
    cout << "\t================================" << endl;
    cout << endl;
    cout << "\tEnter your choice : ";
    cin >> c;
    cin.ignore();
    switch (c)
    {
    case 1:
    {
        course();
        break;
    }
    case 2:
    {
        attend_quize();
        break;
    }
    case 3:
    {
        show_informations();
        break;
    }
    case 4:
    {
        change_password_for_student();
        break;
    }
    case 5:
    {
        menu();
        break;
    }

    default:
    {
        cout << " ==> your input wrong... ... ... ...";
        goto m;
    }
    }
}
void informatiions::course()
{
    system("cls");
    int c;
m:
    cout << endl;
    cout << "\t\t\tCourse Properties" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\t1. Add course." << endl;
    cout << "\t2. Course drop." << endl;
    cout << "\t3. Course List." << endl;
    cout << "\t4. Go back." << endl;
    cout << endl;
    cout << "\tEnter your choice : ";
    cin >> c;
    cin.ignore();
    switch (c)
    {
    case 1:
    {
        add_course();
        break;
    }
    case 2:
    {
        course_drop();
        break;
    }
    case 3:
    {
        course_list();
        break;
    }
    case 4:
    {
        course();
        break;
    }
    default:
    {
        cout << " ==> You input is wrong... ... ...\nPlease try again." << endl;
        goto m;
    }
    }
}
void vec_add(string &a, string &b)
{
    system("cls");
    fstream data;
    vector<string> v1;
    v1.push_back(b);
    data.open("course" + a + ".txt", ios::app);
    for (int i = 0; i < v1.size(); i++)
    {
        data << v1[i] << endl;
        cout << " ==> Course Inserted Successfully." << endl;
    }
    data.close();
}
void informatiions::add_course()
{
    system("cls");
    fstream data;
    string sid, si;
m:
    string course_code;
    cout << endl;
    cout << "\t\t\tCourse Add" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your student Id: ";
    getline(cin, sid);
    cout << "\tEnter course code : ";
    getline(cin, course_code);
    data.open(sid + ".txt", ios::in);
    getline(data, si);
    if (sid == si)
    {
        vec_add(si, course_code);
    }
    else
    {
        cout << "==> You enter wrong id. \nPlease try again... .... ..." << endl;
        goto m;
    }
    cin.ignore();
    student();
}
void vec_drop(string &a, string &b)
{
    system("cls");
    fstream data, data2;
    vector<string> v1, v2;
    string line;
    data.open("course" + a + ".txt", ios::in);
    if (!(data.is_open()))
    {
        cout << "==> Your course lst is empty. " << endl;
        cin.ignore();
    }
    else
    {
        while (getline(data, line))
        {
            v1.push_back(line);
        }
    }
    data.close();
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] != b)
        {
            v2.push_back(v1[i]);
        }
        else
        {
            cout << "==> Successfully course Removed. " << v1[i] << "... " << endl;
        }
    }
    data2.open("course" + a + ".txt", ios::out);
    for (int i = 0; i < v2.size(); i++)
    {
        data2 << v2[i] << endl;
    }
    data2.close();
}
void informatiions::course_drop()
{
    system("cls");
    fstream data;
    string sid, si;
m:
    string course_code;
    cout << endl;
    cout << "\t\t\tCourse Drop" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your student Id : ";
    getline(cin, sid);
    cout << "\tEnter course code  for drop : ";
    getline(cin, course_code);
    data.open(sid + ".txt", ios::in);
    getline(data, si);
    if (sid == si)
    {
        vec_drop(si, course_code);
    }
    else
    {
        cout << "==> You enter wrong id. \nPlease try again... .... ..." << endl;
        goto m;
    }
    student();
}
void informatiions::course_list()
{
    cin.ignore();
    system("cls");
    string line;
    fstream data;
    cout << endl;
    cout << "\t\t\tCourse List" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your student Id : ";
    getline(cin, student_id);
    cout << endl;
    cout << "\t\t\t--------- Courses ---------" << endl;
    cout << endl;
    data.open("course" + student_id + ".txt", ios::in);
    if (data.is_open())
    {
        while (getline(data, line))
        {
            cout << "\t\t\t" << line << endl;
        }
    }
    cin.ignore();
    student();
}
void informatiions::attend_quize()
{
    system("cls");
    fstream data, data2, data3, data4, data5;
    string line, pass, course_codee;
    int n = 0;
a:
b:
c:
    cout << endl;
    cout << "\t\t\tAttend Exam" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your ID: ";
    getline(cin, student_id);
    cout << "\tEnter Your Password: ";
    getline(cin, student_pass);
    cout << "\tEnter your course code: ";
    getline(cin, course_codee);

    data.open(student_id + ".txt", ios::in);
    if (data.is_open())
    {
        data2.open("secure" + student_id + ".txt", ios::in);
        getline(data2, pass);
        if (student_pass == pass)
        {
            data3.open("course" + student_id + ".txt", ios::in);
            while (getline(data3, line))
            {
                if (course_codee == line)
                {
                    n = 1;
                    break;
                }
            }
            data3.close();
            if (n == 1)
            {
                fstream data;
                string varsity;
                data4.open(course_codee + "question.txt", ios::in);
                if (!data)
                {
                    cout << "==> Question not submitted by teacher...\nPlease wait...and try again..." << endl;
                }
                else
                {
                    getline(data4, varsity);
                    getline(data4, semester_name);
                    getline(data4, exam_name);
                    getline(data4, course_code);
                    getline(data4, exam_date);
                    getline(data4, mark);
                    getline(data4, exam_time);
                    getline(data4, mcq1);
                    getline(data4, mcq1a);
                    getline(data4, mcq1b);
                    getline(data4, mcq1c);
                    getline(data4, mcq1d);
                    getline(data4, mcq2);
                    getline(data4, mcq2a);
                    getline(data4, mcq2b);
                    getline(data4, mcq2c);
                    getline(data4, mcq2d);
                    getline(data4, mcq3);
                    getline(data4, mcq3a);
                    getline(data4, mcq3b);
                    getline(data4, mcq3c);
                    getline(data4, mcq3d);
                    getline(data4, mcq4);
                    getline(data4, mcq4a);
                    getline(data4, mcq4b);
                    getline(data4, mcq4c);
                    getline(data4, mcq4d);
                    getline(data4, mcq5);
                    getline(data4, mcq5a);
                    getline(data4, mcq5b);
                    getline(data4, mcq5c);
                    getline(data4, mcq5d);
                    getline(data4, cq1);
                    getline(data4, cq2);
                    getline(data4, cq3);
                    getline(data4, cq4);

                    cout << endl;
                    cout << endl;
                    cout << endl;

                    cout << "\t               " << varsity << "               " << endl;
                    cout << "\t                         " << semester_name << endl;
                    cout << "\t                         " << exam_name << endl;
                    cout << "\t                         " << course_code << endl;
                    cout << "\t                         " << exam_date << endl;
                    cout << "\tMark : " << mark << "                                   " << exam_time << endl;
                    cout << "\t                            MCQ" << endl;
                    cout << "\tQ1. " << mcq1 << endl;
                    cout << "\ta. " << mcq1a << endl;
                    cout << "\tb. " << mcq1b << endl;
                    cout << "\tc. " << mcq1c << endl;
                    cout << "\td. " << mcq1d << endl;
                    cout << "\tQ2. " << mcq2 << endl;
                    cout << "\ta. " << mcq2a << endl;
                    cout << "\tb. " << mcq2b << endl;
                    cout << "\tc. " << mcq2c << endl;
                    cout << "\td. " << mcq2d << endl;
                    cout << "\tQ3. " << mcq3 << endl;
                    cout << "\ta. " << mcq3a << endl;
                    cout << "\tb. " << mcq3b << endl;
                    cout << "\tc. " << mcq3c << endl;
                    cout << "\td. " << mcq3d << endl;
                    cout << "\tQ4. " << mcq4 << endl;
                    cout << "\ta. " << mcq4a << endl;
                    cout << "\tb. " << mcq4b << endl;
                    cout << "\tc. " << mcq4c << endl;
                    cout << "\td. " << mcq4d << endl;
                    cout << "\tQ5. " << mcq5 << endl;
                    cout << "\ta. " << mcq5a << endl;
                    cout << "\tb. " << mcq5b << endl;
                    cout << "\tc. " << mcq5c << endl;
                    cout << "\td. " << mcq5d << endl;
                    cout << "\t                             CQ" << endl;
                    cout << "\tCQ1. " << cq1 << endl;
                    cout << "\tCQ2. " << cq2 << endl;
                    cout << "\tCQ3. " << cq3 << endl;
                    cout << "\tCQ4. " << cq4 << endl;

                    cin.ignore();
                    cout << endl;
                    cout << "\t\t\tAnswer Paper" << endl;
                    cout << "\t----------------------------------------------------------------" << endl;
                    cout << "\t----------------------------------------------------------------" << endl;
                    cout << endl;
                    string a1, a2, a3, a4, a5, acq1, acq2, acq3, acq4;
                    cout << "Answer for MCQ 1(a/b/c/d) : ";
                    getline(cin, a1);
                    cout << "Answer for MCQ 2(a/b/c/d) : ";
                    getline(cin, a2);
                    cout << "Answer for MCQ 3(a/b/c/d) : ";
                    getline(cin, a3);
                    cout << "Answer for MCQ 4(a/b/c/d) : ";
                    getline(cin, a4);
                    cout << "Answer for MCQ 5(a/b/c/d) : ";
                    getline(cin, a5);
                    cout << "Enter your answer for CQ1( Remember enter your answer without press enter \nand strat like 'Ans To The Q No: 1') : ";
                    getline(cin, acq1);
                    cout << "Enter your answer for CQ2( Remember enter your answer without press enter \nand strat like 'Ans To The Q No: 1') : ";
                    getline(cin, acq2);
                    cout << "Enter your answer for CQ3( Remember enter your answer without press enter \nand strat like 'Ans To The Q No: 1') : ";
                    getline(cin, acq3);
                    cout << "Enter your answer for CQ4( Remember enter your answer without press enter \nand strat like 'Ans To The Q No: 1') : ";
                    getline(cin, acq4);
                    data5.open(course_codee + "mcqans" + student_id + ".txt", ios::out);
                    data5 << a1 << endl
                          << a2 << endl
                          << a3 << endl
                          << a4 << endl
                          << a5 << endl;
                    data5.close();
                    fstream data6, data7, data8, data9;
                    data6.open(course_codee + "anscq1" + student_id + ".txt", ios::out);
                    data6 << acq1 << endl;
                    data6.close();
                    data7.open(course_codee + "anscq2" + student_id + ".txt", ios::out);
                    data7 << acq2 << endl;
                    data7.close();
                    data8.open(course_codee + "anscq3" + student_id + ".txt", ios::out);
                    data8 << acq3 << endl;
                    data8.close();
                    data9.open(course_codee + "anscq4" + student_id + ".txt", ios::out);
                    data9 << acq4 << endl;
                    data9.close();
                    cin.ignore();
                    student();
                }
                data4.close();
            }
            else
            {
                string yes = "yes", y;
                cout << "\tYou dont have thsi Course Code" << endl;
                cout << "==> If want to reenter your course,\n please enter 'yes' or want to go back enter 'no' ...." << endl;
                getline(cin, y);
                if (y == yes)
                {
                    goto c;
                }
                else
                {
                    student();
                }
            }
        }

        else
        {
            cout << "==> Your password is incorrect...\nPlease try again..." << endl;
            goto b;
        }
        data2.close();
    }

    else
    {
        cout << "==> Your Id not matching....\nPlease try again." << endl;
        goto a;
    }
    data.close();
}
void informatiions::show_informations()
{
    system("cls");
m:
    cout << endl;
    cout << "\t\t\tShow Information" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\t\t\t1. Your Profile." << endl;
    cout << "\t\t\t2. Course List." << endl;
    cout << "\t\t\t3. Up-Coming Exam Date." << endl;
    cout << "\t\t\t4. Study Metarials." << endl;
    cout << "\t\t\t5. Exam Results." << endl;
    cout << "\t\t\t6. Go back." << endl;
    int c;
    cout << "\tEnter your choice : ";
    cin >> c;
    switch (c)
    {
    case 1:
    {
        profile();
        break;
    }
    case 2:
    {
        course_list();
        break;
    }
    case 3:
    {
        show_upcoming_exam_date();
        break;
    }
    case 4:
    {
        show_study_material();
        break;
    }
    case 5:
    {
        show_result();
        break;
    }
    case 6:
    {
        student();
        break;
    }
    default:
    {
        cout << "==> You input is wrong... ... ...\nPlease try again." << endl;
        goto m;
    }
    }
}

void informatiions::profile()
{
    system("cls");
    cin.ignore();
    string si;
    fstream data, data2;
    string pass, password;
a:
m:
    cout << endl;
    cout << "\t\t\tStudent Information" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your student ID : ";
    getline(cin, si);
    cout << "\tEnter your password : ";
    getline(cin, pass);
    data.open("secure" + si + ".txt", ios::in);
    if (!data)
    {
        cout << "==> Student ID is wrong... ..." << endl;
        goto a;
    }
    else
    {
        getline(data, password);
        // data.close();
        if (pass == password)
        {
            data2.open(si + ".txt", ios::in);
            if (!data2)
            {
                cout << "==> File doesnt exist" << endl;
                goto m;
            }
            else
            {
                // here use 'getline' for get the each variable value in one line from file....
                getline(data2, student_id);
                getline(data2, student_name);
                getline(data2, father_name);
                getline(data2, mother_name);
                getline(data2, date_of_birth);
                getline(data2, gender);
                getline(data2, contact_number);
                getline(data2, campus);
                getline(data2, program);
                getline(data2, admission_semester);
                while (!data2.eof()) // this loop continues until end of file... ... ...
                {
                    data2 >> student_id >> student_name >> father_name >> mother_name >> date_of_birth >> gender >> contact_number >> campus >> program >> admission_semester;

                    if (si == student_id)
                    {
                        // here print student information
                        cout << endl;
                        cout << "\t\t\tStudent Information" << endl;
                        cout << "\t----------------------------------------------------------------" << endl;
                        cout << "\t----------------------------------------------------------------" << endl;
                        cout << endl;
                        cout << "\t\tStudent ID         : " << student_id << endl;
                        cout << "\t\tStudent Name       : " << student_name << endl;
                        ;
                        cout << "\t\tFather Name        : " << father_name << endl;
                        cout << "\t\tMother Name        : " << mother_name << endl;
                        ;
                        cout << "\t\tDate of Birth      : " << date_of_birth << endl;
                        cout << "\t\tGender             : " << gender << endl;
                        cout << "\t\tContact Number     : " << contact_number << endl;
                        cout << "\t\tCampus             : " << campus << endl;
                        cout << "\t\tProgram            : " << program << endl;
                        cout << "\t\tAdmission semester : " << admission_semester << endl;
                        data2 >> student_id >> student_name >> father_name >> mother_name >> date_of_birth >> gender >> contact_number >> campus >> program >> admission_semester;
                    }
                }
                data2.close();
            }
        }
        else
        {
            cout << "==> Password is wrong... ..." << endl;
            goto a;
        }
    }
    cin.ignore();
    show_informations();
}
void informatiions::show_upcoming_exam_date()
{
    system("cls");
    fstream data;
    string line;
    cout << endl;
    cout << "\t\t\tUP Coming Exam Date" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    data.open("examdate.txt", ios::in);
    while (getline(data, line))
    {
        cout << line << endl;
    }
    data.close();
    cin.ignore();
    cin.ignore();
    show_informations();
}
void informatiions::show_study_material()
{
    system("cls");
    cout << endl;
    cout << "\t\t\tMetarials" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    string line;
    cout << "\tEnter course code : ";
    getline(cin, course_code);
    fstream data;
    data.open(course_code + "Metarials.txt", ios::in);
    while (getline(data, line))
    {
        cout << "\t" << line << endl;
    }
    cin.ignore();
    cin.ignore();
    show_informations();
}
void informatiions::show_result()
{
    system("cls");
    fstream data, data1, data2, data3, data4;
    string line, pass;
    int n = 1;
a:
b:
    cin.ignore();
    cout << endl;
    cout << "\t\t\tResult" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your ID: ";
    getline(cin, student_id);
    cout << "\tEnter Your Password: ";
    getline(cin, student_pass);
    cout << "\tEnter your course code: ";
    getline(cin, course_code);

    data.open(student_id + ".txt", ios::in);
    if (data.is_open())
    {
        data2.open("secure" + student_id + ".txt", ios::in);
        getline(data2, pass);
        if (student_pass == pass)
        {
            data3.open("course" + student_id + ".txt", ios::in);
            while (getline(data3, line))
            {
                if (course_code == line)
                {
                    n = 1;
                    break;
                }
            }
            data3.close();
            if (n == 1)
            {

                data4.open(course_code + "results" + student_id + ".txt", ios::in);
                getline(data4, line);
                cout << "Your result is : " << endl << "\t\t" << line << endl;
            }
            else
            {
                cout << "==> You dont have this course." << endl;
                cin.ignore();
                student();
            }
        }
        else
        {
            cout << "==> Your password is incorrect ! " << endl;
            goto b;
        }
        data2.close();
    }
    else
    {
        cout << "==> Your student id is wrong!" << endl;
        goto a;
    }
    data.close();
    cin.ignore();
    show_informations();
}
void informatiions::change_password_for_student()
{
    system("cls");
    cin.ignore();
    fstream data, data2;
    string si;
    string password, pass_word;
f:
    cout << endl;
    cout << "\t\t\tChange Password" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your ID : " << endl;
    getline(cin, si);
    cout << "\tEnter your password : " << endl;
    getline(cin, password);
    data.open("secure" + si + ".txt", ios::in);
    getline(data, pass_word);
    if (!data)
    {
        cout << "==> Your student Id is wrong" << endl;
        goto f;
    }
    else
    {
        if (pass_word == password)
        {

        a:
        m:

            string n_pass, n_c_pass, c_pass;
            cout << "\tEnter your current password : ";
            getline(cin, c_pass);
            cout << "==> For strong password :(lowercase letters & uppercase letters & digits & simbol) " << endl;

            cout << "\tEnter your new password : ";
            getline(cin, n_pass);
            cout << "\tConfirm your new password : ";
            getline(cin, n_c_pass);
            if (c_pass == pass_word && n_pass == n_c_pass)
            {
                string newpass = strongpassword(n_c_pass);
                if (newpass == "strong")
                {
                    data2.open("secure" + si + ".txt", ios::out);
                    data2 << n_c_pass << endl;
                    data2.close();
                    cout << "==> Password change succefully... ... ..." << endl;
                }
                else
                {
                    cout << "==> Your password is not strong. Please enter strong password again." << endl;
                    goto m;
                }
            }
            else
            {
                cout << "==> Your password dont matching... ..." << endl;
                goto a;
            }
        }
    }
    data.close();
}

void informatiions::teacher_login()
{
    system("cls");
    cin.ignore();
    fstream data;
    string user_name;
    string password, pass_word;
mark3:
    cout << endl;
    cout << "\t\t\tTeacher LOG IN" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your User Name : ";
    cin >> user_name;
    cout << "\tEnter your password : ";
    cin >> password;
    data.open(user_name + ".txt", ios::in);
    getline(data, pass_word);
    if (password == pass_word)
    {
        teacher();
    }
    else
    {
        cout << "==> Your User name or password is incorrect...\n Please try again... ... ..." << endl;
        goto mark3;
    }
}
void informatiions::teacher()
{
    system("cls");
m:
    cout << endl;
    cout << "\t\t\tTeacher Properties" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\t1. Set Exam." << endl;
    cout << "\t2. Mark Answer Papper." << endl;
    cout << "\t3. Search Student Results." << endl;
    cout << "\t4. Add Study Metarials." << endl;
    cout << "\t5. Change Password." << endl;
    cout << "\t6. Go Back." << endl;
    cout << "\t================================" << endl;
    cout << "\t================================" << endl;
    cout << endl;
    int c;
    cout << "\tEnter your choice : ";
    cin >> c;
    switch (c)
    {
    case 1:
    {
        set_exam();
        break;
    }
    case 2:
    {
        mark_answer_papers();
        break;
    }
    case 3:
    {
        search_student_results();
        break;
    }
    case 4:
    {
        add_course_material();
        break;
    }
    case 5:
    {
        change_password_for_teacher();
        break;
    }
    case 6:
    {
        menu();
    }
    default:
    {
        cout << "==> You input is wrong!" << endl;
        goto m;
    }
    }
}

void informatiions::set_exam()
{
    system("cls");
    cin.ignore();
    cout << endl;
    cout << "\t\t\tSet Exam Questions" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    string varsity = "Northern University, Bangladesh";
    cout << "Enter semester Name                 : ";
    getline(cin, semester_name);
    cout << "Enter Exam Name                     : ";
    getline(cin, exam_name);
    cout << "Enter course Name                   : ";
    getline(cin, course_name);
    cout << "Enter Course code                   : ";
    getline(cin, course_code);
    cout << "Enter Exam date                     : ";
    getline(cin, exam_date);
    cout << "Enter mark                          : ";
    getline(cin, mark);
    cout << "Enter time                          : ";
    getline(cin, exam_time);
    cout << "Enter Mcq1                          : ";
    getline(cin, mcq1);
    cout << "Enter mcq1 option a                 : ";
    getline(cin, mcq1a);
    cout << "Enter mcq1 option b                 : ";
    getline(cin, mcq1b);
    cout << "Enter mcq1 option c                 : ";
    getline(cin, mcq1c);
    cout << "Enter mcq1 option d                 : ";
    getline(cin, mcq1d);
    cout << "Enter Mcq2                          : ";
    getline(cin, mcq2);
    cout << "Enter mcq1 option a                 : ";
    getline(cin, mcq2a);
    cout << "Enter mcq1 option b                 : ";
    getline(cin, mcq2b);
    cout << "Enter mcq1 option c                 : ";
    getline(cin, mcq2c);
    cout << "Enter mcq1 option d                 : ";
    getline(cin, mcq2d);
    cout << "Enter Mcq3                          : ";
    getline(cin, mcq3);
    cout << "Enter mcq1 option a                 : ";
    getline(cin, mcq3a);
    cout << "Enter mcq1 option b                 : ";
    getline(cin, mcq3b);
    cout << "Enter mcq1 option c                 : ";
    getline(cin, mcq3c);
    cout << "Enter mcq1 option d                 : ";
    getline(cin, mcq3d);
    cout << "Enter Mcq4                          : ";
    getline(cin, mcq4);
    cout << "Enter mcq1 option a                 : ";
    getline(cin, mcq4a);
    cout << "Enter mcq1 option b                 : ";
    getline(cin, mcq4b);
    cout << "Enter mcq1 option c                 : ";
    getline(cin, mcq4c);
    cout << "Enter mcq1 option d                 : ";
    getline(cin, mcq4d);
    cout << "Enter Mcq5                          : ";
    getline(cin, mcq5);
    cout << "Enter mcq1 option a                 : ";
    getline(cin, mcq5a);
    cout << "Enter mcq1 option b                 : ";
    getline(cin, mcq5b);
    cout << "Enter mcq1 option c                 : ";
    getline(cin, mcq5c);
    cout << "Enter mcq1 option d                 : ";
    getline(cin, mcq5d);
    cout << "Enter CQ 1                          : ";
    getline(cin, cq1);
    cout << "Enter CQ 2                          : ";
    getline(cin, cq2);
    cout << "Enter CQ 3                          : ";
    getline(cin, cq3);
    cout << "Enter CQ 4                          : ";
    getline(cin, cq4);
    fstream data;
    data.open(course_code + "question.txt", ios::out);
    data << varsity << endl
         << semester_name << endl
         << exam_name << endl
         << course_name << endl
         << course_code << endl
         << mark << endl
         << exam_time << endl
         << mcq1 << endl
         << mcq1a << endl
         << mcq1b << endl
         << mcq1c << endl
         << mcq1d << endl
         << mcq2 << endl
         << mcq2a << endl
         << mcq2b << endl
         << mcq2c << endl
         << mcq2d << endl
         << mcq3 << endl
         << mcq3a << endl
         << mcq3b << endl
         << mcq3c << endl
         << mcq3d << endl
         << mcq4 << endl
         << mcq4a << endl
         << mcq4b << endl
         << mcq4c << endl
         << mcq4d << endl
         << mcq5 << endl
         << mcq5a << endl
         << mcq5b << endl
         << mcq5c << endl
         << mcq5d << endl
         << cq1 << endl
         << cq2 << endl
         << cq3 << endl
         << cq4 << endl;
    data.close();
    cout << endl;
    cout << "==> Succesfuly Question Set... ...." << endl;
    teacher();
}
void informatiions::mark_answer_papers()
{
    system("cls");
    int total = 0;
    int mark;
    cin.ignore();
    string ans;
    cout << endl;
    cout << "\t\t\tMarking Exam Paper" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Enter course code : ";
    getline(cin, course_code);
    cout << "Enter student Id : ";
    getline(cin, student_id);
    fstream d1, d2, d3, d4, d5;
    cout << "MCQ answers are : " << endl;
    d1.open(course_code + "mcqans" + student_id + ".txt", ios::in);
    int i = 1;
    while (getline(d1, ans))
    {
        cout << "Ans" << i << ". " << ans << endl;
        i++;
    }
    d1.close();
    cout << "Enter mark for MCQ answers : ";
    cin >> mark;
    total += mark;
    cin.ignore();
    cout << "CQ 1. Answer : " << endl;
    d2.open(course_code + "anscq1" + student_id + ".txt", ios::in);
    string line;
    while (getline(d2, line))
    {
        cout << line << endl;
    }
    d2.close();
    cout << "Enter mark for CQ 1 answers : ";
    cin >> mark;
    total += mark;
    cin.ignore();
    cout << "CQ 2. Answer : " << endl;
    d3.open(course_code + "anscq2" + student_id + ".txt", ios::in);
    string line2;
    while (getline(d3, line2))
    {
        cout << line2 << endl;
    }
    d3.close();
    cout << "Enter mark for CQ 2 answers : ";
    cin >> mark;
    total += mark;
    cin.ignore();
    cout << "CQ 3. Answer : " << endl;
    d4.open(course_code + "anscq3" + student_id + ".txt", ios::in);
    string line3;
    while (getline(d4, line3))
    {
        cout << line3 << endl;
    }
    d4.close();
    cout << "Enter mark for CQ 3 answers : ";
    cin >> mark;
    total += mark;
    cin.ignore();
    cout << "CQ 4. Answer : " << endl;
    d5.open(course_code + "anscq4" + student_id + ".txt", ios::in);
    string line4;
    while (getline(d5, line4))
    {
        cout << line4 << endl;
    }
    d5.close();
    cout << "Enter mark for CQ 4 answers : ";
    cin >> mark;
    total += mark;
    cin.ignore();
    fstream d6;
    d6.open(course_code + "results" + student_id + ".txt", ios::out);
    d6 << course_code << " : " << total << endl;
    cout << "==> Result Inserted Successfully" << endl;
    d6.close();
    cin.ignore();
    teacher();
}
void informatiions::search_student_results()
{
    system("cls");
    cin.ignore();
    cout << endl;
    cout << "\t\t\tSearch Student Results" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter student ID : ";
    getline(cin, student_id);
    cout << "\tCourse code : ";
    getline(cin, course_code);
    fstream d1;
    string line;
    d1.open(course_code + "results" + student_id + ".txt", ios::in);
    getline(d1, line);
    cout << line << endl;
    d1.close();
    cin.ignore();
    teacher();
}
void informatiions::add_course_material()
{
    system("cls");
a:
    cout << endl;
   cout << "\t\t\tCourse Materials" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\t1. Add course material." << endl;
    cout << "\t2. Remove all and add_course_material." << endl;
    cout << "\t3. Go back." << endl;
    int c;
    cout << "\tEnter your choice : ";
    cin >> c;
    cin.ignore();
    switch (c)
    {
    case 1:
    {
        add_metarials();
        break;
    }
    case 2:
    {
        clear_and_add();
        break;
    }
    case 3:
    {
        teacher();
        break;
    }
    default:
    {
        cout << "==>You entered wronf input." << endl;
        goto a;
    }
    }
}
void informatiions::add_metarials()
{
    system("cls");
    string metarials_name, metarials;
    cout << endl;
    cout << "\t\t\tAdd Metarials" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter course code : ";
    getline(cin, course_code);
    cout << "\tEnter Metarials Name : ";
    getline(cin, metarials_name);
    cout << "\tEnter Metarials : ";
    getline(cin, metarials);
    fstream data;
    data.open(course_code + "Metarials.txt", ios::app);
    data << metarials_name << endl
         << metarials << endl;
    data.close();

    
    cin.ignore();
    add_course_material(); 
}
void informatiions::clear_and_add()
{
    system("cls");
    string metarials_name, metarials;
    cout << endl;
    cout << "\t\t\tClear and add metarials" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter course code : ";
    getline(cin, course_code);
    cout << "\tEnter Metarials Name : ";
    getline(cin, metarials_name);
    cout << "\tEnter Metarials : ";
    getline(cin, metarials);
    fstream data;
    data.open(course_code + "Metarials.txt", ios::out);
    data << metarials_name << endl
         << metarials << endl;
    data.close();
    cin.ignore();
    add_course_material();
}
void informatiions::change_password_for_teacher()
{
    system("cls");
    cin.ignore();
    fstream data, data2;
    string user_name;
    string password, pass_word;
c:
d:
    cout << endl;
    cout << "\t\t\tChange Password" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << "\t----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tEnter your User Name : " << endl;
    getline(cin, user_name);
    cout << "\tEnter your password : " << endl;
    getline(cin, password);
    data.open(user_name + ".txt", ios::in);
    getline(data, pass_word);
    if (data.is_open())
    {
        if (pass_word == password)
        {

        a:
        m:
            string n_pass, n_c_pass;
            cout << "==>For strong password :(lowercase letters & uppercase letters & digits & simbol) " << endl;
            cout << "\tEnter your new password : ";
            getline(cin, n_pass);
            cout << "\tConfirm your new password : ";
            getline(cin, n_c_pass);
            if (n_pass == n_c_pass)
            {
                string newpass = strongpassword(n_c_pass);
                if (newpass == "strong")
                {
                    data2.open("admin.txt", ios::out);
                    data2 << n_c_pass;
                    data2.close();
                    cout << "==>Password change succefully... ... ..." << endl;
                }
                else
                {
                    cout << "==>Your password is not strong. Please enter strong password again." << endl;
                    goto m;
                }
            }
            else
            {
                cout << "==>Your password dont matching... ..." << endl;
                goto a;
            }
        }
        else
        {
            cout << "==>Your password is incorrect..." << endl;
            goto c;
        }
    }
    else
    {
        cout << "==>Dont matching user_name.... " << endl;
        goto d;
    }
    data.close();
    cin.ignore();
    teacher();
}
int main()
{
    system("cls");
    informatiions i_am_meraj;
    i_am_meraj.menu();
    return 0;
}