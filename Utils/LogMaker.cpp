//
// Created by gaein on 2021/4/21.
//

#include "LogMaker.h"

std::string to_do_list::utils::log_maker::LogMaker::MakeMatchLog(
        const std::string &methodName) {

    auto ret = mainTemplate + methodName + ".";
    return ret;
}

std::string to_do_list::utils::log_maker::LogMaker::MakeMatchLog(
        const std::string &methodName,
        const std::string &arg0Name,
        const std::string &arg0Value) {

    auto ret = MakeMatchLog(methodName) + arg0Name + ": " + arg0Value;
    return ret;
}

std::string to_do_list::utils::log_maker::LogMaker::MakeMatchLog(
        const std::string& methodName,
        const std::string& arg0Name,
        const std::string& arg0Value,
        const std::string& arg1Name,
        const std::string& arg2Value) {


    return std::string();
}
