#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#ifndef _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#endif

#pragma warning(disable: 4005 4018 4244 4267 4309 4715 4722 4800)

#include "db/builder.cc"
#include "db/c.cc"
#include "db/db_bench.cc"
#include "db/db_impl.cc"
#include "db/db_iter.cc"
#include "db/dbformat.cc"
#include "db/filename.cc"
#include "db/log_reader.cc"
#include "db/log_writer.cc"
#include "db/memtable.cc"
#include "db/repair.cc"
#include "db/table_cache.cc"
#include "db/version_edit.cc"
#include "db/version_set.cc"
#include "db/write_batch.cc"
#include "helpers/memenv/memenv.cc"
#include "port/win/crc32c_win.cc"
#include "port/port_win.cc"
#include "table/block.cc"
#include "table/block_builder.cc"
#include "table/filter_block.cc"
#include "table/format.cc"
#include "table/iterator.cc"
#include "table/merger.cc"
#include "table/table.cc"
#include "table/table_builder.cc"
#include "table/two_level_iterator.cc"
#include "util/arena.cc"
#include "util/bloom.cc"
#include "util/cache.cc"
#include "util/coding.cc"
#include "util/comparator.cc"
#include "util/env.cc"
#include "util/env_win.cc"
#include "util/filter_policy.cc"
#include "util/hash.cc"
#include "util/histogram.cc"
#include "util/logging.cc"
#include "util/options.cc"
#include "util/status.cc"
#include "util/testharness.cc"
#include "util/testutil.cc"
