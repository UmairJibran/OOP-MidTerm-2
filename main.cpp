#include <iostream>
using namespace std;

class Pizza{
  public:
    int toppings;
    int size;
    double totalCost;
    Pizza(){
      size = 0;
      toppings = 0;
    }
    void setSize(int size){
      if(size == 1){
        totalCost = 10;
      }else if(size == 2){
        totalCost = 12;
      }else if(size == 3){
        totalCost = 14;
      }
    }
    void addToppings(int num){
      int temp = 0;
      while(num > temp){
        totalCost = totalCost + 2;
        temp = temp + 1;
      }
    }
    double calcCost(){
      return totalCost;
    }
};

int main() {
  Pizza p;
  int size;
  string tops[3] = {"Cheese","Pepperoni","Ham"};
  cout << "set size, 1 for small, 2 for medium, 3 for large: ";
  cin >> size;
  p.setSize(size);
  int i = 0;
  while(i < 3){
    int num = 0;
    cout << "How much topping would you want for " << tops[i];
    cin >> num;
    p.addToppings(num);
    i = i + 1;
  }
  double price = p.calcCost();
  cout << endl << "total cost is $" << price;
}