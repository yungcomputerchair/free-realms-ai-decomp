// addr: 0x00dd2a30
// name: FUN_00dd2a30
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dd2a30(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* Copies a 12-word matrix/transform into the buffer pointed to by this+0x28.
                       Exact owner class is unclear. */
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  iVar3 = 0xc;
  puVar2 = puVar1;
  do {
    iVar3 = iVar3 + -1;
    *puVar2 = *(undefined4 *)((param_2 - (int)puVar1) + (int)puVar2);
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  return;
}

