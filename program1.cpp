#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
     int empID,age,attendance;
     string name,department;
     float salary,bonous;
    Employee(){
        cout<<"Employee clas Intialized!"<<endl;
    }
    void addEmployee(){
        int noEmp;
        cout<<"Enter the Number of Employee:";
        cin>>noEmp;
        for(int i=0;i<noEmp;i++){
            cout<<"Enter the Employee ID:";
            cin>>empID;
            cout<<"Enter the Employee Name:";
            cin>>name;
            cout<<"Enter the Employee Age:";
            cin>>age;
            cout<<"Enter the Employee Department: ";
            cin>>department;
            cout<<"Enter the Salary:";
            cin>>salary;
            cout<<"Enter the Employee Attendance: ";
            cin>>attendance;
            cout<<"Enter the Employee Bonous:";
            cin>>bonous;
        }
        
    }
    void markAttendance(int empID,int days){
        float attend = days/30*100;
        cout<<"Employee ID: "<<empID<<"  "<<" Attendance: "<<attendance<<endl;
        attendance=attend;

    }
    void calculateSalary(int eID){
        float final_salary=salary+(salary*attendance/100);
        cout<<"Employee ID: "<<empID<<"  "<<"The Final Salary is: "<<final_salary<<endl;
    }
    void applyIncrement(int percent){
        float increment=salary*percent/100;
        float balance=salary+increment;
        cout<<"Total balance is "<<balance<<endl;
        salary=balance;
    }
    void grantBounus(float bonous_amount){
        bonous+=bonous_amount;
        cout<<"Bonus granted!"<<endl;
    }
    void displayEmployee(){
        cout<<"Employee ID:"<<empID<<endl
            <<"Employee Name: "<<name<<endl
            <<"Employee Age: "<<age<<endl
            <<"Employee Department:"<<department<<endl
            <<"Employee Salary: "<<salary<<endl
            <<"Employee Attendance "<<attendance<<endl
            <<"Employee Bonous"<<bonous<<endl;
    }
    ~Employee(){
        cout<<"The Employee class is Destroyed."<<endl;
    }
};
int main(){
    int choice;
    Employee emp;
    do{
        cout<<"Employee Management System."<<endl;
        cout<<"1.Add Employee."<<endl
            <<"2.Mark Attendance."<<endl
            <<"3.Calcualate Salary."<<endl
            <<"4.Apply Increment."<<endl
            <<"5.Grant Bouns."<<endl
            <<"6.Diplay Employee."<<endl
            <<"7.Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                emp.addEmployee();
                break;
            case 2:
                int days,empID;
                cout<<"Enter the Employee ID:";
                cin>>empID;
                cout<<"Enter the number of working days: ";
                cin>>days;
                emp.markAttendance(empID,days);
                break;
            case 3:
                int eID;
                cout<<"Enter the Employee ID:";
                cin>>eID;
                emp.calculateSalary(eID);
                break;
            case 4:
                int percent;
                cout<<"Enter the increment percentage: ";
                cin>>percent;
                emp.applyIncrement(percent);
                break;
            case 5:
                float bonus_amount;
                cout<<"Enter the bonus amount: ";
                cin>>bonus_amount;
                emp.grantBounus(bonus_amount);
                break;
            case 6:
                emp.displayEmployee();
                break;
            case 7:
                cout<<"Exiting.." ;
                break;
            default:
                cout<<"Invalid choice!Try again." <<endl;
                break; 
        }

    }while(choice!=7);
    return 0;
}