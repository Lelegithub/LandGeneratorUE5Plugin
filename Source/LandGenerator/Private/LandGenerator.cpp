#include "LandGenerator.h"

#define LOCTEXT_NAMESPACE "FLandGeneratorModule"

DEFINE_LOG_CATEGORY(LogWorldGen);

void FLandGeneratorModule::StartupModule()
{
}

void FLandGeneratorModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLandGeneratorModule, LandGenerator)