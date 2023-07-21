#ifndef JOB_OPENING_H
#define JOB_OPENING_H
#include <string>

class Job {
public:
    Job () = default;
    Job (const std::string&, const std::string&, const std::string&, double, const std::string&, const std::string&);

    void set_status (const std::string& status);
    std::string get_requirement () const;
    std::string get_status () const;

private:
    std::string m_job_title;
    std::string m_job_description;
    std::string m_job_requirement;
    double m_salary;
    std::string m_job_company;
    std::string m_status;
};

#endif //JOB_OPENING_H