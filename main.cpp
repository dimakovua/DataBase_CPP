#include "Headers/tables.hpp"
#include "Headers/masters.hpp"
int main(){
    auto c = std::make_shared<Clients>("Dmytro", "Kovalenko", "+380990288191", "dimitri.yu.kovalenko@gmail.com",
                        1564356543);
    c->Print();
    auto c1 = std::make_shared<Clients>("Dmytro", "Kovalenko", "+380990288191", "dimitri.yu.kovalenko@gmail.com",
                        1564356543);
    c1->Print();

    Masters m = Masters("Arsen", "Romanenko", "+380990288191", 15, 1000, "Aboba");
    m.Print();

    std::cout<<"-------------------\n";
    TypeTable<Clients> ClientTable;
    ClientTable.AddItem(c);
    ClientTable.AddItem(c1);
    ClientTable.GetItem(1)->Print();
    ClientTable.GetItem(2)->Print();
    return 0;
}