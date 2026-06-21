// addr: 0x0144e400
// name: CWMultiActionState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWMultiActionState_ctor(void * this) */

void * __fastcall CWMultiActionState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWMultiActionState by calling its base constructor and installing
                       CWMultiActionState::vftable. Evidence is the vftable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MultiActionState_ctor(this);
  *(undefined ***)this = CWMultiActionState::vftable;
  ExceptionList = local_c;
  return this;
}

