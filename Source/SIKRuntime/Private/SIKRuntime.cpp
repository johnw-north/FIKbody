// 2025 John Warren

#include "SIKRuntime.h"

DEFINE_LOG_CATEGORY(LogSIKRuntime);

#define LOCTEXT_NAMESPACE "SIKRuntime"
DECLARE_STATS_GROUP(TEXT("SIK"), STATGROUP_SIK, STATCAT_Advanced);
// DisplayName, GroupName (ends up as: "LODZERO"), Third param is always Advanced.

void FSIKRuntime::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FSIKRuntime::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSIKRuntime, SIKRuntime)
