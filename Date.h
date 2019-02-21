/**
 * TODO header
 */

#ifndef DATE_H
#define DATE_H

#include <string>

enum class Month {
    JANUARY = 1,
    FEBRUARY = 2,
    MARCH = 3,
    APRIL = 4,
    MAI = 5,
    JUNE = 6,
    JULY = 7,
    AUGUST = 8,
    SEPTEMBER = 9,
    OCTOBER = 10,
    NOVEMBER = 11,
    DECEMBER = 12
};

class Date {
public:
    static const unsigned MIN_YEAR = 1852;
    static const unsigned FIRST_MONTH = 1;
    static const unsigned LAST_MONTH = 12;


    Date();
    Date(unsigned d, unsigned m, unsigned y);
    Date(unsigned d, Month m, unsigned y);

    void setDay(const unsigned& DAY);
    void setMonth(const unsigned& MONTH);
    void setMonth(const Month& m);
    void setMonth(const std::string& MONTH);
    void setYear(const unsigned& YEAR);

    unsigned getDay() const;
    unsigned getMonth() const;
    Month getMonthEnum() const;
    std::string getMonthString() const;
    unsigned getYear() const;

private:
    unsigned day;
    unsigned month;
    unsigned year;
    bool correct;

    bool isCorrect();

    /**
     * @brief Determines if a given year is a leap year or a common year
     *
     * If the year is divisible by 4 and not divisible by 100 or
     * if the year is divisible by 400, then it's a leap year
     * (all divisions are integer divisions)
     * All the other cases, it's a common year
     *
     * @param year unsigned The year which will be checked
     * @return bool Is or isn't a leap year
     */
    bool isLeapYear();

    /**
     * @brief Return the total number of days contain in the month of a specific year
     *
     * @param monthIndex
     * @return The total number of days contains in the month
     */
    unsigned getMonthLength();
};


#endif DATE_H
