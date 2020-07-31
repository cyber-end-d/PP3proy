#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED

#include<fstream>

using namespace std;

class Articulo
{
public:
    Articulo(int=0,string="",int=0,int=0,int=0,float=0.0, int=0);
    ~Articulo();

    void setCodigo(int);
    void setDescripcion(string);
    void setExistencias(int);
    void setStockMin(int);
    void setStockMax(int);
    void setPrecio(float);
    void setBorrado(int);

    int getCodigo()const;
    string getDescripcion()const;
    int getExistencia()const;
    int getStockMin()const;
    int getStockMax()const;
    float getPrecio()const;
    int getBorrado()const;

    void buscar(fstream&);

private:
    int codigo;
    char descripcion[25];
    int existencias;
    int stockMin;
    int stockMax;
    float precio;
    int borrado;
};

#endif // ARTICULO_H_INCLUDED
