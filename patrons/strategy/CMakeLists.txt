cmake_minimum_required( VERSION 3.20 )
# @author : Alexander Shvets
# @source : Refactoring.Guru
# @brief  : Patrons de conception Strategy

project( strategy )
set( MAIN strategy-main )
set( PATRON Strategy )

set( ${WORKDIR} ./ )
include_directories( include ${WORKDIR} )

add_library( ${PATRON} OBJECT
    src/Strategy.cpp
    src/Context.cpp
)

add_executable( ${MAIN} src/main.cpp )
target_link_libraries( ${MAIN} LINK_PUBLIC ${PATRON} )
