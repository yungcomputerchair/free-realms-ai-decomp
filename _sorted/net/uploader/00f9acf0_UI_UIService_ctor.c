// addr: 0x00f9acf0
// name: UI_UIService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall UI_UIService_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::UIService after its base/helper initializer and installs
                       UI::UIService::vftable. Evidence is the vtable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162a678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_FRTWUIService_ctor(param_1);
  *param_1 = UI::UIService::vftable;
  ExceptionList = local_c;
  return param_1;
}

