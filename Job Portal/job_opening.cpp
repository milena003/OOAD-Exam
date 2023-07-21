#include "job_opening.h"


Job::Job (const std::string& title, const std::string& descr, const std::string& require, double money,
          const std::string& company, const std::string& status) {
    m_job_title = title;
    m_job_description = descr;
    m_job_requirement = require;
    m_salary = money;
    m_job_company = company;
    m_status = status;
}

void Job::set_status (const std::string& status) {
    m_status = status;
}

std::string Job::get_requirement () const {
    return m_job_requirement;
}

std::string Job::get_status () const {
    return m_status;
}