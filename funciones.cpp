#include<iostream>
#include<stdlib.h>
#include<string.h>
#include <fstream>
#include"Articulo.h"

using namespace std;

Articulo::Articulo(int cod, string desc, int sm, int sM, int ex, float prec, int bor)
{
    setCodigo(cod);
    setDescripcion(desc);
    setExistencias(ex);
    setStockMin(sm);
    setStockMax(sM);
    setPrecio(prec);
    //cout<<"Articulo"<<endl<<"Codigo: "<<getCodigo()<<endl<<"Descripcion: "<<getDescripcion()<<endl<<"Existencias: "<<getExistencia()<<endl<<"Stock minimo: "<<getStockMin()<<endl;
    //cout<<"Stock maximo: "<<getStockMax()<<endl<<"Precio: "<<getPrecio()<<endl;
}

Articulo::~Articulo()
{
    delete[]descripcion;
}

void Articulo::setCodigo(int cod)
{
    while(cod<0)
    {
        cout<<"Codigo incorrecto. Ingrese el codigo: "<<endl;
        cin>>cod;
    }
    codigo=cod;
}


void Articulo::setDescripcion(string desc)
{
    const char*vDesc=desc.data();
    int longitud=desc.size();
    longitud=longitud<25?longitud:24;
    strncpy(descripcion,vDesc,longitud);
    descripcion[longitud]='/0';
}

void Articulo::setExistencias(int ex)
{
    while(ex<0)
    {
        cout<<"Numero incorrecto. Ingrese las existencias: "<<endl;
        cin>>ex;
    }
    existencias=ex;
}

void Articulo::setStockMin(int sm)
{
    while(sm<0)
    {
        cout<<"Numero incorrecto. Ingrese el stock minimo: "<<endl;
        cin>>sm;
    }
    stockMin=sm;
}

void Articulo::setStockMax(int sM)
{
    while(sM<0)
    {
        cout<<"Numero incorrecto. Ingrese el stock maximo: "<<endl;
        cin>>sM;
    }
    stockMax=sM;
}

void Articulo::setPrecio(float prec)
{
    while(prec<0)
    {
        cout<<"Numero incorrecto. Ingrese el precio: "<<endl;
        cin>>prec;
    }
    precio=prec;
}

int Articulo::getCodigo()const
{
    return codigo;
}

string Articulo::getDescripcion()const
{
    return descripcion;
}

int Articulo::getExistencia()const
{
    return existencias;
}

int Articulo::getStockMin()const
{
    return stockMin;
}

int Articulo::getStockMax()const
{
    return stockMax;
}

float Articulo::getPrecio()const
{
    return precio;
}

void Articulo::setBorrado(int b)
{
    borrado=b;
}

int Articulo::getBorrado()const
{
    return borrado;
}

void Articulo::buscar(fstream &a)
{
    Articulo reg;
    a.clear();
    a.seekg(0,ios::beg);
    a.read(reinterpret_cast<char *>(&reg),sizeof(Articulo));
    while(!a.eof()&&reg.getCodigo()!=codigo)
    {
        a.read(reinterpret_cast<char *>(&reg),sizeof(Articulo));
    }
}
