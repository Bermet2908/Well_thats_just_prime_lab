#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"

TEST_CASE("primeFactors handles numbers <= 1") {
    Factorizer f;
    REQUIRE(f.primeFactors(0).empty());
    REQUIRE(f.primeFactors(1).empty());
    REQUIRE(f.primeFactors(-8).empty());
}

TEST_CASE("primeFactors finds factors") {
    Factorizer f;
    REQUIRE(f.primeFactors(9) == std::vector<int>{3, 3});
    REQUIRE(f.primeFactors(12) == std::vector<int>{2, 2, 3});
    REQUIRE(f.primeFactors(28) == std::vector<int>{2, 2, 7});
    REQUIRE(f.primeFactors(17) == std::vector<int>{17});
}
