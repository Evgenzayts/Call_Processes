// Copyright 2022 Evgenzayts evgenzaytsev2002@yandex.ru

#include <gtest/gtest.h>
#include <stdexcept>
#include <thread>

TEST(DISABLED_Snapshot, Speen) {
  for (;;) std::this_thread::yield();
}
