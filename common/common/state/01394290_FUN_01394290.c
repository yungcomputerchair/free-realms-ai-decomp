// addr: 0x01394290
// name: FUN_01394290
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_01394290(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies a small object header and invokes a destructor/cleanup on the source
                       object's tail. The class is not identifiable from this context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168438b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  FUN_005f15f0(param_2 + 1);
  ExceptionList = local_c;
  return param_1;
}

