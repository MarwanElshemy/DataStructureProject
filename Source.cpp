#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

void randomQuote()
{
    string Quotes[39] =
    {
        "When you have a dream, you have got to grab it and never let go.\n-- Carol Burnett",
        "Nothing is impossible. The word itself says ‘I’m possible!,\n -- Audrey Hepburn",
        "There is nothing impossible to they who will try.\n-- Michael G.Scott",
        "The bad news is time flies. The good news is you’re the pilot.\n-- Michael Altshuler",
        "Life has got all those twists and turns. You’ve got to hold on tight and off you go.\n-- Nicole Kidman",
        "Keep your face always toward the sunshine, and shadows will fall behind you.\n-- Walt Whitman",
        "Success is not final, failure is not fatal: it is the courage to continue that counts.\n-- Winston Churchill",
        "You define your own life. Don’t let other people write your script.\n-- Oprah Winfrey",
        "You are never too old to set another goal or to dream a new dream.\n-- Ryan Gosling",
        "Spread love everywhere you go.\n-- Susannah Dean",
        "Do not allow people to dim your shine because they are blinded. Tell them to put some sunglasses on.\n-- Lady Gaga",
        "Not having the best situation, but seeing the best in your situation is the key to happiness.\n-- Jake Gyllenhaal",
        "It is during our darkest moments that we must focus to see the light.\n-- Aristotle",
        "Weaknesses are just strengths in the wrong environment.\n-- Marianne Cantwell",
        "In a gentle way, you can shake the world.\n-- Mahatma Gandhi",
        "Try to be a rainbow in someone’s cloud.\n-- Maya Angelou",
        "We must let go of the life we have planned, so as to accept the one that is waiting for us.\n-- Joseph Campbell",
        "Find out who you are and be that person. That’s what your soul was put on this earth to be. Find that truth, live that truth, and everything else will come.\n-- Bruce Wayne",
        "It's about drive it's about power.\n-- Dwayne The Rock Johnson",
        "Nobody built like you, you design yourself.\n-- Jay-Z",
        "Live your beliefs and you can turn the world around.\n-- Henry David Thoreau",
        "Life is like riding a bicycle. To keep your balance, you must keep moving.\n-- Albert Einstein",
        "Don’t try to lessen yourself for the world; let the world catch up to you.\n-- Beyonce",
        "Faith is love taking the form of aspiration.\n-- William Ellery Channing",
        "If you don’t like the road you’re walking, start paving another one!\n-- Dolly Parton",
        "We generate fears while we sit. We overcome them by action.\n-- Dr. Henry Link",
        "We are not our best intentions. We are what we do.\n-- Amy Dickinson",
        "What you get by achieving your goals is not as important as what you become by achieving your goals.\n-- Roland Dechaine of Gilead",
        "Out of the mountain of despair, a stone of hope.\n-- Martin Luther King, Jr.",
        "You are never too old to set another goal or to dream a new dream.\n-- C.S. Lewis",
        "You have to be where you are to get where you need to go.\n-- Amy Poehler",
        "It is never too late to be what you might have been.\n-- George Eliot",
        "You do not find the happy life. You make it.\n-- Camilla Eyring Kimball",
        "We all have problems. But it’s not what happens to us, [it’s] the choices we make after.\n-- Elizabeth Smart",
        "You must find the place inside yourself where nothing is impossible.\n-- Deepak Chopra",
        "Definitions belong to the definers, not the defined.\n-- Toni Morrison",
        "In order for the light to shine so brightly, the darkness must be present.\n-- Sir Francis Bacon",
        "It ain’t about how hard you hit. It’s about how hard you can get hit and keep moving forward.\n-- Sylvester Stallone in Rocky Balboa",
        "The power of imagination makes us infinite.\n-- Patrick Bateman",
    };
    int random;
    srand(time(NULL));
    random = rand() % 39;
    cout << Quotes[random] << endl;
}

void clean()
{
    system("PAUSE");
    system("CLS");
}

void exit()
{
    system("color 05");
    cout << "\n\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout << "\n\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout << "\n\t\t    Thank You For Using The Task Manager!";
    cout << "\n\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout << "\n\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << "\n\n";
}

void welcome()
{
    cout << "\n\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout << "\n\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout << "\n\t\t@@@@ ----------> WELCOME to <---------- @@@@";
    cout << "\n\t\t@@@@->     Employees Task Manager    <-@@@@";
    cout << "\n\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout << "\n\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << "\n\n";

    cout << "\t\t >>>---- Implemented By Team GEN_136 ---<<<" << endl << endl;

    cout << "\t\t  1- Mahmoud Salah  " << endl;
    cout << "\t\t  2- Mohammed Tamer " << endl;
    cout << "\t\t  3- Marwan Abdallah " << endl;
    cout << "\t\t  4- Yusif Abdelazim " << endl;
    cout << "\t\t  5- Mohammed Fahmy " << endl;
    cout << "\t\t  6- Mahmoud Atif " << endl << endl;
    clean();
}

class Task
{
private:
    string taskTitle;
    string description;
    string deadline;
    string assigningDate;
    int priority;
public:
    Task(string title, string des, string dead, int pr)
    {
        time_t t = time(0);
        tm* now = localtime(&t);
        assigningDate = to_string((now->tm_year + 1900)) + '-';
        if (((now->tm_mon + 1) / 10) == 0)
            assigningDate += '0' + to_string((now->tm_mon + 1)) + '-';
        else
            assigningDate += to_string((now->tm_mon + 1)) + '-';
        if (((now->tm_mday) / 10) == 0)
            assigningDate += '0' + to_string((now->tm_mday));
        else
            assigningDate += to_string((now->tm_mday));

        taskTitle = title;
        description = des;
        deadline = dead;
        priority = pr;
    }

    string getTitle()
    {
        return taskTitle;
    }

    string getDescrip()
    {
        return description;
    }

    string getDeadline()
    {
        return deadline;
    }

    string getAssigning()
    {
        return assigningDate;
    }

    int getPriority()
    {
        return priority;
    }

    void setTitle(string t)
    {
        taskTitle = t;
    }

    void setDescrip(string des)
    {
        description = des;
    }

    void setDeadline(string ded)
    {
        deadline = ded;
    }

    void setPriority(int p)
    {
        priority = p;
    }
};

class Employee
{
private:
    string name;
    int id;
public:
    vector<Task> tasks;

    Employee(string n,int i)
    {
        name = n;
        id = i;
    }

    void sortTasks()
    {
        for (int i = 0; i < tasks.size() - 1; i++)
        {
            for (int j = 0; j < tasks.size() - (i + 1); j++)
            {
                if (tasks[j].getPriority() < tasks[j + 1].getPriority())
                {
                    swap(tasks[j], tasks[j + 1]);
                }
            }
        }
    }

    void insertTask()
    {
        system("color 03");
        cout << "° Please Enter The Task's Information" << endl << endl;
        int pr;
        string des, deadL, ti;

        cout << "° Title: -> ";
        getline(cin, ti); 
        cout << endl;

        cout << "° Description: -> ";
        getline(cin, des);
        cout << endl;

        cout << "° Deadline(yyyy-mm-dd): -> ";
        getline(cin,deadL);
        cout << endl;

        while (true)
        {
            cout << "° Priority (1-10): -> ";
            cin >> pr;
            cin.ignore();
            if (pr < 1 || pr > 10)
                cout << "Please enter a correct priority (1-10)" << endl;
            else
                break;
        }
        cout << endl;

        Task t1(ti, des, deadL, pr);
        tasks.push_back(t1);
        sortTasks();
    }

    void displayTasks()
    {
        system("color 06");
        if (tasks.size() == 0)
        {
            cout << "\n\t° There Are No Tasks To Display" << endl;
        }
        else
        {
            for (int i = 0; i < tasks.size(); i++)
            {
                cout << "Task number -> " << i + 1 << endl;
                cout << "Title -> " << tasks[i].getTitle() << endl;
                cout << "Description -> " << tasks[i].getDescrip() << endl;
                cout << "Assigning Date -> " << tasks[i].getAssigning() << endl;
                cout << "Deadline -> " << tasks[i].getDeadline() << endl;
                cout << "Priority -> " << tasks[i].getPriority() << endl;
                cout << "/////////////////////////////////////////" << endl;
            }
        }
    }

    void update()
    {
        if (tasks.size() == 0) {
            cout << "\n\t° -> No Tasks Yet" << endl;
            return;
        }
        else {
            tasks.erase(tasks.begin());
            if (tasks.size() > 0)
            {
                cout << "\n\t° The Next Task To Be Done Is: -> ";
                cout << tasks[0].getTitle() << endl;
            }
            else if (tasks.size() == 0)
                randomQuote();
        }
    }

    void editTask()
    {
        system("color 06");
        cout << "\n\t° Please Enter The Number Of The Task To Be Updated -> ";
        int taskNo;
        cin >> taskNo;
        cin.ignore();
        if (taskNo < 1 || taskNo > tasks.size())
        {
            cout << "\n\t° Invalid Task Number" << endl;
            return;
        }
        else
        {
            cout << "\n\t° To update : Title-press 1, Description-press 2, Deadline-press 3, priority-press 4 -> ";
            int updated;
            cin >> updated;
            cin.ignore();

            if (updated == 1) {
                string newTitle;
                cout << "\n\t° Enter The Updated Title -> ";
                getline(cin, newTitle);
                tasks[taskNo - 1].setTitle(newTitle);
                cout << "\n\t° Update Completed!" << endl;
            }
            else if (updated == 2) {
                string newDes;
                cout << "\n\t° Enter The Updated Description -> ";
                getline(cin, newDes);
                tasks[taskNo - 1].setDescrip(newDes);
                cout << "\n\t° Update Completed!" << endl;
            }
            else if (updated == 3) {
                string newDead;
                cout << "\n\t° Enter The Updated Deadline(yyyy-mm-dd) -> ";
                getline(cin, newDead);
                tasks[taskNo - 1].setDeadline(newDead);
                cout << "\n\t° Update Completed!" << endl;
            }
            else if (updated == 4) {
                int newPr;
                while (true)
                {
                    cout << "\n\t° Enter The Updated Priority -> ";
                    cin >> newPr;
                    cin.ignore();
                    if (newPr < 1 || newPr > 10)
                        cout << "\n\t° Please Enter A Correct Priority (1-10)" << endl;
                    else
                        break;
                }
                tasks[taskNo - 1].setPriority(newPr);
                sortTasks();
                cout << "\n\t° Update Completed!" << endl;
            }
            else
            {
                cout << "\n\t° Invalid Choice" << endl;
            }
        }
    }

    string getName()
    {
        return name;
    }

    int getID()
    {
        return id;
    }

};

int main()
{
    system("color 03");
    welcome();
    int idCounter = 1000;
    vector<Employee> emps;
    while (true)
    {
        system("color 02");
        cout << "\n\t|-------------------- Main Menu --------------------|" << endl;

        cout << "\n\t° Enter >-[1]-> to:-> Register As A New Employee\n";
        cout << "\n\t° Enter >-[2]-> to:-> Sign In With Your ID\n";
        cout << "\n\t° Enter >-[3]-> to:-> Exit The Application\n\n";

        cout << "\n\n\n*********\n";

        cout << "\n\t° -> Enter your choice:-> ";
        int choice;
        cin >> choice;
        cin.ignore();
        clean();
        if (choice == 1)
        {
            system("color 03");
            cout << "\n\t° -> Please Enter Your Name:-> ";
            string name;
            getline(cin, name);
            idCounter++;
            Employee newEmp(name,idCounter);
            cout << "\n\t° -> Your ID is : " << newEmp.getID() << endl;
            emps.push_back(newEmp);
            clean();
        }
        else if (choice == 2)
        {
            system("color 01");
            cout << "\n\t° -> Please Enter Your ID:-> ";
            bool test = false;
            int id;
            cin >> id;
            cin.ignore();
            for (int i = 0; i < emps.size(); i++)
            {
                if (id == emps[i].getID())
                {
                    test = true;
                    cout << "\n\t° -> Welcome " << emps[i].getName() << endl;
                    clean();
                    while (true)
                    {
                        int choice;
                        cout << "\n\t|-------------------- Task Manager --------------------|" << endl;
                        cout << "\n\t° Enter >-[1]-> to:-> Insert A New Task\n";
                        cout << "\n\t° Enter >-[2]-> to:-> View Your Tasks\n";
                        cout << "\n\t° Enter >-[3]-> to:-> Delete A Task You Have Completed\n";
                        cout << "\n\t° Enter >-[4]-> to:-> Edit A Task\n";
                        cout << "\n\t° Enter >-[5]-> to:-> Return To Main Menu\n\n";
                        cout << "\n\n\n*********\n";
                        cout << "\n\t° -> Enter Your Choice:-> ";
                        cin >> choice;
                        cin.ignore();
                        clean();
                        if (choice == 1)
                        {
                            emps[i].insertTask();
                            clean();
                        }
                        else if (choice == 2)
                        {
                            emps[i].displayTasks();
                            clean();
                        }
                        else if (choice == 3)
                        {
                            emps[i].update();
                            clean();
                        }
                        else if (choice == 4)
                        {
                            emps[i].editTask();
                            clean();
                        }
                        else if (choice == 5)
                        {
                            break;
                        }
                        else
                        {
                            cout << "\n\t° Invalid Choice, Please Try Again" << endl;
                            clean();
                        }

                    }
                    break; //to end searching after the employee is found;
                }
            }
            if (!test)
            {
                cout << "\n\t\--> Invalid ID <-- " << endl;
                clean();
            }
        }
        else if (choice == 3)
        {
            exit();
            break;
        }
        else
        {
            cout << "\n\t°Enter A Valid Choice" << endl;
            clean();
        }
    }
    
	return 0;
}