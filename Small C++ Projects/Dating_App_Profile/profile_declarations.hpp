#ifndef profile_declarations
#define profile_declarations
#include <iostream>

class Profile{

  private:
    std::string name, city, country, pronouns;
    int age=0;
    std::string hobbies;
  public:

    void set_name(std::string new_name);
    void set_age(int new_age);
    void set_city(std::string new_city);
    void set_country(std::string new_country);
    void set_pronouns(std::string new_pronouns);
    void set_hobbies(std::string new_hobbies);

    std::string get_name();
    int get_age();
    std::string get_city();
    std::string get_country();
    std::string get_pronouns();
    std::string get_hobbies();
};

void dating_profile_title();
void dating_profile_info(Profile x_user);

#endif