#include <iostream>
#include "profile_declarations.hpp"

int main() {

  std::string user_name, user_city, user_country, user_pronouns, user_hobbies;
  int user_age=0, menu_op=0;

  Profile new_user_1;

  dating_profile_title();

  std::cout << "Enter your information below\n\n";

  std::cout << "\nName: ";
  getline(std::cin, user_name);
  new_user_1.set_name(user_name);
  
  std::cout << "\n\nAge: ";
  std::cin >> user_age;
  if(user_age<18)
  {
    system("clear");
    std::cout << "Dating below 18 is not allowed.";
    return 0;
  }
  else
  {new_user_1.set_age(user_age);}
  
  std::cin.ignore();
  std::cout << "\n\nCity: ";
  getline(std::cin, user_city);
  new_user_1.set_city(user_city);

  std::cout << "\n\nCountry: ";
  getline(std::cin, user_country);
  new_user_1.set_country(user_country);

  std::cout << "\n\nPronouns: ";
  getline(std::cin, user_pronouns);
  new_user_1.set_pronouns(user_pronouns);

  std::cout << "\n\nHobbies: ";
  getline(std::cin, user_hobbies);
  new_user_1.set_hobbies(user_hobbies);

  do{

    system("clear");

    dating_profile_title();

    dating_profile_info(new_user_1);

    std::cin >> menu_op;

    switch(menu_op){
      case 1:
      {
        system("clear");
        std::cout << "Enter a new name: ";
        std::cin.ignore();
        getline(std::cin, user_name);
        new_user_1.set_name(user_name);
        break;
      }
      case 2:
      {
        system("clear");
        std::cout << "Enter a new age: ";
        std::cin.ignore();
        std::cin >> user_age;
        if(user_age<18)
        {
        system("clear");
        std::cout << "Dating below 18 is not allowed.";
        return 0;
        }
        else
        {new_user_1.set_age(user_age);}
        break;
      }
      case 3:
      {
        system("clear");
        std::cout << "Enter a new city: ";
        std::cin.ignore();
        getline(std::cin, user_city);
        new_user_1.set_city(user_city);
        break;
      }
      case 4:
      {
        system("clear");
        std::cout << "Enter a new country: ";
        std::cin.ignore();
        getline(std::cin, user_country);
        new_user_1.set_country(user_country);
        break;
      }
      case 5:
      {
        system("clear");
        std::cout << "Enter new pronouns: ";
        std::cin.ignore();
        getline(std::cin, user_pronouns);
        new_user_1.set_pronouns(user_pronouns);
        break;
      }
      case 6:
      {
        system("clear");
        std::cout << "Enter new hobbies: ";
        std::cin.ignore();
        getline(std::cin, user_hobbies);
        new_user_1.set_hobbies(user_hobbies);
        break;
      }
      case 7:
      {
        system("clear");
        return 0;
        break;
      }
      default:
      std::cout << "\nThat is not an option, enter a number 1-7\n";
    }
  }while(menu_op!=7);
}