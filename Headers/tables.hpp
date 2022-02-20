#pragma once

#include "clients.hpp"
#include "masters.hpp"
#include "devices.hpp"

#include <map>
#include <memory>
#include <vector>
template<class T>
class TypeTable{
    private:
    std::map<size_t, std::shared_ptr<T> > m_Table;
    
    public:
    bool AddItem(std::shared_ptr<T> item){
        m_Table[item->Get_ID()] = item;
        std::cout << "Added\n";
        return 1;
    }
    std::shared_ptr<T> GetItem(size_t ID) {
        if(m_Table.find(ID) != m_Table.end()) return m_Table[ID];
        else return nullptr;
    }
    void Print() const{ //Print every table's item 
        for(auto i : m_Table){
            i.second->Print();
        }
    }
};

class OwnershipTable{
    private:
    std::map<size_t, std::vector<size_t> > m_Table_C_to_D;
    std::map<size_t, size_t> m_Table_D_to_C;
    public:
    bool Relate(size_t Client_ID, size_t Device_ID){
        m_Table_C_to_D[Client_ID].push_back(Device_ID);
        m_Table_D_to_C[Device_ID] = Client_ID;
    }
};