
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "../include/vector_t.hpp"

TEST_CASE(" Vector class test", "[vector_t]") {
    

    vector_t<int> v;
    SECTION ("Default vector constructor testing") {
        
        REQUIRE (v.size() == 0);
    }
    
    SECTION ("Vector constructor testing") {
        vector_t<int> v(5);
        REQUIRE (v.size() == 5);
    }

     SECTION ("Resize function testing") {
        vector_t<int> v(5);
        v.resize(10);
        REQUIRE (v.size() == 10);
    }

    SECTION ("Operators [] testing") {
        vector_t<int> v(3);
        v[0] = 0;
        v[1] = 10;
        v[2] = 20;
        REQUIRE (v[0] == 0);
        REQUIRE (v[1] == 10);
        REQUIRE (v[2] == 20);
    }

}


