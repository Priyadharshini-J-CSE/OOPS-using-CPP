//Daily challenge 4
#include<iostream>
using namespace std;
class Word{
    private:
    int no;
    string word[100];
    public:
    void getdata(int n){
    no=n;
        for(int i=0;i<no;i++){
            cin >> word[i];
        }
    }
    void setdata(){
     for(int i=no-1;i>=0;i--){
        cout << word[i] << " ";
     }
    }
};
int main(){
    Word w;
    int n;
    scanf("%d",&n);
    w.getdata(n);
    w.setdata();
    return 0;
}