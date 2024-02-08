#include <iostream>
#include "profile_declarations.hpp"

void Profile::set_name(std::string new_name)
{name=new_name;}
void Profile::set_age(int new_age)
{age=new_age;}
void Profile::set_city(std::string new_city)
{city=new_city;}
void Profile::set_country(std::string new_country)
{country=new_country;}
void Profile::set_pronouns(std::string new_pronouns)
{pronouns=new_pronouns;}
void Profile::set_hobbies(std::string new_hobbies)
{hobbies=new_hobbies;}

std::string Profile::get_name()
{return name;}
int Profile::get_age()
{return age;}
std::string Profile::get_city()
{return city;}
std::string Profile::get_country()
{return country;}
std::string Profile::get_pronouns()
{return pronouns;}
std::string Profile::get_hobbies()
{return hobbies;}

void dating_profile_title()
{
  std::cout << "==============\n";
  std::cout << "Dating Profile\n";
  std::cout << "==============\n\n";
}

void dating_profile_info(Profile x_user){
  std::cout << "Enter a number 1-7 to update your information\n";

  std::cout << "\n1. Name: " << x_user.get_name();
  std::cout << "\n\n2. Age: " << x_user.get_age();
  std::cout << "\n\n3. City: " << x_user.get_city();
  std::cout << "\n\n4. Country: " << x_user.get_country();
  std::cout << "\n\n5. Pronouns: " << x_user.get_pronouns();
  std::cout << "\n\n6. Hobbies: " << x_user.get_hobbies();
  std::cout << "\n\n\n7. Exit...\n\n";
}