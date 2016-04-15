#include "util/testharness.h"

int main(int argc, char** argv)
{
    if (argc > 1)
    {
        std::string setting = "LEVELDB_TESTS=";
        setting += argv[1];
        putenv(setting.c_str());
    }
    return leveldb::test::RunAllTests();
}
