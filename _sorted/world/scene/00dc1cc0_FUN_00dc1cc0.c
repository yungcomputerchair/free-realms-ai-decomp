// addr: 0x00dc1cc0
// name: FUN_00dc1cc0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dc1cc0(int param_1,byte param_2)

{
  uint *puVar1;
  
                    /* Sets or clears bit 0x10000000 in a per-object global flag table entry
                       selected through this->node index. Exact flag meaning is not identified. */
  puVar1 = (uint *)(DAT_01bf3f78 + *(int *)(*(int *)(param_1 + 8) + 4) * 4);
  *puVar1 = *puVar1 ^ ((uint)param_2 << 0x1c ^ *puVar1) & 0x10000000;
  return;
}

