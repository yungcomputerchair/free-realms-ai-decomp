// addr: 0x012dbb30
// name: DeckBuilderUtilities_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeckBuilderUtilities_ctor(void * this) */

void * __fastcall DeckBuilderUtilities_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs DeckBuilderUtilities by installing its vftable and initializing
                       several embedded vector/list-like members to null. Evidence is the explicit
                       DeckBuilderUtilities::vftable assignment and repeated zeroing of grouped
                       fields. */
  puStack_8 = &LAB_01671122;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = DeckBuilderUtilities::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  local_4 = 0;
  FUN_01247380(uVar1);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),2);
  FUN_01247380();
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  ExceptionList = local_c;
  return this;
}

