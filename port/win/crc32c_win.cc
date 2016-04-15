#include <stdint.h>
#include "crc32c.h"

namespace leveldb {
namespace crc32c {

uint32_t Extend(uint32_t init_crc, const char* data, size_t n)
{
    return crc32c_append(init_crc, (const unsigned char *)data, n);
}

}  // namespace crc32c
}  // namespace leveldb
