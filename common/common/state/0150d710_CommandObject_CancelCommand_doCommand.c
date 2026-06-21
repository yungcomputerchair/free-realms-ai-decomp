// addr: 0x0150d710
// name: CommandObject_CancelCommand_doCommand
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_CancelCommand_doCommand(void * this) */

bool __fastcall CommandObject_CancelCommand_doCommand(void *this)

{
  undefined4 unaff_retaddr;
  
                    /* Logs "Canceling Current Command." through Game_logGeneral and returns true.
                        */
  Game_logGeneral(*(void **)((int)this + 0x30),"Canceling Current Command.",unaff_retaddr);
  return true;
}

