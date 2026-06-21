// addr: 0x0144e4c0
// name: CWMultiActionState_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWMultiActionState_ctorWithMachine(void * this, void * machine) */

void * __thiscall CWMultiActionState_ctorWithMachine(void *this,void *machine)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWMultiActionState with a base/machine argument and installs
                       CWMultiActionState::vftable. Evidence is vftable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MultiActionState_copy_ctor(this,machine);
  *(undefined ***)this = CWMultiActionState::vftable;
  ExceptionList = local_c;
  return this;
}

