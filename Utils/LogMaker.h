#pragma once

#include <string>

namespace to_do_list::utils::log_maker {
    class LogMaker {
    public:
        static std::string MakeMatchLog(const std::string &methodName);

        static std::string MakeMatchLog(const std::string &methodName,
                                        const std::string &arg0Name,
                                        const std::string &arg0Value);

        static std::string MakeMatchLog(const std::string &methodName,
                                        const std::string &arg0Name,
                                        const std::string &arg0Value,
                                        const std::string &arg1Name,
                                        const std::string &arg2Value);

        LogMaker() { mainTemplate = "Match method "; }

    private:
        static std::string mainTemplate;
    };
}

