// addr: 0x013ef160
// name: Exception_getFunctionName
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall Exception_getFunctionName(int param_1)

{
                    /* Returns the std::string member at +0x20, used as the exception
                       function/method name in Game error logging. */
  return param_1 + 0x20;
}

