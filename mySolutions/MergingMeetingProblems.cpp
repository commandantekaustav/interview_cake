/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Your company built an in-house calendar tool called HiCal. You want to add a
 * feature to see the times in a day when everyone is available.
 *
 * To do this, you’ll need to know when any team is having a meeting. In HiCal,
 * a meeting is stored as an instance of a Meeting class with integer member
 * variables startTime and endTime. These integers represent the number of
 * 30-minute blocks past 9:00am.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*
class Meeting{
private:
    // number of 30 min blocks past 9:00 am
    unsigned int startTime_;
    unsigned int endTime_;

public:
    Meeting() :
            startTime_(0), endTime_(0){}

    Meeting(unsigned int startTime, unsigned int endTime) :
            startTime_(startTime), endTime_(endTime){}

    unsigned int getStartTime() const{
        return startTime_;
    }

    void setStartTime(unsigned int startTime){
        startTime_ = startTime;
    }

    unsigned int getEndTime() const{
        return endTime_;
    }

    void setEndTime(unsigned int endTime){
        endTime_ = endTime;
    }

    bool operator==(const Meeting& other) const{
        return
                startTime_ == other.startTime_
                && endTime_ == other.endTime_;
    }
};
*/

/* for example;
 * Meeting meeting1(2, 3);  // meeting from 10:00 – 10:30 am
 * Meeting meeting2(6, 9);  // meeting from 12:00 – 1:30 pm
 *
 * Write a function mergeRanges() that takes a vector of multiple meeting time ranges
 * and returns a vector of condensed ranges.
 *
 * For example, given:
 *      [Meeting(0, 1), Meeting(3, 5), Meeting(4, 8), Meeting(10, 12), Meeting(9, 10)]
 *
 * your function would return;
 *      [Meeting(0, 1), Meeting(3, 8), Meeting(9, 12)]
 *
 * Do not assume the meetings are in order. The meeting times are coming from multiple teams.
 *
 * Write a solution that's efficient even when we can't put a nice upper bound on the
 * numbers representing our time ranges. Here we've simplified our times down to the
 * number of 30-minute slots past 9:00 am. But we want the function to work even for
 * very large numbers, like Unix timestamps. In any case, the spirit of the challenge
 * is to merge meetings where startTime and endTime don't have an upper bound.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

//#include <iostream>
//#include <vector>

// C++11 lest unit testing framework
#include <lest.hpp>

// tests



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Meeting {
private:
    // number of 30 min blocks past 9:00 am
    unsigned int startTime_;
    unsigned int endTime_;

public:
    Meeting() :
            startTime_(0),
            endTime_(0) {
    }

    Meeting(unsigned int startTime, unsigned int endTime) :
            startTime_(startTime),
            endTime_(endTime) {
    }

    unsigned int getStartTime() const {
        return startTime_;
    }

    void setStartTime(unsigned int startTime) {
        startTime_ = startTime;
    }

    unsigned int getEndTime() const {
        return endTime_;
    }

    void setEndTime(unsigned int endTime) {
        endTime_ = endTime;
    }

    bool operator==(const Meeting &other) const {
        return
                startTime_ == other.startTime_ && endTime_ == other.endTime_;
    }
};

bool compareMeetingsByStartTime(const Meeting &firstMeeting,
                                const Meeting &secondMeeting) {
    return firstMeeting.getStartTime() < secondMeeting.getStartTime();
}

vector<Meeting> mergeRanges(const vector<Meeting> &meetings) {
    // sort by start time
    vector<Meeting> sortedMeetings(meetings);
    sort(sortedMeetings.begin(), sortedMeetings.end(), compareMeetingsByStartTime);

    // initialize mergedMeetings with the earliest meeting
    vector<Meeting> mergedMeetings;
    mergedMeetings.push_back(sortedMeetings.front());

    for (const Meeting &currentMeeting : sortedMeetings) {
        Meeting &lastMergedMeeting = mergedMeetings.back();

        if (currentMeeting.getStartTime()
            <= lastMergedMeeting.getEndTime()) {
            // if the current meeting overlaps with the last merged meeting, use the
            // later end time of the two
            lastMergedMeeting.setEndTime(max(lastMergedMeeting.getEndTime(),
                                             currentMeeting.getEndTime()));
        } else {
            // add the current meeting since it doesn't overlap
            mergedMeetings.push_back(currentMeeting);
        }
    }

    return mergedMeetings;
}

const lest::test tests[] = {
        {CASE("meetings overlap") {
            const auto meetings = vector<Meeting>{Meeting(1, 3), Meeting(2, 4)};
            const auto actual = mergeRanges(meetings);
            const auto expected = vector<Meeting>{Meeting(1, 4)};
                    EXPECT(actual == expected);
        }},

        {CASE("meetings touch") {
                 const auto meetings = vector<Meeting>{Meeting(5, 6), Meeting(6, 8)};
                 const auto actual = mergeRanges(meetings);
                 const auto expected = vector<Meeting>{Meeting(5, 8)};
                         EXPECT(actual == expected);
             }},

        {CASE("meeting contains other meeting") {
                 const auto meetings = vector<Meeting>{Meeting(1, 8), Meeting(2, 5)};
                 const auto actual = mergeRanges(meetings);
                 const auto expected = vector<Meeting>{Meeting(1, 8)};
                         EXPECT(actual == expected);
             }},

        {CASE("meetings stay separate") {
                 const auto meetings = vector<Meeting>{Meeting(1, 3), Meeting(4, 8)};
                 const auto actual = mergeRanges(meetings);
                 const auto expected = vector<Meeting>{Meeting(1, 3), Meeting(4, 8)};
                         EXPECT(actual == expected);
             }},

        {CASE("multiple merged meetings") {
                 const auto meetings = vector<Meeting>{Meeting(1, 4), Meeting(2, 5), Meeting(5, 8)};
                 const auto actual = mergeRanges(meetings);
                 const auto expected = vector<Meeting>{Meeting(1, 8)};
                         EXPECT(actual == expected);
             }},

        {CASE("meetings not sorted") {
                 const auto meetings = vector<Meeting>{Meeting(5, 8), Meeting(1, 4), Meeting(6, 8)};
                 const auto actual = mergeRanges(meetings);
                 const auto expected = vector<Meeting>{Meeting(1, 4), Meeting(5, 8)};
                         EXPECT(actual == expected);
             }},

        {CASE("one long meeting contains smaller meetings") {
                 const auto meetings = vector<Meeting>{Meeting(1, 10), Meeting(2, 5), Meeting(6, 8),
                                                       Meeting(9, 10), Meeting(10, 12)};
                 const auto actual = mergeRanges(meetings);
                 const auto expected = vector<Meeting>{Meeting(1, 12)};
                         EXPECT(actual == expected);
             }},

        {CASE("sample input") {
                 const auto meetings = vector<Meeting>{Meeting(0, 1), Meeting(3, 5), Meeting(4, 8),
                                                       Meeting(10, 12), Meeting(9, 10)};
                 const auto actual = mergeRanges(meetings);
                 const auto expected = vector<Meeting>{Meeting(0, 1), Meeting(3, 8), Meeting(9, 12)};
                         EXPECT(actual == expected);
             }},
};

int main(int argc, char **argv) {

    const auto meetings = vector<Meeting>{Meeting(1, 4), Meeting(3, 5), Meeting(5, 8)};

    cout<<"\nBefore Merging:";
    for(auto x : meetings)
        cout <<"\nstart time: "<<x.getStartTime()<<", end time: " << x.getEndTime();

    const auto mergedMeetings = mergeRanges(meetings);
    cout<<"\nAfter Merging:";
    for(auto x : mergedMeetings)
        cout <<"\nstart time: "<<x.getStartTime()<<", end time: " << x.getEndTime();

    return lest::run(tests, argc, argv);
}