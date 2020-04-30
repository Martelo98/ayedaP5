#pragma once

class contador {

    private:

        int numero_;

    public: 

        contador();
        ~contador();

        int getNumero();
        
        void resetear();
        void incrementar();
        void disminuir();


};