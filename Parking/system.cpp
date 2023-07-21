#include "system.h"


void System::add_space (Space* sp) {
    m_space.push_back(sp);
}

void System::book_space(User* u) {
    for (auto& i : m_space) {
        if (i->is_available()) {
            m_reservation[u] = i;
            i->set_status("occupied");
            break;
        }
    }
}

double System::calculate_price (const SpaceSize& size, int duration) {
    double cost = 0.0;
    SpaceSize sp_size = SpaceSize::Compact;
    for (auto& i : m_space) {
        if (i->get_size() == size) {
            sp_size = size;
            break;
        }
    }
    
    switch(sp_size) {
    case SpaceSize::Compact:
        cost = duration * compact;
        break;
    case SpaceSize::Regular:
        cost = duration * regular;
        break;
    case SpaceSize::Large:
        cost = duration * large;
        break;
    }
    return cost;
}

void System::save_report () {
    std::string name = "report.txt";
    std::ofstream file (name);

    if (file.is_open()) {
        int compact_count = 0;
        int regular_count = 0;
        int large_count = 0;
        double compact_profit = 0.0;
        double regular_profit = 0.0;
        double large_profit = 0.0;
        int occupied_count = 0;

        for (auto& i : m_space) {
            switch (i->get_size()) {
            case SpaceSize::Compact:
                ++compact_count;
                if (i->get_status() == "occupied") {
                    ++occupied_count;
                    compact_profit += compact;
                }
                break;
            case SpaceSize::Regular:
                ++regular_count;
                if (i->get_status() == "occupied") {
                    ++occupied_count;
                    regular_profit += regular;
                }
                break;
            case SpaceSize::Large:
                ++large_count;
                if (i->get_status() == "occupied") {
                    ++occupied_count;
                    large_profit += large;
                }
                break;
            }
        }       
        file << "Compact Spaces: " << compact_count << std::endl;
        file << "Regular Spaces: " << regular_count << std::endl;
        file << "Large Spaces: " << large_count << std::endl;
        file << "Occupied Spaces: " << occupied_count << std::endl;
        file << "Compact Profit: $" << compact_profit << std::endl;
        file << "Regular Profit: $" << regular_profit << std::endl;
        file << "Large Profit: $" << large_profit << std::endl;
    }
    file.close();
}