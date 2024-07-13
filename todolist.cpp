#include<iostream>
#include<string>
using namespace std;


const int MAX_TASK = 100;
struct Task
{
    string descrition;
    bool isDone;
};
int main()
{
    Task tasks[MAX_TASK];
    int numTasks = 0;

    while(true){
        cout<<"to do list"<<endl;
        cout<<"1. Add task"<<endl;
        cout<<"2. View task"<<endl;
        cout<<"3. Mark Task as Done"<<endl;
        cout<<"4. Exit"<<endl;

        int choice;
        cin>>choice;

        if(choice == 1){
            if ( numTasks < MAX_TASK){
                cout<<"Enter task description: ";
                cin.ignore();
                getline(cin, tasks[numTasks].descrition);
                tasks[numTasks].isDone = false;
                numTasks++;
                cout<<"task Add."<<endl;
            }
            else
            {
                cout<<"Task list is full."<<endl;

            }
        }
        else if(choice == 2){
            cout<<"Tasks: "<<endl;
            for(int i=0;i<numTasks;i++)
            {
                cout<<i+1<<".";
                if(tasks[i].isDone)
                {
                    cout<<"[X] ";
                }
                else{
                    cout<<"[ ] ";
                   
                }
                cout<<"tasks[i].description"<<endl;
            }
        }
        else if(choice == 3)
        {
            cout<<"enter the number of tasks mark as done:";
            int taskNumber;
            cin>>taskNumber;
        }
        else if(choice == 3)
        {
            cout<<"enter number of tasks mark as done";
            int taskNumber;
            if(taskNumber > 0 && taskNumber <= numTasks)
            {
                tasks[taskNumber-1].isDone = true;
                cout<<"task marked as done."<<endl;

            }
            else
            {
                cout<<"Invalid task number."<<endl;
            }
        }
        else if(choice == 4)
        {
            cout<<"EXIT!"<<endl;
            break;
        }
        else
        {
            cout<<"invalid choice.please try again"<<endl;
        }
        

    }
    return 0; 
}