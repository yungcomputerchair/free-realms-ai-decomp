// addr: 0x0139d010
// name: Card_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Card_ctor(void * this, undefined4 archetype_, undefined4 id_) */

void * __fastcall Card_ctor(void *this,undefined4 archetype_,undefined4 id_)

{
  void *this_00;
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Card, initializing Sortable and installed-action state, looking
                       up archetype/card data, and installing Card vtables on multiple subobjects.
                       Evidence is Card::vftable assignments and card/archetype helper calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016852ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PlayElement_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  HasInstalledActions_ctor((undefined4 *)((int)this + 0x48));
  local_4._0_1_ = 1;
  Sortable_ctor((undefined4 *)((int)this + 0x58));
  local_4._0_1_ = 2;
  *(undefined ***)this = Card::vftable;
  *(undefined ***)((int)this + 8) = Card::vftable;
  *(undefined4 *)((int)this + 0x48) = Card::vftable;
  *(undefined4 *)((int)this + 0x58) = Card::vftable;
  FUN_005258fb();
  local_4._0_1_ = 3;
  FUN_0139a140();
  local_4._0_1_ = 4;
  FUN_0139a140();
  local_4._0_1_ = 5;
  FUN_01326f60();
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  local_4._0_1_ = 8;
  FUN_0139a8b0();
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  local_4._0_1_ = 0xb;
  FUN_0139a140();
  local_4._0_1_ = 0xc;
  FUN_013806f0();
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  local_4._0_1_ = 0xe;
  FUN_012fa910();
  *(undefined4 *)((int)this + 0x13c) = 0xf;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined1 *)((int)this + 0x128) = 0;
  local_4 = CONCAT31(local_4._1_3_,0x10);
  ArchetypeDB_getInstance();
  uVar1 = Archetype_getField3c(this_00);
  *(uint *)((int)this + 0x5c) = uVar1;
  *(undefined1 *)((int)this + 0x44) = 1;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x69) = 0;
  *(undefined1 *)((int)this + 0x6a) = 0;
  *(undefined1 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  ExceptionList = local_c;
  return this;
}

