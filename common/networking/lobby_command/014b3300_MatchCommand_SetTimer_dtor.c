// addr: 0x014b3300
// name: MatchCommand_SetTimer_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetTimer_dtor(void * this) */

void __fastcall MatchCommand_SetTimer_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MatchCommand_SetTimer; it restores the class vftable and
                       chains to the MatchCommand base destructor/helper. Evidence is the
                       MatchCommand_SetTimer::vftable assignment. */
  puStack_8 = &LAB_016a7698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand_SetTimer::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

