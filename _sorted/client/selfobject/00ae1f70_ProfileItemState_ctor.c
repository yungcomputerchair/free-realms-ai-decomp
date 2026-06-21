// addr: 0x00ae1f70
// name: ProfileItemState_ctor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProfileItemState_ctor(void * this) */

void * __fastcall ProfileItemState_ctor(void *this)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a large profile-item state object with embedded
                       ProfileItemClassData and ProfileItem maps plus two small allocated helper
                       arrays/lists. Type is inferred from map vtables used by callees. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015cb76f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008f15b0(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  FUN_00ae1e30();
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x3d) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  pvVar1 = Mem_Alloc(8);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01045f60(8);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0xcc) = uVar2;
  pvVar1 = Mem_Alloc(8);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01070e30(8);
  }
  *(undefined4 *)((int)this + 0xd0) = uVar2;
  ExceptionList = local_c;
  return this;
}

