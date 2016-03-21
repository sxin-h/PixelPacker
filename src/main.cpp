/*
-------------------------------------------------------------------------
This file is part of PixelPacker, tools to pack textures into as small as space as possible.

PixelPacker version 1 of 6 March 2011
Copyright (C) 2011 Ethan Steinberg <ethan.steinberg@gmail.com>

This program is released under the terms of the license contained
in the file COPYING.
---------------------------------------------------------------------------
*/


#include <iostream>
#include "cli/pixelCli.h"
#include <Magick++.h>

using std::cout;
using std::endl;

int main(int argv, char **argc)
{

   try
   {

   Magick::InitializeMagick(*argc);

      t_pixelCli pixelCli;
      pixelCli.run(argv,argc);
   }

   catch (std::exception &ex)
   {
      std::cout<<"I have failed.."<<std::endl;
      std::cout<<ex.what()<<std::endl;
      exit(1);
   }
}
