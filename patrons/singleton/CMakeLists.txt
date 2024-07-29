cmake_minimum_required( VERSION 3.20 )
# @author : Alexander Shvets
# @source : Refactoring.Guru
# @brief  : Patrons de conception Singleton

project( singleton )
set( MAIN singleton-main )
set( PATRON Singleton )

set( ${WORKDIR} ./ )
include_directories( include ${WORKDIR} )
add_library( ${PATRON} STATIC
    src/Singleton.cpp
)

add_executable( ${MAIN} src/main.cpp )
target_link_libraries( ${MAIN} LINK_PUBLIC ${PATRON} )
