// addr: 0x00dce980
// name: FUN_00dce980
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00dce980(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
                    /* Moves an object into the active intrusive list for its owner, unlinking it
                       from any previous list membership, stamping a global frame counter, and
                       setting state flags. Exact method name is unclear. */
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 != 0) {
    if ((*(byte *)(param_1 + 4) & 8) != 0) {
      if (*(int *)(iVar1 + 0x28) == 0) {
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x2c);
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 0x2c) = *(undefined4 *)(iVar1 + 0x2c)
        ;
      }
      iVar1 = *(int *)(param_1 + 8);
      if (*(int *)(iVar1 + 0x2c) == 0) {
        *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar1 + 0x28);
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x2c) + 8) + 0x28) = *(undefined4 *)(iVar1 + 0x28)
        ;
      }
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x28) = 0;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x2c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x2c) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x28) = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x2c);
    if (iVar2 == 0) {
      *(int *)(iVar1 + 0x18) = param_1;
    }
    else {
      *(int *)(*(int *)(iVar2 + 8) + 0x28) = param_1;
    }
    *(int *)(iVar1 + 0x14) = param_1;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x30) = DAT_01bf43cc;
    uVar3 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = (uVar3 * 2 ^ uVar3) & 0x20 ^ uVar3;
  }
  return;
}

