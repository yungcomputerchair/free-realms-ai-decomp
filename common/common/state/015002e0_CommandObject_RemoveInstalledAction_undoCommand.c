// addr: 0x015002e0
// name: CommandObject_RemoveInstalledAction_undoCommand
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CommandObject_RemoveInstalledAction_undoCommand(int param_1)

{
  undefined4 unaff_retaddr;
  
                    /* Logs 'CommandObject_RemoveInstalledAction::undoCommand' through the game
                       logger and returns success. The string directly names the method. */
  Game_logGeneral(*(void **)(param_1 + 0x30),"CommandObject_RemoveInstalledAction::undoCommand",
                  unaff_retaddr);
  return 1;
}

