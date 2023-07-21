#ifndef TABLE_H
#define TABLE_H

enum class Status {
    Available,
    Booked
};

class Table {
public:
    Table () = default;
    Table (int, int, const Status&);

    int get_number () const;
    int get_capacity () const;
    Status get_status () const;

    void set_status (const Status&);

private:
    int m_table_number;
    int m_capacity;
    Status m_status;
};

#endif //TABLE_H