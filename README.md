This repository contains machine-translated English versions of the Magical Language Lyrical Lisp text data from https://github.com/zick/Magical-Language-Lyrical-Lisp. Some strings were translated using GPT-4o, and some using Google Translate due errors in GPT-4o's output, then some manual cleanup was done. This is not meant to be a definitive translation, but a rough starting point and a work in progress.

## How to run Lyrical Lisp

Lyrical Lisp is consist of text data, graphic data, and sound data. This repository has only source code of text data. In order to get all data, download `lyricallisp_free-X.X.zip` from following URL:

  http://lyrical.bugyo.tk/download.html

If you unzip it, `lyricallisp_free` directory is created. You can run Lyrical Lisp by double-clicking the ``nsclisper.exe'' in the directory.

## How to compile your source code

In order to run Lyrical Lisp with your source code, you must make `nscript.dat` and put it to `lyricallisp_free` directory.

You can compile your source files (`X.txt`) into `nscript.dat` using `nscmake.exe` which can be downloaded from following URL: http://www.nscripter.com/

`nscmake.c` is also included, if you want to compile it yourself.