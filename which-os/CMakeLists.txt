project(which-os)

MESSAGE(STATUS "-------------------------------------------")

MESSAGE(STATUS "Operation system is ${CMAKE_SYSTEM}")
 
IF (CMAKE_SYSTEM_NAME MATCHES "Linux")
	MESSAGE(STATUS "Current platform: Linux ")
ELSEIF (CMAKE_SYSTEM_NAME MATCHES "Windows")
	MESSAGE(STATUS "Current platform: Windows")
ELSEIF (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
	MESSAGE(STATUS "Current platform: FreeBSD")
ELSE ()
	MESSAGE(STATUS "Other platform: ${CMAKE_SYSTEM_NAME}")
ENDIF (CMAKE_SYSTEM_NAME MATCHES "Linux")

IF (WIN32)
	MESSAGE(STATUS "Now is Windows.")
ELSEIF (APPLE)
	MESSAGE(STATUS "Now is Apple systens.")
ELSEIF (UNIX)
	MESSAGE(STATUS "Now is UNIX-like OS.")
ENDIF ()

MESSAGE(STATUS "-------------------------------------------")