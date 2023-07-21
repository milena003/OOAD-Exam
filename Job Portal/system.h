#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include <iostream>
#include "job_opening.h"
#include "user.h"

class System {
public:
    void add_user (User*);
    void add_job (Job*);

    void find_job (const std::string&);
    void notification_apply_job (User*);   
    bool matching_criteria(Job*, User*);

private:
    std::vector<Job*> m_jobs;
    std::vector<User*> m_users;
};

#endif //SYSTEM_H
