// addr: 0x0147cb00
// name: AlternateMultiActionState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AlternateMultiActionState_ctor(void * this) */

void * __fastcall AlternateMultiActionState_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an AlternateMultiActionState by constructing MultiActionState,
                       installing the AlternateMultiActionState vtable, and initializing its extra
                       return map. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a0366;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  MultiActionState_ctor(this);
  local_4 = 0;
  *(undefined ***)this = AlternateMultiActionState::vftable;
  MessageText_ctor(uVar1);
  ExceptionList = local_c;
  return this;
}

