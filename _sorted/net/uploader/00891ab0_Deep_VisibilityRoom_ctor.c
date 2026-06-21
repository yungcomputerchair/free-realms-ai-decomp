// addr: 0x00891ab0
// name: Deep_VisibilityRoom_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_VisibilityRoom_ctor(void * this) */

void * __fastcall Deep_VisibilityRoom_ctor(void *this)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Deep_VisibilityRoom object: runs its base constructor, installs
                       the Deep_VisibilityRoom vtable, and initializes owned fields. It initializes
                       the VisibilityRoomInterface base, constructs visibility data, allocates a
                       helper, and finalizes room state. */
  puStack_8 = &LAB_015794a3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = Deep::VisibilityRoomInterface::vftable;
  local_4 = 0;
  *(undefined ***)this = Deep::VisibilityRoom::vftable;
  FUN_00891520(0x3f800000);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  uVar2 = FUN_00dbb900(uVar1);
  *(undefined4 *)((int)this + 0x15c) = uVar2;
  FUN_00dbc780(this);
  ExceptionList = local_c;
  return this;
}

