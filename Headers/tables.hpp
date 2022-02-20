#include <map>
#include "clients.hpp"
#include <memory>

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
};