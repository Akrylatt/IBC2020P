import random

# This script performs a simulation of the Birthday Paradox
# This solution does not count with such exeptions like twins or leap year

# How much tries there is for each number of participants - the higher it is the more accurate the result will be
numberOfExperiments = 1000

# for every number of participants from 2 to 265 (higher number has no sense to check as there is only 365 possible dates in year)
for k in range(2, 366):
    # counter of positive experiments = at least two participants of the same date of birth
    positive = 0
    # experiments sessions
    for j in range(numberOfExperiments):
        # storage of dates
        dates = list()
        # for every participant
        for i in range(k):
            # generates random number of date
            r = random.randint(1, 366)
            # if the number was not already generated than add it
            if not dates.__contains__(r):
                dates.append(r)
            else:
                # if it is not unique date add 1 to positive experiments counter
                positive = positive + 1
                # there is no need to continue, one pair was found lets break it
                break

    # counts the probability and rounds it as int
    probability = int((positive / numberOfExperiments) * 100)

    print("# The probability with " + str(k) +" guests is " + str(probability) + "%")

# OUT:
# The probability with 2 guests is 0%
# The probability with 3 guests is 0%
# The probability with 4 guests is 1%
# The probability with 5 guests is 3%
# The probability with 6 guests is 3%
# The probability with 7 guests is 5%
# The probability with 8 guests is 9%
# The probability with 9 guests is 7%
# The probability with 10 guests is 9%
# The probability with 11 guests is 15%
# The probability with 12 guests is 18%
# The probability with 13 guests is 20%
# The probability with 14 guests is 23%
# The probability with 15 guests is 26%
# The probability with 16 guests is 30%
# The probability with 17 guests is 32%
# The probability with 18 guests is 34%
# The probability with 19 guests is 38%
# The probability with 20 guests is 41%
# The probability with 21 guests is 43%
# The probability with 22 guests is 47%
# The probability with 23 guests is 49% <--
# The probability with 24 guests is 56%
# The probability with 25 guests is 56%
# The probability with 26 guests is 58%
# The probability with 27 guests is 61%
# The probability with 28 guests is 66%
# The probability with 29 guests is 66%
# The probability with 30 guests is 73%
# The probability with 31 guests is 70%
# The probability with 32 guests is 76%
# The probability with 33 guests is 77%
# The probability with 34 guests is 79%
# The probability with 35 guests is 79%
# The probability with 36 guests is 82%
# The probability with 37 guests is 84%
# The probability with 38 guests is 84%
# The probability with 39 guests is 87%
# The probability with 40 guests is 88%
# The probability with 41 guests is 89%
# The probability with 42 guests is 91%
# The probability with 43 guests is 91%
# The probability with 44 guests is 93%
# The probability with 45 guests is 93%
# The probability with 46 guests is 94%
# The probability with 47 guests is 94%
# The probability with 48 guests is 95%
# The probability with 49 guests is 96%
# The probability with 50 guests is 96%
# The probability with 51 guests is 97%
# The probability with 52 guests is 97%
# The probability with 53 guests is 97%
# The probability with 54 guests is 98%
# The probability with 55 guests is 98%
# The probability with 56 guests is 98%
# The probability with 57 guests is 99% <--
# The probability with 58 guests is 99%
# The probability with 59 guests is 99%
# The probability with 60 guests is 98%
# The probability with 61 guests is 99%
# The probability with 62 guests is 99%
# The probability with 63 guests is 99%
# The probability with 64 guests is 99%
# The probability with 65 guests is 99%
# The probability with 66 guests is 99%
# The probability with 67 guests is 99%
# The probability with 68 guests is 99%
# The probability with 69 guests is 99%
# The probability with 70 guests is 99%
# The probability with 71 guests is 99%
# The probability with 72 guests is 100%
# The probability with 73 guests is 99%
# The probability with 74 guests is 99%
# The probability with 75 guests is 100% <--
# The probability with 76 guests is 100%
# The probability with 77 guests is 100%
# The probability with 78 guests is 100%
# The probability with 79 guests is 100%
# The probability with 80 guests is 100%
# The probability with 81 guests is 99%
# The probability with 82 guests is 100%
# The probability with 83 guests is 100%
# The probability with 84 guests is 100%
# The probability with 85 guests is 100%
# The probability with 86 guests is 100%
# The probability with 87 guests is 100%
# The probability with 88 guests is 100%
# The probability with 89 guests is 100%
# The probability with 90 guests is 100%
# The probability with 91 guests is 100%
# The probability with 92 guests is 100%
# The probability with 93 guests is 100%
# The probability with 94 guests is 100%
# The probability with 95 guests is 100%
# The probability with 96 guests is 100%
# The probability with 97 guests is 100%
# The probability with 98 guests is 100%
# The probability with 99 guests is 100%
# The probability with 100 guests is 100%
# ...


