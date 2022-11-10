/* Copyright 2014 Adobe Systems Incorporated (http://www.adobe.com/). All Rights Reserved.
      This software is licensed as OpenSource, under the Apache License, Version 2.0.
         This license is available at: http://opensource.org/licenses/Apache-2.0. */

// NOLINT(build/header_guard)
"[-ufo options: default none]\n"
"-altLayer NAME   Select a layer other than\n"
"                 'com.adobe.type.processedglyphs'\n"
"-go              Output preferred glyph order according\n"
"                 to GOADB file\n"
"\n"
"UFO mode converts an abstract font to a UFO 2 font.\n"
"\n"
"Note that it is NOT a full UFO writer. It writes only\n"
"the information from the Postscript font data. If the source\n"
"is an OTF or TTF font, it will NOT copy any of the metadata\n"
"from outside the font program table. Also, if the destination\n"
"is an already existing UFO font, tx will fail.\n"
"\n"
"When reading from a UFO font, tx will prefer GLIF files in the\n"
"layer named 'com.adobe.type.processedglyphs'. To select another\n"
"layer use the option '-altLayer NAME'; use 'None' as\n"
"the layer name in order to have tx ignore the preferred layer\n"
"and read GLIF files from the foreground layer.\n"
