// addr: 0x00f9a9d0
// name: InputService_sub_00f9a9d0
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InputService_sub_00f9a9d0(undefined4 * param_1) */

void __fastcall InputService_sub_00f9a9d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       InputService::vftable. */
  puStack_8 = &LAB_0162a4f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = Input::InputService::vftable;
  local_4 = 0xffffffff;
  FRTWInputService_sub_0122dc80(param_1);
  ExceptionList = local_c;
  return;
}

