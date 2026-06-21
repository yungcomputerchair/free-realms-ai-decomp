// addr: 0x01439c70
// name: ECommCommand_RedeemItemGrant_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ECommCommand_RedeemItemGrant_ctor(void * this) */

void * __fastcall ECommCommand_RedeemItemGrant_ctor(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ECommCommand_RedeemItemGrant, initializes command fields and a
                       PropertySet member. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016977a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014e3430(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *(undefined ***)this = ECommCommand_RedeemItemGrant::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PropertySet_ctor(pvVar1);
  }
  *(void **)((int)this + 0x10) = pvVar1;
  ExceptionList = local_c;
  return this;
}

