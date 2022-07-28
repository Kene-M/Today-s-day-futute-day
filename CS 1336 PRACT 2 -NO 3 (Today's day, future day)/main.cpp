/*

    This program will read the the value of today and the
    elapsed days and display what day it is now and in the future.


1. Store the name of each day of the week.
2. Ask the user to enter today's numerical day.
3. Ask the user to enter the number of days elapsed since today.
4. Validate the input: check if today or elapsed days are less than 0.
        If they are then get the input from the user again.

5. Store the output if the value of today is 1 or more.
        Calculate and store the remainder of dividing the value of today by 7.
        Store the name of the date based on the remainder.

6. Store the output if the elapsed days are 1 or more.
        Calculate and store the remainder of dividing the value of today + elapsed days by 7.
        Store the name of the date based on the remainder.

7. Display today's day and the future day to the user.

*/

// This program will read the the value of today and the
// elapsed days and display what day it is now and in the future.

#include <iostream>
#include <string>    // To hold string values.

using namespace std ;

int main()
{
        // Declare integer variables.
    int today ;  // Numerical (integer) value of TODAY'S DAY.
    int futureDays ;  // Integer value of Days elapsed since TODAY.

        // Declare string variables.
    string date ;    // String to hold the CURRENT DATE.
    string futureDate ;  // String to hold the FUTURE DATE.

    string day1 = "Monday" ;  // Assign sting: "Monday" to day 1.
    string day2 = "Tuesday" ;  // Assign string: "Tuesday" to day 2.
    string day3 = "Wednesday" ;  // Assign string: "Wednesday" to day 3.
    string day4 = "Thursday" ;  // Assign string: "Thursday" to day 4.
    string day5 = "Friday" ;  // Assign string: "Friday" to day 5.
    string day6 = "Saturday" ;  // Assign string: "Saturday" to day 6.
    string day7 = "Sunday" ;  // Assign string: "Sunday" to day 7.

        // Ask the user to enter today's numerical day.
    cout << "Enter today's day: " ;
    cin >> today ;

        // Ask the user to enter the number of days elapsed since today.
    cout << "Enter the number of days elapsed since today: " ;
    cin >> futureDays ;

        // Validate the input. ( check if today or future days are less than 1 )
    if ( today <= 0 || futureDays <= 0)
    {
            // Ask the user again to enter today's numerical day.
        cout << endl << "Please enter TODAY'S DAY: " ;
        cin >> today ;

            // Ask the user again to enter the number of days elapsed since today.
        cout << "Please enter the number of days ELAPSED SINCE TODAY: " ;
        cin >> futureDays ;
    }

        // Store the output if the value of today is 1 or more.
    if ( today > 0 )
    {
            // Calculate and store the remainder of dividing the value of today by 7.
        today %= 7 ;

            // Store the name of the date if the remainder is 1 (Monday).
        if ( today == 1 )
            date = day1 ;

            // Store the name of the date if the remainder is 2 (Tuesday).
        else if ( today == 2 )
            date = day2 ;

            // Store the name of the date if the remainder is 3 (Wednesday).
        else if ( today == 3 )
            date = day3 ;

            // Store the name of the date if the remainder is 4 (Thursday).
        else if ( today == 4 )
            date = day4 ;

            // Store the name of the date if the remainder is 5 (Friday).
        else if ( today == 5 )
            date = day5 ;

            // Store the name of the date if the remainder is 6 (Saturday).
        else if ( today == 6 )
            date = day6 ;

            // Store the name of the date if the remainder is 7 or 0 (Sunday).
        else if ( today == 7 || today == 0 )
            date = day7 ;
    }

        // Store the output if the elapsed days are 1 or more
    if ( futureDays > 0 )
    {
            // Calculate and store the remainder of dividing the value of today + elapsed days by 7.
        futureDays = ( today + futureDays ) % 7 ;

            // Store the name of the future date if the remainder is 1 (Monday).
         if ( futureDays == 1 )
            futureDate = day1 ;

            // Store the name of the future date if the remainder is 2 (Tuesday).
        else if ( futureDays == 2 )
            futureDate = day2 ;

            // Store the name of the future date if the remainder is 3 (Wednesday).
        else if ( futureDays == 3 )
            futureDate = day3 ;

            // Store the name of the future date if the remainder is 4 (Thursday).
        else if ( futureDays == 4 )
            futureDate = day4 ;

            // Store the name of the future date if the remainder is 5 (Friday).
        else if ( futureDays == 5 )
            futureDate = day5 ;

            // Store the name of the future date if the remainder is 6 (Saturday).
        else if ( futureDays == 6 )
            futureDate = day6 ;

            // Store the name of the future date if the remainder is 7 or 0 (Sunday).
        else if ( futureDays == 7 || futureDays == 0 )
            futureDate = day7 ;
    }

        // Display today's day and the future day to the user.
    cout << "Today is " << date << " and the future day is " << futureDate << endl ;

    return 0 ;
}

/*

    RUN 1: Today: 3, Days elapsed: 10.

Enter today's day: 3
Enter the number of days elapsed since today: 10
Today is Wednesday and the future day is Saturday

    ---------------------------------------------------

    RUN 2: Today: 0, Days elapsed: 1 && Today: 1, Days elapsed: 4.

Enter today's day: 0
Enter the number of days elapsed since today: 1

Please enter TODAY'S DAY: 1
Please enter the number of days ELAPSED SINCE TODAY: 4
Today is Monday and the future day is Friday

    ----------------------------------------------------

    RUN 3: Today: 5, Days elapsed: 0. && Today: 10, Days elapsed: 2.

Enter today's day: 5
Enter the number of days elapsed since today: 0

Please enter TODAY'S DAY: 10
Please enter the number of days ELAPSED SINCE TODAY: 2
Today is Wednesday and the future day is Friday

    ----------------------------------------------------

    RUN 4: Today: 100, Days elapsed: 250.

Enter today's day: 100
Enter the number of days elapsed since today: 250
Today is Tuesday and the future day is Sunday

*/
