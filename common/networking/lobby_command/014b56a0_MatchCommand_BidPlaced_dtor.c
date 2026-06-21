// addr: 0x014b56a0
// name: MatchCommand_BidPlaced_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_BidPlaced_dtor(void * this) */

void __fastcall MatchCommand_BidPlaced_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MatchCommand_BidPlaced; it restores the class vftable and
                       invokes the MatchCommand base destructor/helper. Evidence is the
                       MatchCommand_BidPlaced::vftable assignment. */
  puStack_8 = &LAB_016a7e88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand_BidPlaced::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

