#include "LogMaker.h"

std::string to_do_list::utils::LogMaker::MakeMatchLog(
        const std::string &methodName) {
    auto mainTemplate = "Match method ";
    auto ret = mainTemplate + methodName + ".";
    return ret;
}

std::string to_do_list::utils::LogMaker::MakeMatchLog(
        const std::string &methodName,
        const std::string &arg0Name,
        const std::string &arg0Value) {

    auto ret = MakeMatchLog(methodName) + arg0Name + ": " + arg0Value;
    return ret;
}

std::string to_do_list::utils::LogMaker::MakeMatchLog(
        const std::string &methodName,
        const std::string &arg0Name,
        const std::string &arg0Value,
        const std::string &arg1Name,
        const std::string &arg1Value) {

    auto ret = MakeMatchLog(methodName, arg0Name, arg0Value)
               + ", " + arg1Name + ": " + arg1Value;
    return ret;
}
