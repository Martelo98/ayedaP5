#pragma once

class contador {

    private:

        int numero_;

    public: 

        contador();
        ~contador();

        int getValor();
        
        void resetear();
        void incrementar();
        void disminuir();


};