#include <iostream>

int main(void){
    int edad, tipo, restante, descuento, precioF, desc, x1, ins;

    std  :: cout<<"Buenos dias, ¿cual es su edad?";
    std :: cin >> edad;

    if ( edad > 12)
    {
      std :: cout<<"¿Que tipo de cliente es?";
    }
    else
    {
      std :: cout<<"Usted no tiene la edad suficiente para realizar una compra";
      return 0;
    }
    std :: cout<<"Se le aplicara un descuento dependiendo del tipo de cliente";
    std :: cout<<"1. Estudiante";
    std :: cout<<"2. Adulto Mayor";
    std :: cout<<"3. Ver todo";
    std :: cin >> tipo;

    switch (tipo)
    {
    case 1:
    std :: cout<<"Tiene un descuento del 25%";
    std :: cout<<"Combo Hamburguesa: $8\nPizza personal: $9\nAlmuerzo ejecutivo: $10";
        break;
    case 2:
    std :: cout<<"Tiene un descuento del 30%";
    std :: cout<<"Sopa Nutritiva: $6\nPlato Casero: $9\nPostre + Café: $5";
        break;
    case 3:
    std :: cout<<"Adultos mayores tienen descuento de 30% y Estudiantes de 25%";
    std :: cout<<"Sopa Nutritiva: $6\nPlato Casero: $9\nPostre + Café: $5";
    std :: cout<<"Combo Hamburguesa: $8\nPizza personal: $9\nAlmuerzo ejecutivo: $10";
        break;
    
    default:
    std :: cout<<"Ha seleccionado una opcion invalida";
       return 0;
        
    }
    std :: cout<<"Ingrese el precio de lo que desea comprar y el tipo de descuento de cliente";
    std :: cout<<"Precio:";
    std :: cin >> x1;
    std :: cout<<"Descuento";
    std :: cin >> descuento;
    
    x1*descuento/100 = desc;
    desc - x1 = precioF;

    std :: cout<<"Por favor ingrese el saldo que posee, sin puntos decimales";
    std :: cin >> saldo;

    if (saldo > 7)
    {
        saldo - x1 = restante
        std :: cout<<"Su compra fue exitosa y tiene saldo restante de $" << restante << std :: endl; 

    }
    else
    {
        saldo - x1 = ins
        std :: cout<<"No tiene el saldo suficiente para realizar la compra, le hacen falta $"<< ins << std :: endl;
    }
    return 0;
}