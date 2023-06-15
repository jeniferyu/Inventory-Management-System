#include <iostream>
#include <string>
#include <iomanip>
#include "Store.h"

//constructor
Store::Store(const string& n)
    :name(n)
{
    products = new List();
}

//destructor
Store::~Store(){
    delete products;
}

//other
void Store::findAvailableSLoc(StoreLocation** sloc){
    for (int i = 0; i < SLOCS; i++) {
        if(slocArray[i].isAvailable()) {
            *sloc = &(slocArray[i]);
            break;
        }
    } 
}

void Store::findAvailableWHLoc(WHLocation** whloc){
    for (int i = 0; i < WHLOCS; i++) {
        if(whlocArray[i].isAvailable()) {
            *whloc = &(whlocArray[i]);
            break;
        }
    } 
}

void Store::findProduct(const string& pNametofind, Product** ptoFind){
    products->findProduct(pNametofind,ptoFind);
    return;
}

void Store::receiveProduct(const string& pname, int quantity){
    Product* prod = NULL;
    cout<<"Receiving..."<<endl;
    products->findProduct(pname, &prod);
    if (prod==NULL){
        cout<<"Making new product"<<endl;
        StoreLocation* sloc;
        findAvailableSLoc(&sloc);
        prod = new Product(pname, sloc);
        products->add(prod);
        
    }


    WHLocation* bloc;
    while(quantity > 0){
        findAvailableWHLoc(&bloc);
        if (quantity > bloc->getCapacity()){
            bloc->add(pname, bloc->getCapacity());
            prod->addWHLocation(bloc);
            quantity -= bloc->getCapacity();
        }else{
            bloc->add(pname, quantity);
            prod->addWHLocation(bloc);
            quantity = 0;
        }
    }

    cout<<"stocking store location..."<<endl;
    prod->stockStoreLocation();

}

void Store::fillOrder(const string& product, int& quantity){
    Product* prod;
    findProduct(product, &prod);
    if (prod == NULL){
        return;
    }
    prod->fillOrder(quantity);
}


void Store::print(){
    cout<<"Store: "<<name<<endl;
}

void Store::printProducts(){
    products->print();
}


void Store::printStoreStock(){
    for (int i = 0; i < SLOCS; i++) {
        if(!slocArray[i].isAvailable())
            slocArray[i].print();
    }
}

void Store::printWareHouseStock(){
    for (int i = 0; i < WHLOCS; i++) {
        if(!whlocArray[i].isAvailable())
            whlocArray[i].print();
    }
}
