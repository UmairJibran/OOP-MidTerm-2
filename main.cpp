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
      int temp;
      while(num > temp){
        totalCost = totalCost + 2;
      }
    }
    double calcCost(){
      return totalCost;
    }
};

int main() {
  Pizza p;
  int size;
  cout << "set size, 1 for small, 2 for medium, 3 for large: ";
  cin >> size;
  
}