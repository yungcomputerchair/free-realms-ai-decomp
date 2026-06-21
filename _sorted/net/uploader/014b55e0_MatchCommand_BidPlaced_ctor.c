// addr: 0x014b55e0
// name: MatchCommand_BidPlaced_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_BidPlaced_ctor(void * this) */

void * __fastcall MatchCommand_BidPlaced_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MatchCommand_BidPlaced command object by running its common base
                       constructor, installing the MatchCommand_BidPlaced vtable, and clearing
                       command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MatchCommand_ctor(this);
  *(undefined ***)this = MatchCommand_BidPlaced::vftable;
  ExceptionList = local_c;
  return this;
}

