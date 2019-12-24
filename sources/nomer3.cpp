// Copyright 2019 DM00n <teamvortex@yandex.ru>

#include <iostream>
#include "nlohmann.hpp"

using json = nlohmann::json;

json changer(json obj) {
    json rez = json::array({});
    for (unsigned i = 0; i < obj[0].size(); ++i) {
        json tmp = json::object({});
        for (unsigned j = 0; j < obj.size(); ++j) {
            switch (j) {
                case 0:
                    tmp.push_back(json::object_t::
                                  value_type("ticker", obj[j][i]));
                    break;
                case 1:
                    tmp.push_back(json::object_t::
                                  value_type("id", obj[j][i]));
                    break;
                case 2:
                    tmp.push_back(json::object_t::
                                  value_type("desciption", obj[j][i]));
                    break;
                default:
                    break;
            }
        }
        rez += tmp;
    }
    return rez;
}
int main(){
    return 0;
}