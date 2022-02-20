#pragma once
#include <string>
#include <iostream>
class Devices{
    size_t m_id;
    std::string m_name;
    std::string m_model;
    std::string m_breakage;
    public:
    static size_t stm_id;
    Devices(std::string name, std::string model, std::string breakage) : m_name(name), m_model(model),
            m_breakage(breakage){
                stm_id++;
                m_id = stm_id;
            }
    size_t Get_ID() const{
        return m_id;
    }
    std::string Get_Name() const{
        return m_name;
    }
    std::string Get_Model() const{
        return m_model;
    }
    std::string Get_Breakage() const{
        return m_breakage;
    }
    void Print() const{
        std::cout << "ID:\t" << Get_ID() << "\nName:\t" << Get_Name() << "\nModel:\t" << Get_Model()
        << "\nBreakage:\t" << Get_Breakage() << "\n";
    }
};
size_t Devices::stm_id = 0;