#pragma once


namespace shot {

class Manager final {
public:

    //! @brief Shared Manager
    static Manager* shared();


private:
    static Manager* s_shared;

};

}; // namespace shot
