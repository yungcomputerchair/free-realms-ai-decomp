// addr: 0x00dda4f0
// name: FUN_00dda4f0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dda4f0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Acquires a global lock/interface, invokes FUN_00decb20 with the argument
                       under SEH protection, then releases the lock/interface. No class evidence, so
                       left unnamed. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161c3f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x14))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  FUN_00decb20(param_1);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x18))();
  ExceptionList = local_c;
  return;
}

