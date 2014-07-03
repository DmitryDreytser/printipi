#ifndef DRIVERS_KOSSEL_H
#define DRIVERS_KOSSEL_H

#include "driver.h"

namespace drv {

class Kossel : public Driver {
    public:
        void getTemperature(int &extruder, int& platform) const;
        //constexpr std::size_t numAxis() const;
        constexpr static std::size_t numAxis() {
            return 4; //A, B, C + Extruder
        }
        float defaultMoveRate() const;
        float defaultFeedRate() const;
        float relativeTimeOfNextStep(int axisIdx, gparse::StepDirection &dir, float x, float y, float z, float e, float velx, float vely, float velz, float velExt) const;
};

}

#endif