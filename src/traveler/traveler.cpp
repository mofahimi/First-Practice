#include "traveler.hpp"
#include "./../include/uuid.hpp"



Traveler::Traveler(std::string password, std::string fname, std::string lname, int pass_num, int nat_code, std::string nationality): password(password), fname(fname), lname(lname), pass_num(pass_num), nat_code(nat_code), nationality(nationality) {
  this->id = generateUUID();
}
Traveler* Traveler::createTraveler( std::string password, std::string fname, std::string lname, int pass_num, int nat_code, std::string nationality) {
    Traveler *traveler = new Traveler( password, fname, lname, pass_num, nat_code, nationality);
  return traveler;
}
Traveler* Traveler::edit(Traveler *traveler, std::string password, std::string fname, std::string lname, int pass_num, int nat_code, std::string nationality){
    traveler->password = password;
    traveler->fname = fname;
    traveler->lname = lname;
    traveler->pass_num = pass_num;
    traveler->nat_code = nat_code;
    traveler->nationality = nationality;
    return traveler;
}