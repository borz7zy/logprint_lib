
#ifndef BP_LIB_EXPORT
#if defined(_WIN32) || defined(_WIN64)
#define BP_LIB_EXPORT __declspec(dllexport)
#elif defined(__linux__) || defined(__APPLE__)
#define BP_LIB_EXPORT __attribute__((visibility("default")))
#else
#define BP_LIB_EXPORT
#endif
#endif

extern "C"
{
    BP_LIB_EXPORT void LOGE(const char *tag, const char *message, ...);
    BP_LIB_EXPORT void LOGI(const char *tag, const char *message, ...);
}
