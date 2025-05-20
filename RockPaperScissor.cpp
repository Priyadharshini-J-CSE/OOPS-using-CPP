#include<iostream>
using namespace std;
int main(){
    int choice;
    int sys=1,score=0,sysScore=0;
    char ch;
    do{
        cout << "Welcome to the Game!" << endl;
    do{
        cout << "1)Rock\n2)Paper\n3)Scissor\n Enter the choice: ";
        cin >> choice;
        if(choice==1 && sys==2){
            sysScore++;
            cout << "Rock X Paper(User point: " << score << " System point: " << sysScore << ")"<< endl;
            sys=3;
        }
        else if(choice==2 && sys==1){
            score++;
            cout << "Paper X Rock(User point: " << score << " System point: " << sysScore << ")" << endl;
            sys=3;
           
        }
        else if(choice==1 && sys==3){
            sysScore++;
            cout << "Rock X Scissor(User point: " << score << " System point: " << sysScore << ")"<< endl;
            sys=2;
        }
        else if(choice==3 && sys==1){
            score++;
            cout << "Scissor X Rock(User point: " << score << " System point: " << sysScore << ")"<< endl;
            sys=1;
        }
        else if(choice==2 && sys==3){
            sysScore++;
            cout << "Paper X Scissor(User point: " << score << " System point: " << sysScore << ")" << endl;
            sys=2;
        }

        else if(choice==3 && sys==2){
            score++;
            cout << "Scissor X Paper(User point: " << score << " System point: " << sysScore << ")"<< endl;
            sys=1;
        }
        else{
            if(choice==1) {
                cout<< "Rock x Rock (User point: " << score << " System point: " << sysScore << ")"<< endl;
                sys=3;
            }
            if(choice==2) {
                cout<< "Paper x Paper (User point: " << score << " System point: " << sysScore << ")"<< endl;
                sys=1;}
            if(choice==3)
            { cout<< "Scissor x Scissor (User point: " << score << " System point: " << sysScore << ")"<< endl;
                sys=2;}
            
        }

        if(score==3){
            printf("\nUser win the game!!\n");
            break;
        }
        if(sysScore==3){
            printf("\nSystem win the game!!\n");
            break;
        }



    }while(choice>=1 && choice<=3);
    cout <<("Are you want to play again (y/n): ");
    cin >> ch;
    sysScore=0;
    score=0;

    

}while(ch!='n');

    return 0;
}