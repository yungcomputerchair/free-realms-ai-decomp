// addr: 0x013b3350
// name: LobbyCommand_Join_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_Join_ctor(void * this) */

void * __fastcall LobbyCommand_Join_ctor(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a LobbyCommand_Join, initializes its vtable, several small
                       strings/fields, and a nested PropertySet. Evidence is explicit
                       LobbyCommand_Join::vftable assignment, base LobbyCommand_ctor, and
                       PropertySet_ctor allocation. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687aef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  *(undefined ***)this = LobbyCommand_Join::vftable;
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x74) = 0xf;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x60) = 0;
  local_4._0_1_ = 4;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PropertySet_ctor(pvVar1);
  }
  *(void **)((int)this + 0x78) = pvVar1;
  *(undefined4 *)((int)this + 0x58) = 0;
  ExceptionList = local_c;
  return this;
}

