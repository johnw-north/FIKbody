// 2025 John Warren

#include "SIKEditor.h"

DEFINE_LOG_CATEGORY(LogSIKEditor);

#define LOCTEXT_NAMESPACE "SIKEditor"

void FSIKEditor::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FSIKEditor::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSIKEditor, SIKEditor)