SET LESSMSI=Tools\lessmsi-v1.6.3\lessmsi.exe
SET SDK=17763.132.181022-1834.rs5_release_svc_prod1_WindowsSDK
mkdir SDKs
%LESSMSI% x "ISOs\%SDK%\Installers\Windows SDK Desktop Headers x86-x86_en-us.msi" SDKs\
%LESSMSI% x "ISOs\%SDK%\Installers\Windows SDK Desktop Libs x64-x86_en-us.msi" SDKs\
%LESSMSI% x "ISOs\%SDK%\Installers\Windows SDK Desktop Libs x86-x86_en-us.msi" SDKs\
%LESSMSI% x "ISOs\%SDK%\Installers\Universal CRT Headers Libraries and Sources-x86_en-us.msi" SDKs\
rmdir /S /Q "SDKs\SourceDir\Windows Kits\10\Catalogs\"
rmdir /S /Q "SDKs\SourceDir\Windows Kits\10\DesignTime\"
rmdir /S /Q "SDKs\SourceDir\Windows Kits\10\Lib\*\ucrt\arm\libucrt*.lib"
rmdir /S /Q "SDKs\SourceDir\Windows Kits\10\Lib\*\ucrt\arm\libucrt*.lib"