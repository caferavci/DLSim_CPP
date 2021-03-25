/* Portions Copyright 2021 Xuesong Zhou
 *
 * If you help write or modify the code, please also list your names here.
 * The reason of having Copyright info here is to ensure all the modified version, as a whole, under the GPL
 * and further prevent a violation of the GPL.
 *
 * More about "How to use GNU licenses for your own software"
 * http://www.gnu.org/licenses/gpl-howto.html 
 */

#ifndef GUARD_CONFIG_H
#define GUARD_CONFIG_H

#ifdef BUILD_EXE
    double network_assignment(int assignment_mode, int iteration_number, int column_updating_iterations);
#else
    #ifdef _WIN32
        #define DTALIBRARY_API __declspec(dllexport)
    #else
        #define DTALIBRARY_API
    #endif

    extern "C" DTALIBRARY_API double network_assignment(int assignment_mode, int iteration_number, int column_updating_iterations);
#endif

#endif