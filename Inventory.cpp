#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

// constructor to initialize an inventory object that
// has a name price and quantity
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

// Lowers count of stock by one for object
void Inventory::sell()
{
  if(m_in_stock == 0){
    std::cout << "Sorry, that item is out of stock" << std::endl;
  }
  else{
  m_in_stock--;
  }
}

// prints out the name of the item along with the price
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
