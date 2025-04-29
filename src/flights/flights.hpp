#include <string>
#include <ctime>
#include <array>
#include <vector>

#ifndef FLIGHTS
#define FLIGHTS
class Flights
{
private:
  std::string flight_id;
  int flight_num;
  std::string origin;
  std::string destination;
  std::string date;
  std::string time;
  int price;
  int emp_seat;
  static std::vector<Flights> flights;

public:
  Flights(int flight_num, std::string origin, std::string destination, std::string date, std::string time, int price, int emp_seat) {}
  static void availableFlights(std::string origin, std::string destination, std::string date, std::string time = "without time" ) {}
  static Flights createFlights(int flight_num, std::string origin, std::string destination, std::string date, std::string time, int price, int emp_seat) {}
  static void clearFlights(){}
};

#endif