#include <string>
#include <iostream>

#define NO_MEMBER "Unknown"
class Masters{
    private:
        std::string m_first_name;
        std::string m_second_name;
        std::string m_father_name;
        std::string m_phone_number;
        size_t m_experience;
        size_t m_salary;
        size_t m_id;
    public:
    static size_t stm_id;
        Masters(std::string first_name, std::string second_name, std::string phone_number, 
            size_t experience, size_t salary, std::string father_name ="") : m_first_name(first_name), m_experience(experience), m_salary(salary), 
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
        size_t Get_Salary() const{
            return m_salary;
        }
        size_t Get_Experience() const{
            return m_experience;
        }
        void Print() const{
            std::cout << "First name:\t" << Get_First_Name() << "\nSecond name:\t" << Get_Second_Name()
            <<"\nFather name:\t" << Get_Father_Name() << "\nPhone:\t" << Get_Phone_Number()
            << "\nExperience:\t" << Get_Experience() << "\nSalary:\t" << Get_Salary() << "\nID\t" << Get_ID() << "\n";
        }
};
size_t Masters::stm_id(0); 


/*add MAster {chel}
add spec {shtuka}
add RelTable Master[id] Spec[id] = chel shtuka*/


