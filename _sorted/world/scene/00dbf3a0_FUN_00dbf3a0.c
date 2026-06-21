// addr: 0x00dbf3a0
// name: FUN_00dbf3a0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00dbf3a0(int param_1)

{
  undefined4 uVar1;
  
                    /* Returns a value from a global Umbra/scene object under a lock-like
                       enter/leave pair, falling back to a helper when the global subsystem flag is
                       not initialized. Exact accessor meaning is unclear. */
  if (DAT_01bf3db4 == 0) {
    uVar1 = FUN_00ddb840();
    return uVar1;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))();
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  return uVar1;
}

