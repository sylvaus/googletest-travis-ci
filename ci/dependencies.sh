#!/bin/bash

sudo apt-get update
sudo apt-get install -y libgtest-dev cmake make
cd /usr/src/gtest
sudo cmake .
sudo make
sudo cp ./*.a /usr/lib
cd $TRAVIS_BUILD_DIR
sudo apt-get install -y libgsl* gsl-*