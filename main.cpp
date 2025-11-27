#include "ServiceStation.h"

#include "PassangerCar.h"
#include "CargoCar.h"

int main() {
	ServiceStation<PassengerCar> PassengerService;
	ServiceStation<CargoCar> CargoService;

	CargoCar cargo_fun_car("funnicar");
	PassengerCar passenger_sad_car("sadcar");

	CargoService.AddCar(cargo_fun_car);
	CargoService.AddCar(cargo_fun_car);
	CargoService.AddCar(cargo_fun_car);
	CargoService.AddCar(cargo_fun_car);
	CargoService.AddCar(cargo_fun_car);

	CargoService.AddCar(cargo_fun_car); //nuh uh

	//------

	PassengerService.AddCar(passenger_sad_car);
	PassengerService.AddCar(passenger_sad_car);
	PassengerService.AddCar(passenger_sad_car);
	PassengerService.AddCar(passenger_sad_car);
	PassengerService.AddCar(passenger_sad_car);

	PassengerService.AddCar(passenger_sad_car); //huh uh

	PassengerService.DisplayBrokenGarage();
	PassengerService.DisplayGarage();

	CargoService.DisplayBrokenGarage();
	CargoService.DisplayGarage();

	PassengerService.RepairAll();
	CargoService.RepairAll();

	PassengerService.DisplayBrokenGarage();
	PassengerService.DisplayGarage();

	CargoService.DisplayBrokenGarage();
	CargoService.DisplayGarage();


}	