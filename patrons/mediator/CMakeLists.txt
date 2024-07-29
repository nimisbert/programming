cmake_minimum_required( VERSION 3.20 )
# @author : Alexander Shvets
# @source : Refactoring.Guru
# @brief  : Patrons de conception Mediateur

project( mediator )
set( MAIN mediator-main )
set( PATRON Mediator )

set( ${WORKDIR} ./ )
include_directories( include ${WORKDIR} )

add_library( ${PATRON} OBJECT
    src/Mediator.cpp
    src/Component.cpp
)

add_executable( ${MAIN} src/main.cpp )
target_link_libraries( ${MAIN} LINK_PUBLIC ${PATRON} )
