#pragma once

namespace to_do_list::services {
    class ListService {
    public:
        void AddList();
        void RemoveList(int listIndex);
    };
}