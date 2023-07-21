#ifndef ROOM_H
#define ROOM_H
#include <string>

enum class RoomType {
    Single,
    Double,
    Suite
};

enum class Valid {
    Available, 
    Booked
};

class Room {
public:
    Room () = default;
    Room (int, const RoomType&, const Valid&);

    int get_room_number () const;
    RoomType get_room_type () const;
    Valid get_status () const;

    void set_status (const Valid&);

private:
    int m_number;
    RoomType m_type;
    Valid m_status;
};

#endif //ROOM_H

