//
// Created by lena on 18.09.2021.
//

#ifndef LAB2_HYPOCYCLOID_H
#define LAB2_HYPOCYCLOID_H

#include <iostream>
#include <cmath>
#include <cstring>
#include <strstream>
#include <cstdio>



namespace Prog2{


    struct Point{ // координаты точки на плоскости
        double x, y;
        explicit Point(double x0 = 0, double y0 = 0) :x(x0), y(y0){}
        friend std::ostream& operator<< (std::ostream &out, const Point &p) {
            out << p.x << " " << p.y;
            return out;
        }
    };

    class hypo{
        private:
            double D ;   // длина от маленькой окр до гипоциклоиды
            double R ;   // радиус большой окружности
            double r ;   // радиус маленькой окружности
            Point start; //  начальная точка

        public:
            //конструктор
            explicit hypo();
            explicit hypo(Point start_point, double Rad = 5, double rad = 1, double dl = 1);


            //сеттеры
            hypo& set_R(double R0);
            hypo& set_r(double r0);
            hypo& set_D(double d0);


            //геттеры (4 пункт)
            [[nodiscard]] double get_R() const{ return R; }
            [[nodiscard]] double get_r() const{ return r; }
            [[nodiscard]] double get_D() const{ return D; }

            //другие методы
            [[nodiscard]] Point coord(double fi) const;                // 3 пункт
            [[nodiscard]] double radius_of_curvature(double fi) const; // 5 пункт
            [[nodiscard]] int type() const;                            // 6 пункт
            [[nodiscard]] double sec_square(double fi) const;          // 7 пунк

    };
}

//вспомгательные функции
int menu();
template<typename T>
T input();

double chat_R();
double chat_r();
double chat_d();
double chat_x();
double chat_y();
double chat_fi();

#endif //LAB2_HYPOCYCLOID_H
