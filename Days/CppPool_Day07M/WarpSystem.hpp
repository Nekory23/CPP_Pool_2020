/*
** EPITECH PROJECT, 2021
** CppPool Day07M
** File description:
** warp system
*/

#ifndef _WARPSYSTEM_HPP_
#define _WARPSYSTEM_HPP_

namespace WarpSystem {
    class QuantumReactor {
    public :
        QuantumReactor(void);
        ~QuantumReactor(void);
        bool isStable(void);
        void setStability(bool);
    private :
        bool _stability;
    };
    class Core {
    public :
        Core(QuantumReactor *);
        ~Core(void);
        QuantumReactor *checkReactor(void);
    private :
        QuantumReactor *_coreReactor;
    };
}

#endif
