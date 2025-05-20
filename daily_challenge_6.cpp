//Daily challenge 6
#include<iostream>
using namespace std;
class Profit{
   private:
    int *arr;
    int size;
    int profit=0;
    public:
   friend void getValue(Profit &p);
   friend void printProfit(Profit &p);
};
void getValue(Profit &p){
    cout << "Enter the size of the array: ";
    cin >> p.size;
    p.arr=(int *)malloc(sizeof(int)*p.size);
    for(int i=0;i<p.size;i++){
        cin >> p.arr[i];
    }
}
void printProfit(Profit &p){
    for(int i=0;i<p.size;i++){
if(p.arr[i]>p.arr[i-1]) p.profit+=p.arr[i]-p.arr[i-1];
    }
    cout << "Profit: " << p.profit;
}
int main(){
    Profit p;
    getValue(p);
    printProfit(p);

    return 0;
}