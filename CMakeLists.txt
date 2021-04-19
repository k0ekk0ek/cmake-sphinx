cmake_minimum_required(VERSION 3.9) # doxygen_add_docs is available from 3.9

project(
  find_module_for_sphinx
  VERSION "0.1.0"
  DESCRIPTION "Simple project for developing FindSphinx.cmake")

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/Modules")

find_package(Doxygen REQUIRED)
find_package(Sphinx REQUIRED breathe)

set(DOXYGEN_GENERATE_HTML NO)
set(DOXYGEN_GENERATE_XML YES)
doxygen_add_docs(foobar_doxygen "include")

# Build the target by issuing: cmake --build . --target foobar_sphinx

sphinx_add_docs(
  foobar_sphinx
  BREATHE_PROJECTS foobar_doxygen
  BUILDER html
  SOURCE_DIRECTORY docs)
