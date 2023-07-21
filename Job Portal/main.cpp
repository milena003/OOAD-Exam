#include "system.h"

int main () {
    User user1("Kate", "kate@gmail.com", "knows 3 languages");
    User user2("Mike", "mike@gmail.com", "");

    Job job1("Accountant", "monthly income", "with work experience", 250000, "ABC", "valid");
    Job job2("Software Engineer", "Develop software applications", "Bachelor's degree in Computer Science",
            800000.0, "ABC Company", "valid");
    Job job3("Translator", "help manager", "", 150000, "linguistic centre", "valid");

    System system;
    system.add_user(&user1);
    system.add_user(&user2);

    system.add_job(&job1);
    system.add_job(&job2);
    system.add_job(&job3);

    system.find_job("translator");
    system.notification_apply_job(&user1);
    system.notification_apply_job(&user2); 
    return 0;
}