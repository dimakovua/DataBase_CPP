#include "Headers/tables.hpp"
#include "Headers/masters.hpp"
int main(){
    auto c = std::make_shared<Clients>("Dmytro", "Kovalenko", "+380990288191", "dimitri.yu.kovalenko@gmail.com",
                        1564356543);
    //c->Print();
    auto c1 = std::make_shared<Clients>("Dmytro", "Kovalenko", "+380990288191", "dimitri.yu.kovalenko@gmail.com",
                        1564356543);
    //c1->Print();

    auto m = std::make_shared<Masters>("Arsen", "Romanenko", "+380990288191", 15, 1000, "Aboba");
    //m->Print();
    auto d = std::make_shared<Devices>("IPhone", "Seven", "It exploded");
    //std::cout<<"-------------------\n";
    TypeTable<Clients> ClientsTable;
    TypeTable<Devices> DevicesTable;
    TypeTable<Masters> MastersTable;
    ClientsTable.AddItem(c);
    ClientsTable.AddItem(c1);
    DevicesTable.AddItem(d);
    MastersTable.AddItem(m);
    std::cout << "====Clients Table====\n";
    ClientsTable.Print();
    std::cout << "====Masters Table====\n";
    MastersTable.Print();
    std::cout << "====Devices Table====\n";
    DevicesTable.Print();
    return 0;
}