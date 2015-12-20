solution "schat"
language "C++"
configurations { "Debug", "Release" }
includedirs { "include", "src/include" }
files { "include/**.h" }

includedirs { "external/restclient/include/" }

defines { "SCHAT_BUILD" }

configuration "Debug"
defines { "DEBUG" }
flags { "Symbols" }
targetdir "build/debug"

configuration "Release"
defines { "NDEBUG" }
flags { "OptimizeSpeed",
	"ExtraWarnings",
	"FatalWarnings",
	"NoFramePointer" }
targetdir "build/release"

project "restclient"
kind "StaticLib"
files { "external/restclient/source/**.cpp", "external/restclient/include/**.h" }

project "schat"
kind "ConsoleApp"
files { "src/**.cpp" }
links { "restclient", "curl" }
