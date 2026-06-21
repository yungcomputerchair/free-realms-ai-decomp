// addr: 0x0144b950
// name: CWStateMachine_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWStateMachine_ctor(void * this) */

void * __fastcall CWStateMachine_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWStateMachine by invoking a base initializer and installing the
                       CWStateMachine vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ab48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  StateMachine_ctor(this);
  *(undefined ***)this = CWStateMachine::vftable;
  ExceptionList = local_c;
  return this;
}

