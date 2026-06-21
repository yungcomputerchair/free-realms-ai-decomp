// addr: 0x00df4890
// name: FUN_00df4890
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00df4890(int param_1)

{
                    /* Mirrors a derived visibility/state condition into flag bit 0x20000 when an
                       attached object has bit 2 set and this already has bit 0x40000. Exact flag
                       names are unknown. */
  if (((*(int *)(param_1 + 0x1c) != 0) && ((*(byte *)(*(int *)(param_1 + 0x1c) + 0x50) & 2) != 0))
     && ((*(uint *)(param_1 + 0xc) & 0x40000) != 0)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x20000;
    return;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffdffff;
  return;
}

