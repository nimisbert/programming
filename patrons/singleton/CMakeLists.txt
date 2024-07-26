cmake_minimum_required( VERSION 3.20 )
# @author : nimisbert
# @source : Refactoring.Guru
# @brief  : Patrons de conception Singleton

project( singleton )

set( ${WORKDIR} ./ )
include_directories( include ${WORKDIR} )

add_library( Singleton STATIC
    src/Singleton.cpp
)

add_executable( singleton-main src/main.cpp )
target_link_libraries( singleton-main LINK_PUBLIC
    Singleton
)
