#include <iostream>
#include <string>
class Student 
{
    public:
        explicit Student (std::string n, int a) : name(n), age(a)
        {}

        void setName (std::string n)
        {
            name = n;
        }

        std::string getName () const
        {
            return name;
        }

        void setAge (int a)
        {
            age = a;
        }

        int getAge () const
        {
            return age;
        }
        

        bool isOlder () const
        {
            bool older;

            if (age >= 18)
            {
                older = true;
            }
            else
            {
                older = false;
            }

            return older;
        }

        void print ()
        {
            std::cout << "Students name:" << name << std::endl;
            std::cout << "Students age:" << age << std::endl;
            
            if (isOlder())
            {
                std::cout << "Student is an adult." << std::endl;
            }
            else
            {
                std::cout << "Student is a minor." << std::endl;
            }
        }

        private:
        std::string name;
        int age;
};