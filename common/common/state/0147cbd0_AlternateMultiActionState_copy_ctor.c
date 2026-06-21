// addr: 0x0147cbd0
// name: AlternateMultiActionState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AlternateMultiActionState_copy_ctor(void * this, void * other) */

void * __thiscall AlternateMultiActionState_copy_ctor(void *this,void *other)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs an AlternateMultiActionState from a MultiActionState copy and
                       initializes its extra return map. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a03a6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  MultiActionState_copy_ctor(this,other);
  local_4 = 0;
  *(undefined ***)this = AlternateMultiActionState::vftable;
  MessageText_ctor(uVar1);
  ExceptionList = local_c;
  return this;
}

