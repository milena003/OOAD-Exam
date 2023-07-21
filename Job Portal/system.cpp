#include "system.h"


void System::add_user (User* user) {
    m_users.push_back(user);
}

void System::add_job (Job* job) {
    m_jobs.push_back(job);
}

void System::find_job (const std::string& criteria) {
    for (auto& it : m_jobs) {
        if (it->get_requirement().find(criteria) != std::string::npos) {
            it->set_status("invalid");
        }
    }
}

void System::notification_apply_job (User* user) {
    for (auto& it : m_jobs) {
        if (matching_criteria(it, user)) {
            std::cout << "Congratulations you're accepted" << std::endl;
        }
        else {
            std::cout << "Keep going" << std::endl;
        }
    }
}

bool System::matching_criteria(Job* job, User* user) {
    bool res = false;
    for(const auto& u : m_users) {
        if(u->get_name() == user->get_name() && job->get_requirement() == user->get_resume()) {
            std::cout << "Notification sent to " << user->get_info() << std::endl;
            res = true;
        }
    }
    return res;
}