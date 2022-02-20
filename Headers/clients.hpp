#pragma once
#include <string>
#include <iostream>

#define NO_MEMBER "Unknown"
class Clients{
    private:
        std::string m_first_name;
        std::string m_second_name;
        std::string m_father_name;
        std::string m_phone_number;
        std::string m_email;
        size_t m_card_number;
        size_t m_id;
    public:
    static size_t stm_id;
        Clients(std::string first_name, std::string second_name, std::string phone_number, 
            std::string email, size_t card_number, std::string father_name ="") : m_first_name(first_name), m_card_number(card_number), m_email(email), 
            m_father_name(father_name), m_second_name(second_name), m_phone_number(phone_number){
                stm_id++;
                m_id = stm_id;
        }
        size_t Get_ID() const{
            return m_id;
        }
        std::string Get_First_Name() const{
            return m_first_name;
        }
        std::string Get_Second_Name() const{
            return m_second_name;
        }
        std::string Get_Father_Name() const{
            if(m_father_name != "")return m_father_name;
            else return NO_MEMBER;
        }
        std::string Get_Phone_Number() const{
            return m_phone_number;
        }
        std::string Get_Email() const{
            return m_email;
        }
        size_t Get_Card() const{
            return m_card_number;
        }
        void Print() const{
            std::cout << "First name:\t" << Get_First_Name() << "\nSecond name:\t" << Get_Second_Name()
            <<"\nFather name:\t" << Get_Father_Name() << "\nPhone:\t" << Get_Phone_Number()
            << "\nCard:\t" << Get_Card() << "\nEmail:\t" << Get_Email() << "\nID\t" << Get_ID() << "\n";
        }
};
size_t Clients::stm_id(0);