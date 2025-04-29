#include <string>

#ifndef TRAVELER
#define TRAVELER
class Traveler
{
private:
  std::string id;
  std::string password;
  std::string fname;
  std::string lname;
  int pass_num;
  int nat_code;
  std::string nationality;

public:
  Traveler( std::string password, std::string fname, std::string lname, int pass_num, int nat_code, std::string nationality);
  static Traveler *createTraveler( std::string password, std::string fname, std::string lname, int pass_num, int nat_code, std::string nationality);
  static Traveler *edit(Traveler *traveler, std::string password, std::string fname, std::string lname, int pass_num, int nat_code, std::string nationality);
};

#endif