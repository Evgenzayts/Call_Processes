// Copyright 2022 Evgenzayts evgenzaytsev2002@yandex.ru

#include <stdexcept>
#include <gtest/gtest.h>
#include <example.hpp>

TEST(Example, EmptyTest) {
  EXPECT_THROW(example(), std::runtime_error);
}
