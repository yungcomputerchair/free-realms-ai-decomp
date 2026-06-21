// addr: 0x014b2e50
// name: MatchCommand_SetDeckArchetype_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetDeckArchetype_dtor(void * this) */

void __fastcall MatchCommand_SetDeckArchetype_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MatchCommand_SetDeckArchetype; it restores the vftable and
                       invokes the MatchCommand base destructor/helper. Evidence is the
                       MatchCommand_SetDeckArchetype::vftable assignment. */
  puStack_8 = &LAB_016a7568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand_SetDeckArchetype::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

