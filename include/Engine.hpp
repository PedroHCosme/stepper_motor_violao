#ifndef ENGINE
#define ENGINE

#include "SDCard.hpp"

class Engine
{
public:
    // construtor do motor
    Engine(char pGuitarString, int pStep, int pDir);

    char getGuitarString();

    int getTarget();

    int getDir();

    int getStep();

    void reverseTarget();

    int getPosition();

    int *getPosPtr();

    // utilizado para resetar o motor
    void oneStep(int pSignal);

    // utilizado para determinar o valor da velocidade
    void setSpeed(int pSDSpeed);

    void setDelaySpeed(int pSDSpeed);

    int getDelaySpeed();

private:
    char mGuitarString; // corda
    int mTarget;        // posição final
    int mPosition;      // posição atual
    int *mPosPtr;       // ponteiro para gravar a posição
    int mSpeedRPM;
    int mDelaySpeed;
    int mDIR;        // pino do drive
    int mSTEP;       // pino do drive
    int mRevolution; // quantidade de passos necessários para dar uma volta completa
};

#endif