// addr: 0x00b93360
// name: FUN_00b93360
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00b93360(int *param_1,undefined4 param_2)

{
                    /* Deserializes/loads data into the object using FUN_00b90750 and then invokes a
                       virtual post-load callback at vtable+4. No class evidence. */
  FUN_00b90750(param_2,param_1 + 1);
  (**(code **)(*param_1 + 4))();
  return;
}

