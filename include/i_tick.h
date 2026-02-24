#pragma once

namespace main_player::core::interfaces
{
    class i_tick
    {
    public:
        virtual void tick(const float& delta) = 0;
    };
}
