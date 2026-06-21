// addr: 0x012328d0
// name: FUN_012328d0
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_012328d0(int param_1,uint param_2)

{
  int iVar1;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x9249249 < param_2) {
    FUN_01232450();
  }
  iVar1 = FUN_01231620(param_2);
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  *(uint *)(param_1 + 0xc) = iVar1 + param_2 * 0x1c;
  return 1;
}

