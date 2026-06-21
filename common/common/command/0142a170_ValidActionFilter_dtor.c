// addr: 0x0142a170
// name: ValidActionFilter_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValidActionFilter_dtor(void * this) */

void __fastcall ValidActionFilter_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for ValidActionFilter: installs ValidActionFilter vftables,
                       detaches PlayElement-style parent state, and runs PlayElement/Persistent base
                       cleanup. */
  puStack_8 = &LAB_016957d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = ValidActionFilter::vftable;
  *(undefined ***)((int)this + 8) = ValidActionFilter::vftable;
  local_4 = 0;
  PlayElement_detachFromParent(this);
  local_4 = 0xffffffff;
  PlayElement_dtor(this);
  ExceptionList = local_c;
  return;
}

