//
//  mylib.h
//  Practica Calificada
//
//  Created by Fiorella Flores on 4/3/24.
//

#ifndef mylib_h
#define mylib_h


class Date
{
    public:
        explicit Date(int d, int m, int y) : day{d}, year{y}
    {
        if (m >= 1 && m <= 12)
        {
            month = m;
        }
    }
    
    void setDay(int d)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (d >= 1 && d <= 31)
            {
                day = d;
            }
            else
            {
                std::cout << "Invalid day." << std::endl;
            }
        }
        else if (month == 2)
        {
            if (isLeapYear())
            {
                if (d >= 1 && d <= 29)
                {
                    day = d;
                }
                else
                {
                    std::cout << "Invalid day." << std::endl;
                }
            }
            else
            {
                if (d >= 1 && d <= 28)
                {
                    day = d;
                }
                else
                {
                    std::cout << "Invalid day." << std::endl;
                }
            }
        }
        else
        {
            if (d >= 1 && d <= 30)
            {
                day = d;
            }
            else
            {
                std::cout << "Invalid day." << std::endl;
            }
        }
    }
        
    void setMonth(int m)
    {
        if (m >= 1 && m <= 12)
        {
            month = m;
        }
        else
        {
            std::cout << "Invalid month." << std::endl;
        }
    }
        
    void setYear(int y)
    {
        if ( y >= 1900 && y <= 2050)
        {
            year = y;
        }
        else
        {
            year = 1900;
        }
    }
    
    
    int getDay() const
    {
        return day;
    }
    
    int getMonth() const
    {
        return month;
    }
    
    int getYear() const
    {
        return year;
    }
      
    
    void displayDate() const
    {
        std::cout << day << " / " << month << " / " << year << std::endl;
    }
    
    bool isLeapYear() const
    {
        bool LeapYear;

        if (year % 400 == 0)
        {
            LeapYear = true;
        }
        else if (year % 100 == 0)
        {
            LeapYear = false;
        }
        else if (year % 4 == 0)
        {
            LeapYear = true;
        }
        else
        {
            LeapYear = false;
        }
        
        return LeapYear;
    }
    

    private:
        int day;
        int year;
        int month{1};
};

#endif /* mylib_h */
