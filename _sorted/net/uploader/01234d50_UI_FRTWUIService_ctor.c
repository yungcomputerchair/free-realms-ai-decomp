// addr: 0x01234d50
// name: UI_FRTWUIService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_FRTWUIService_ctor(void * this) */

void * __fastcall UI_FRTWUIService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UI_FRTWUIService object: installs the class vtable/base state
                       and initializes owned fields. It runs the UI service base constructor then
                       installs UI::FRTWUIService::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01651e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_UIServiceBase_ctor(this);
  *(undefined ***)this = UI::FRTWUIService::vftable;
  ExceptionList = local_c;
  return this;
}

