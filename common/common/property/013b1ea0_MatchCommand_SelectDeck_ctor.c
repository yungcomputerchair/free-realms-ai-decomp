// addr: 0x013b1ea0
// name: MatchCommand_SelectDeck_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_SelectDeck_ctor(void * this) */

void * __fastcall MatchCommand_SelectDeck_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for MatchCommand_SelectDeck. It constructs the MatchCommand base,
                       installs the SelectDeck vtable, initializes a small string field to empty,
                       clears a byte flag, and nulls an owned pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687753;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MatchCommand_ctor(this);
  *(undefined ***)this = MatchCommand_SelectDeck::vftable;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  ExceptionList = local_c;
  return this;
}

