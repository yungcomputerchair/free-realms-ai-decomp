// addr: 0x00fada40
// name: GraphicsDriver_CommandContext_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GraphicsDriver_CommandContext_ctor(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GraphicsDriver::CommandContext, installs its vtable, stores the
                       device/context argument, clears fields, and initializes embedded state.
                       Evidence is GraphicsDriver::CommandContext::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162c1db;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = GraphicsDriver::CommandContext::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  FUN_00fad910(uVar1);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  ExceptionList = local_c;
  return param_1;
}

