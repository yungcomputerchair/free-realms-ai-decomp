// addr: 0x0080cb30
// name: FUN_0080cb30
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_0080cb30(void *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor thunk around FUN_0080a790, freeing this when
                       requested. No exact class evidence. */
  puStack_8 = &LAB_01568608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  Sky_LinearBlendController_Blend_Horizon_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

