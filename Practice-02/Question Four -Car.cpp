#include<iostream>
#include<string>
#define _CLEAR_SCREEN system("cls");

class Car {
private:
	int year;
	std::string company;
	std::string model;
public:
	void setCarInfo(int carYear,std::string companyName,std::string carModel)
	{ 
		carYear = 0;
		year = carYear;
		company = companyName;
		model = carModel;
	}
	const void getCarInfo()
	{
		std::cout << " Company........" << company << std::endl;
		std::cout << " Model.........." << model << std::endl;
		std::cout << " Year..........." << year << std::endl;
	}
};

 typedef struct _cardata {

	int setYear = 0;
	std::string setCompany;
	std::string setModel;

}CarData;

int main()
{   
    CarData car;

	std::cout << " Insert the car properties - (Company,Model,Year)\n\n";

	std::cout << " Company name >>> ";
	std::cin >> car.setCompany;
	
	std::cout << "\n Car model >>> ";
	std::cin >> car.setModel;

	std::cout << "\n Car year >>> ";
	std::cin >> car.setYear;

    Car carOne;
	carOne.setCarInfo(car.setYear,car.setCompany,car.setModel);
	_CLEAR_SCREEN;
	carOne.getCarInfo();

	return 0;
}