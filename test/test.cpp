
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "../include/vector_t.hpp"
#include "../include/node_dll_t.hpp"
#include "../include/dll_t.hpp"
#include "../include/stack_t.hpp"
#include "../include/queue_t.hpp"

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


TEST_CASE("DLL node class test") {
    
    node_dll_t<int> nodo1;

    SECTION("Testing constructor with no data") {
        
        REQUIRE (nodo1.get_next() == NULL);
        REQUIRE (nodo1.get_prev() == NULL);
        
    }

    SECTION("Testing constructor seting data") {
        nodo1.set_data(5);
        REQUIRE (nodo1.get_next() == NULL);
        REQUIRE (nodo1.get_prev() == NULL);
        REQUIRE (nodo1.get_data() == 5);
    }

    SECTION("Testing getters and setters") {
        node_dll_t<int>* sig;
        node_dll_t<int>* previo; 
        nodo1.set_next(sig);
        nodo1.set_prev(previo);
        REQUIRE (nodo1.get_next() == sig);
        REQUIRE (nodo1.get_prev() == previo);
    }

    //FALTA UN WRITE
}

TEST_CASE("DLL class test") {
    
    dll_t<int> dll1;

    SECTION("Testing constructor with no data") {
        
        REQUIRE (dll1.get_head() == NULL);
        REQUIRE (dll1.get_tail() == NULL);
        REQUIRE (dll1.get_sz() == 0);
    }

    SECTION("Testing insert functions") {
        dll1.insert_head(new node_dll_t<int> (5));
        dll1.insert_tail(new node_dll_t<int> (20));
        REQUIRE (dll1.get_head() -> get_data() == 5);
        REQUIRE (dll1.get_tail() -> get_data() == 20);
        
    }

    SECTION ("Testing extract functions") {
        dll1.insert_head(new node_dll_t<int> (5));
        dll1.insert_tail(new node_dll_t<int> (20));
        dll1.extract_tail();
        dll1.extract_head();
        REQUIRE (dll1.empty() == true);
        
        
    }

    SECTION ("Testing remove function") {
        node_dll_t<int>* node = new node_dll_t<int> (10);
        dll1.insert_head(node);
        dll1.remove(node);
        REQUIRE (dll1.empty() == true);
    }
}

TEST_CASE("stack_T class test") {
    SECTION ("Stack push test") {
        Stack_t<int> pila;
        pila.push(5);
        REQUIRE(pila.top() == 5);
    }

    SECTION ("Stack pop test") {
        Stack_t<int> pila;
        pila.push(25);
        pila.pop();
        REQUIRE(pila.empty() == true);
    }

}

TEST_CASE("Queue class test") {
    queue_t<int> cola;
    
    SECTION("queue push test") {
        cola.push(10);
        REQUIRE(cola.front() == 10);
    }

    SECTION("queue pop test") {
        cola.push(10);
        cola.push(20);
        cola.pop();
        REQUIRE(cola.front() == 20);
    }

    SECTION("queue front and back functions test") {
        cola.push(10);
        cola.push(20);
        REQUIRE(cola.front() == 10);
        REQUIRE(cola.back() == 20);
    }
}