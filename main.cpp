#include <iostream>
#include <cstring>
#include "invalidHr.h"
#include "invalidMin.h"
#include "invalidSec.h"

using namespace std;

int main() {
    invalidHr hr;
    invalidMin min;
    invalidSec sec;

    string AMPM;
    int hour, minute, second;

    std::cin >> hour >> minute >> second >> AMPM;

    while(true){
        try{
            if (minute < 0 || minute > 59){
                throw min;
            }
            if (second < 0 || second > 59){
                throw sec;
            }
            if (hour < 0 || hour >= 12){
                throw hr;
            }else{
                if (AMPM == "PM"){
                    hour += 12;
                }
                break;
            }
        }catch (invalidHr &e) {
            hour = (hour + 12) % 12;
        }catch (invalidMin &e) {
            std::cout << e.what() << std::endl;
            break;
        }catch (invalidSec &e) {
            std::cout << e.what() << std::endl;
            break;
        }
    }

    std::cout << hour << ':' << minute << ':' << second << std::endl;

    return 0;
}
