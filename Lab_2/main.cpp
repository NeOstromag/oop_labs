   
#include "hypocycloid.h"

using namespace Prog2;


int main(){

    double fi,x,y,R,r,d;

    x =  chat_x();
    y =  chat_y();

    R =  chat_R();
    r =  chat_r();
    d =  chat_d();

    std::cout <<"\n";

    Point point(x,y);
    hypo hippo(point,R,r,d);

    while (true)
    {

        switch (menu())

        {
            case 1: {
                fi =  chat_fi();
                std::cout << hippo.coord(fi);
                std::cout<<"\n";
                break;
            }

            case 2: {
                std::cout << "R = " << hippo.get_R() << std::endl;
                std::cout << "r = " << hippo.get_r() << std::endl;
                std::cout<<"\n";
                break;
            }

            case 3: {
                fi =  chat_fi();
                std::cout << hippo.radius_of_curvature(fi);
                std::cout<<"\n";
                break;
            }

            case 4: {
                int k = hippo.type();
                if (k == 1)
                    std:: cout<<"обыкновенная\n";
                if (k == 2)
                    std::cout<<"укороченная\n";
                if (k == 3)
                    std::cout<<"удлиненная\n";
                std::cout<<"\n";
                break;
            }

            case 5: {
                fi =  chat_fi();
                std::cout << hippo.sec_square(fi);
                std::cout<<"\n";
                break;
            }

            case 6: {
                return EXIT_SUCCESS;
            }

            default: { return (EXIT_SUCCESS); }
        }
    }


}
