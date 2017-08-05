#ifndef __BOOKINGMANAGER_H__
#define __BOOKINGMANAGER_H__

class Passenger;

class BookingManager {
    Passenger &passenger;
    public:
    BookingManager(Passenger &passenger);
    ~BookingManager() = default;
};

#endif
