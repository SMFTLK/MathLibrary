// math.h - Contains declarations of math functions

#pragma once

//#ifdef MATH_EXPORTS
#define MATH_API __declspec(dllexport)
//#else
//#define MATH_API __declspec(dllimport)
//#endif


extern "C" MATH_API void fibonacci_init(

    const unsigned long long a, const unsigned long long b);


extern "C" MATH_API bool fibonacci_next();


extern "C" MATH_API unsigned long long fibonacci_current();


extern "C" MATH_API unsigned fibonacci_index();