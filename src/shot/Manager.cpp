#include "Manager.hpp"


namespace shot {

Manager* Manager::s_shared = nullptr;

Manager* Manager::shared() {
    if (s_shared == nullptr) {
        s_shared = new (std::nothrow) Manager();
    }
};


}; // namespace shot
