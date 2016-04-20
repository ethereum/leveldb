// PackageTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "leveldb/c.h"

#ifndef LEVELDB_PLATFORM_WINDOWS
int main(int argc, char* argv[])
{
    leveldb_benchmark(argc, argv);
    return 0;
}
#endif
