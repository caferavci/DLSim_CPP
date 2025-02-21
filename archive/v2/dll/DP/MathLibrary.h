#ifndef GUARD_MATHLIBRARY_H

#ifdef _WIN32
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API
#endif

extern "C" MATHLIBRARY_API double network_assignment(int assignment_mode, int iteration_number, int column_updating_iterations);

#endif