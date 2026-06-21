// addr: 0x00f9a970
// name: Input_InputService_ctor
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Input_InputService_ctor(void * this) */

void * __fastcall Input_InputService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an Input::InputService object by running a base/member initializer
                       and installing the Input::InputService vftable. Evidence: explicit vftable
                       assignment to Input::InputService::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162a4c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Input_FRTWInputService_ctor(this);
  *(undefined ***)this = Input::InputService::vftable;
  ExceptionList = local_c;
  return this;
}

