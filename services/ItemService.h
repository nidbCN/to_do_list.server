#pragma once

namespace to_do_list::services {
    class ItemService {
    public:
        // CRUD methods:
        void GetItemFromList(int listIndex, int itemId);
        void AddItemToList(int itemId);
        void RemoveItemFromList(int listIndex, int itemId);
    };
}

