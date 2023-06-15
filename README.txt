Name:Weicheng Yu

Student Number: 101195054

File lists:

For Entity Objects:
//Location class: A virtual base class for StoreLocation and WHLocation classes
//Header file for Subscriber class
Location.h 
//Subscriber class
Location.cc

//StoreLocation class:Concrete implementation for in-store product locations
//Header file for StoreLocation class
StoreLocation.h
//StoreLocation class
StoreLocation.cc

//WHLocation class:Concrete implementation for warehouse product locations
//Header file for WHLocation class
WHLocation.h
//WHLocation class
WHLocation.cc

//Product class:Contains information about the product, including the StoreLocation and WHLocations it is stored in
//Header file for Product class
Product.h
//Product class
Product.cc

For Container Objects:
//List class: A list of Products that can grow arbitrarily large
//Header file for List class
List.h
//List class
List.cc

//Queue class: A fist-in-first-out data structure for storing WHLocations
//Header file for Queue class
Queue.h
//Queue class
Queue.cc

For Control Objects:
//Store class: Provides an interface for interacting with inventory system
//Header file for Store class
Store.h
//Store class
Store.cc

//Control class: Controls the interaction between the Store and the user
//Header file for Control class
Control.h
//Control class
Control.cc


For View Objects:
//View class:Takes input from the user performing the tests
//Header file for View class
View.h
//View class
View.cc

Other:
//library for some information
defs.h
//main 
main.cc
//Compilation and execution instructions file
Makefile

Compilation and execution instructions:
Open a terminal in the folder that contains "assignment3"
Use the command "make"
And then use the command "./a3"