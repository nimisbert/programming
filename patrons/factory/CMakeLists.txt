cmake_minimum_required( VERSION 3.20 )
# @author : Alexander Shvets
# @source : Refactoring.Guru
# @brief  : Patrons de conception Fabrique

project( factory )
set( MAIN factory-main )
set( PATRON Factory )

set( ${WORKDIR} ./ )
include_directories( include ${WORKDIR} )

add_library( ${PATRON} OBJECT
    src/Product.cpp
    src/Factory.cpp
)

add_executable( ${MAIN} src/main.cpp )
target_link_libraries( ${MAIN} LINK_PUBLIC ${PATRON} )
