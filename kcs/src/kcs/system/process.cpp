/* Copyright (C) 2017 Killian Poulaud.
   This file is part of KCS.

   KCS is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   KCS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with KCS. If not, see <http://www.gnu.org/licenses/>. */

/**
 * @file        kcs/system/process.cpp
 * @brief       process functions source.
 * @author      Killian
 * @date        2017/01/08 - 16:37
 */

#ifdef __unix__
#include <unistd.h>
#elif defined(_WIN32)
#include <windows.h>
#endif

#include "process.hpp"


namespace kcs {
namespace system {


/**
 * @brief       Get the UID of the current process.
 * @return      The UID of the current process.
 */
int get_uid()
{
#if _POSIX_VERSION >= 200112L
    return ::getuid();
#else
    throw system_exception("kcs::system::system_exception: system not supported");
#endif
}


/**
 * @brief       Get the GID of the current process.
 * @return      The GID of the current process.
 */
int get_gid()
{
#if _POSIX_VERSION >= 200112L
    return ::getgid();
#else
    throw system_exception("kcs::system::system_exception: system not supported");
#endif
}


}
}