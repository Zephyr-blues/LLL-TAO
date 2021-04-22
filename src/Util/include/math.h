/*__________________________________________________________________________________________

            (c) Hash(BEGIN(Satoshi[2010]), END(Sunny[2012])) == Videlicet[2014] ++

            (c) Copyright The Nexus Developers 2014 - 2019

            Distributed under the MIT software license, see the accompanying
            file COPYING or http://www.opensource.org/licenses/mit-license.php.

            "ad vocem populi" - To the Voice of the People

____________________________________________________________________________________________*/

#pragma once

#include <stdint.h>

namespace math
{
    /** pow
     *
     *  Raises one integer to another integer's power.
     *  Uses integer instructions, rather than floating point instructions.
     *
     *  @param[in] nBase The base value to raise to
     *  @param[in] nExp The exponent to raise the base to.
     *
     *  @return the integer value of nBase^nExp
     *
     **/
    inline uint64_t pow(const uint64_t nBase, const uint64_t nExp)
    {
        /* We just do a simple for loop here for repeated multiplication. */
        uint64_t nRet = 1;
        for(uint32_t n = 0; n < nExp; ++n)
            nRet *= nBase;

        return nRet;
    }
}
