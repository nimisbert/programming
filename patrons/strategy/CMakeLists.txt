cmake_minimum_required( VERSION 3.20 )
# @author : nimisbert
# @source : Refactoring.Guru
# @brief  : Patrons de conception Strategy

project( strategy )

set( ${WORKDIR} ./ )
include_directories( include ${WORKDIR} )

add_library( Strategy STATIC
    src/Strategy.cpp
)
