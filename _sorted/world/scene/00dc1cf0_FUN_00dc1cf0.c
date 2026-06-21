// addr: 0x00dc1cf0
// name: FUN_00dc1cf0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dc1cf0(int param_1,byte param_2)

{
  uint *puVar1;
  
                    /* Sets or clears bit 0x04000000 in the global per-object flag table and then
                       mirrors that state back onto the object via 00dd00b0. Exact flag name is
                       unknown. */
  puVar1 = (uint *)(DAT_01bf3f78 + *(int *)(*(int *)(param_1 + 8) + 4) * 4);
  *puVar1 = *puVar1 ^ ((uint)param_2 << 0x1a ^ *puVar1) & 0x4000000;
  FUN_00dd00b0();
  return;
}

