In file included from nwgnd.cpp:16:0:
nwgnd.h:43:5: error: ‘WiegnedCard’ does not name a type; did you mean ‘LicensedCore’?
     WiegnedCard w;
     ^~~~~~~~~~~
     LicensedCore
nwgnd.cpp: In member function ‘void Nwgnd::run_C_Code()’:
nwgnd.cpp:124:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
         RunCFile("autoexec.c");
                              ^
nwgnd.cpp: In member function ‘void Nwgnd::slot_WIEG_RESULT()’:
nwgnd.cpp:136:23: error: ‘w’ was not declared in this scope
     getWiegCSVResult(&w);
                       ^
nwgnd.cpp:136:23: note: suggested alternative: ‘ws’
     getWiegCSVResult(&w);
                       ^
                       ws
nwgnd.cpp: In member function ‘void Nwgnd::scan_Wieg()’:
nwgnd.cpp:177:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
     WiegSetStatusLine(7, "Vijayandra");
                                      ^
nwgnd.cpp: In member function ‘void Nwgnd::wiegnCLEDPump(unsigned char, unsigned char, unsigned int)’:
nwgnd.cpp:180:41: warning: unused parameter ‘l1’ [-Wunused-parameter]
 void Nwgnd::wiegnCLEDPump(unsigned char l1, unsigned char l2, unsigned l3)
                                         ^~
nwgnd.cpp:180:59: warning: unused parameter ‘l2’ [-Wunused-parameter]
 void Nwgnd::wiegnCLEDPump(unsigned char l1, unsigned char l2, unsigned l3)
                                                           ^~
nwgnd.cpp:180:72: warning: unused parameter ‘l3’ [-Wunused-parameter]
 void Nwgnd::wiegnCLEDPump(unsigned char l1, unsigned char l2, unsigned l3)
                                                                        ^~
nwgnd.cpp: In member function ‘void Nwgnd::wiegnPLEDPump(unsigned char, unsigned char, unsigned int)’:
nwgnd.cpp:184:41: warning: unused parameter ‘l1’ [-Wunused-parameter]
 void Nwgnd::wiegnPLEDPump(unsigned char l1, unsigned char l2, unsigned l3)
                                         ^~
nwgnd.cpp:184:59: warning: unused parameter ‘l2’ [-Wunused-parameter]
 void Nwgnd::wiegnPLEDPump(unsigned char l1, unsigned char l2, unsigned l3)
                                                           ^~
nwgnd.cpp:184:72: warning: unused parameter ‘l3’ [-Wunused-parameter]
 void Nwgnd::wiegnPLEDPump(unsigned char l1, unsigned char l2, unsigned l3)
                                                                        ^~
nwgnd.cpp: At global scope:
nwgnd.cpp:26:20: warning: ‘file_len’ defined but not used [-Wunused-variable]
 static qint64      file_len;
                    ^~~~~~~~
nwgnd.cpp:25:20: warning: ‘file_text_buff’ defined but not used [-Wunused-variable]
 static char        file_text_buff[10000];
                    ^~~~~~~~~~~~~~
make: *** [/tmp/wiegemu/nwgnd.o] Error 1
