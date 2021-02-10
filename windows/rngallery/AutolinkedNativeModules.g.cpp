// AutolinkedNativeModules.g.cpp contents generated by "react-native autolink-windows"
// clang-format off
#include "pch.h"
#include "AutolinkedNativeModules.g.h"

// Includes from react-native-config
#include <winrt/RNCConfig.h>

// Includes from react-native-device-info
#include <winrt/RNDeviceInfoCPP.h>

// Includes from react-native-permissions
#include <winrt/RNPermissions.h>

// Includes from react-native-print
#include <winrt/RNPrint.h>

// Includes from @terrylinla/react-native-sketch-canvas
#include <winrt/RNSketchCanvas.h>

namespace winrt::Microsoft::ReactNative
{

void RegisterAutolinkedNativeModulePackages(winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::ReactNative::IReactPackageProvider> const& packageProviders)
{ 
    // IReactPackageProviders from react-native-config
    packageProviders.Append(winrt::RNCConfig::ReactPackageProvider());
    // IReactPackageProviders from react-native-device-info
    packageProviders.Append(winrt::RNDeviceInfoCPP::ReactPackageProvider());
    // IReactPackageProviders from react-native-permissions
    packageProviders.Append(winrt::RNPermissions::ReactPackageProvider());
    // IReactPackageProviders from react-native-print
    packageProviders.Append(winrt::RNPrint::ReactPackageProvider());
    // IReactPackageProviders from @terrylinla/react-native-sketch-canvas
    packageProviders.Append(winrt::RNSketchCanvas::ReactPackageProvider());
}

}
