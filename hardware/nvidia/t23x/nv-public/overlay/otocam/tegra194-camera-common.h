#ifdef _DT_BINDINGS_GPIO_TEGRA234_GPIO_H
 #define JETSON_AGX_ORIN
 //#define JETSON_AGX
#else	// defined(INCLUDED_DT_BINDINGS_GPIO_TEGRA194_GPIO_H)
 #define JETSON_AGX
#endif

#if defined(LINUX_VERSION)
 #if (LINUX_VERSION>=600)
#define JETPACK_VERS	600
 #elif (LINUX_VERSION>=504)
#define JETPACK_VERS	500
 #else
#define JETPACK_VERS	460
 #endif
#endif

#define CAM_COMPATIBLE	"sony,imx390"

#define CONCATS(a,b,c)	_CONCATS(a,b,c)
#define _CONCATS(a,b,c)	_STRING(a##b##c)
#define STRING(s)	_STRING(s)
#define _STRING(s)	#s
