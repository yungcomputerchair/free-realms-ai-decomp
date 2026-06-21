// addr: 0x014b4270
// name: MatchCommand_SetBid_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetBid_dtor(void * this) */

void __fastcall MatchCommand_SetBid_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MatchCommand_SetBid; it restores the class vftable and invokes
                       MatchCommand base cleanup. Evidence is the MatchCommand_SetBid::vftable
                       assignment. */
  puStack_8 = &LAB_016a79e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand_SetBid::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

