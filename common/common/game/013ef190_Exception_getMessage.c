// addr: 0x013ef190
// name: Exception_getMessage
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall Exception_getMessage(int param_1)

{
                    /* Returns the std::string member at +0x40, used as the exception message text
                       in error reporting. */
  return param_1 + 0x40;
}

