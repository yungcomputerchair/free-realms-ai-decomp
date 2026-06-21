// addr: 0x013ef150
// name: Exception_getSourceFile
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall Exception_getSourceFile(int param_1)

{
                    /* Returns the std::string member at +4, used as the exception source file in
                       Game error logging. The Exception class is identified by its vftable in the
                       ctor/dtor nearby. */
  return param_1 + 4;
}

