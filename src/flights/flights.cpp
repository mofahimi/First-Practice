#include "flights.hpp"
#include "./../include/uuid.hpp"
#include <iostream>

Flights::Flights(int flight_num, std::string origin, std::string destination, std::string date, std::string time, int price, int emp_seat) : flight_num(flight_num), origin(origin), destination(destination), date(date), time(time), price(price), emp_seat(emp_seat)
{
  this->flight_id = generateUUID();
}
void Flights::availableFlights(std::string origin, std::string destination, std::string date, std::string time = "without time")
{
  for (auto flight : flights)
  {
    bool flag{false};
    if (time == "without time")
      for (auto flight : flights)
      {
        int x{1};
        x++;
        if (flight.origin == origin && flight.destination == destination && flight.date == date)
        {
          std::cout << "Flight ID: " << flight.flight_id << ", Flight Number: " << flight.flight_num << ", Origin: " << flight.origin << ", Destination: " << flight.destination << ", Date: " << flight.date << ", Time: " << flight.time << ", Price: " << flight.price << ", Available Seats: " << flight.emp_seat << std::endl;
        }
        if (x = flights.size())
          flag = true;
      }
    if (flag)
      break;
    if (flight.origin == origin && flight.destination == destination && flight.date == date && flight.time == time)
    {
      std::cout << "Flight ID: " << flight.flight_id << ", Flight Number: " << flight.flight_num << ", Origin: " << flight.origin << ", Destination: " << flight.destination << ", Date: " << flight.date << ", Time: " << flight.time << ", Price: " << flight.price << ", Available Seats: " << flight.emp_seat << std::endl;
    }
  }
}
Flights Flights::createFlights(int flight_num, std::string origin, std::string destination, std::string date, std::string time, int price, int emp_seat)
{
  Flights flight(flight_num, origin, destination, date, time, price, emp_seat);
  flights.push_back(flight);
  return flight;
}

