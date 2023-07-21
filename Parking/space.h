#ifndef SPACE_H
#define SPACE_H
#include <string>

enum class SpaceSize {
    Compact,
    Regular,
    Large
};

class Space {
public:
    Space () = default;
    Space (int, const SpaceSize&, const std::string&);

    int get_space_num () const;
    std::string get_status () const;
    SpaceSize get_size () const;

    void set_status (const std::string&);
    bool is_available ();

private:
    int m_space_number;
    SpaceSize m_size;
    std::string m_status;
};

#endif //SPACE_H