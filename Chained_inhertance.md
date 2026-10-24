 Chained Inheritance.
 
 This program models a three-level inheritance hierarchy (Vehicle_Car_ ElectricCar) to demonstrate how specialized classes inherit and build upon parent properties.

The Class Hierarchy: The base Vehicle class defines generalized attributes (brand and year) under protected access so subclasses can reach them. 

The intermediate Car class publicly inherits from Vehicle and introduces seatingCapacity. Finally, the leaf ElectricCar class inherits from Car, adding a specialized batteryCapacityKWh property.Constructor Chaining & Data Flow:

 When an ElectricCar object is created in main(), constructor initialization lists pass data sequentially up the chain (ElectricCar passes arguments to Car, which passes them to Vehicle) so every layer properly initializes its own fields.
 
 Method Cascading: When displayElectricCarInfo() is called, it triggers displayCarInfo(), which in turn calls displayVehicleInfo().
 
  This cascades down the ancestry chain, allowing a single function call on the lowest derived object to print all inherited and local attributes cohesively.