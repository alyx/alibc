#if defined(_GNUC_) || defined(__clang__) || defined(_INTEL_COMPILER) \
    || defined(_MSC_VER)
#define restrict __restrict
#elif !defined(__SUNPRO_C)
#define restrict
#endif
