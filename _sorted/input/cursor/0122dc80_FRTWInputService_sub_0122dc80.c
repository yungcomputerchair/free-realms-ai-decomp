// addr: 0x0122dc80
// name: FRTWInputService_sub_0122dc80
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FRTWInputService_sub_0122dc80(undefined4 * param_1) */

void __fastcall FRTWInputService_sub_0122dc80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       FRTWInputService::vftable. */
  puStack_8 = &LAB_01650ff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = Input::FRTWInputService::vftable;
  local_4 = 0xffffffff;
  Win32InputService_sub_01230080(param_1);
  ExceptionList = local_c;
  return;
}

