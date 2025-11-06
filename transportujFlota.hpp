#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int przetransportowany_towar{};
    unsigned int liczba_zaglowcow{};

    Stocznia stocznia{};

    while (przetransportowany_towar <= towar)
    {
        Statek* s = stocznia();

        if (dynamic_cast<Zaglowiec*>(s))
            liczba_zaglowcow++;

        przetransportowany_towar += s->transportuj();

        delete s;
    }

    return liczba_zaglowcow;
}