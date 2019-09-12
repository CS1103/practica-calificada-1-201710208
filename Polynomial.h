//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H

#include <vector>
#include <iostream>

using namespace std;
struct elem{
    elem* next;
    int exp;
    double coef;
};


class Polynomial {
private:
    int grado;
    elem* head;
    elem* tail;
    int exp;
    double coef;


public:
    Polynomial(){
        head= nullptr;
        tail= nullptr;


    }


    ~Polynomial();


    void insert(int pos, double num) {
        elem *tmp1 = head;
        while (tmp1 != nullptr) {
            if (tmp1->exp = pos) {
                cout << "Grado existenten insertar otro grado \n";
            } else
                tmp1 = tmp1->next;
        }
        elem *tmp = head;
        elem *nuevo = new elem;
        nuevo->exp = pos;
        nuevo->coef = num;
        elem *aux;
        int cnt = 0;
        while (tmp->next != nullptr) {
            if (cnt == pos - 1) {
                tmp->exp = pos;
                aux->next = nuevo;
                nuevo->next = tmp->next;
            }
            cnt++;
            tmp = tmp->next;
            aux = tmp;
        }
    }

void auto(Polynomial p1){
        Polynomial p2;
        elem* tmp=p1.head;
        p2.head=p1.head;
        while(tmp->next!=nullptr){
            p1.coef=p2.coef;
            p1.exp=p2.exp;
            tmp=tmp->next;
        }
            }


int grade(){
        elem* tmp=head;
        int cnt;
        while (tmp !=nullptr){
            cnt++;
            tmp=tmp->next;
            grado=cnt;
        }
        return grado;
    }

Polynomial suma (Polynomial p1, Polynomial p2){
        Polynomial p3;
        elem* tmp=p1.head;
        while(tmp!=nullptr){
            if(p1.exp==p2.exp){
                p3.coef=p1.coef+p2.coef;


            }

        }
        elem* tmp1=p2.head;
    }




};

#endif //POLINOMIO_POLINOMIO_H
