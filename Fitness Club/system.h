#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include <fstream>
#include "member.h"

const std::string FileName = "report.txt";

class System {
public:
    void add_member (Member*);
    void upgrade_level (Member*, const Membership&);
    void downgrade_level (Member*, const Membership&);
    void save_report ();

private:
    std::vector <Member*> m_members;
};

#endif //SYSTEM_H
