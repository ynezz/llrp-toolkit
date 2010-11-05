rem #
rem # This runs xsltproc.exe to generate two files used by LTKCPP.
rem #
rem # You can download xsltproc.EXE from this URL
rem # http://www.zlatkovic.com/libxml.en.html
rem #
rem #
rem # This BAT script assumes that xsltproc is in the system path

set LLRPDEF=..\Definitions\Core\llrp-1x0-def.xml
set LLRPDEF_IMPINJ=..\Definitions\impinj\impinjdef.xml
..\..\libs\libxslt-1.1.26.win32\bin\xsltproc --stringparam RegistryName Core -o out_ltkcpp.h ltkcpp_gen_h.xslt %LLRPDEF%
..\..\libs\libxslt-1.1.26.win32\bin\xsltproc --stringparam RegistryName Core -o out_ltkcpp.inc ltkcpp_gen_cpp.xslt %LLRPDEF% 

..\..\libs\libxslt-1.1.26.win32\bin\xsltproc --stringparam RegistryName Impinj -o out_impinj_ltkcpp.h ltkcpp_gen_h.xslt %LLRPDEF_IMPINJ%
..\..\libs\libxslt-1.1.26.win32\bin\xsltproc --stringparam RegistryName Impinj -o out_impinj.inc ltkcpp_gen_cpp.xslt %LLRPDEF_IMPINJ% 
