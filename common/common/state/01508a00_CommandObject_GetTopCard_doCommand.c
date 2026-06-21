// addr: 0x01508a00
// name: CommandObject_GetTopCard_doCommand
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CommandObject_GetTopCard_doCommand(int param_1)

{
  undefined4 unaff_retaddr;
  
                    /* Logs 'CommandObject_GetTopCard::doCommand' through the game logger and
                       returns success. The string directly names the method. */
  Game_logGeneral(*(void **)(param_1 + 0x30),"CommandObject_GetTopCard::doCommand",unaff_retaddr);
  return 1;
}

