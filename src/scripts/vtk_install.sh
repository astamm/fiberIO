#! /bin/sh

CMAKE_BIN=$1
NCORES=$2

${CMAKE_BIN} --build vtk-build -j ${NCORES} --config Release
${CMAKE_BIN} --install vtk-build --prefix vtk

LIB_FOLDER=`ls -d vtk/lib*`
if [[ $LIB_FOLDER != "vtk/lib" ]]; then
    mv $LIB_FOLDER vtk/lib
fi
rm -fr vtk/lib/*
cp -r vtk/include/vtk/* vtk/include
rm -fr vtk/include/vtk
cp -r `find vtk-build -name "*.o" -o -name "*.obj" | xargs` vtk/lib

rm -fr vtk-src vtk-build
rm -f vtk-src.tar.gz
