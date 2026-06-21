// addr: 0x00839030
// name: FUN_00839030
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00839030(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
                    /* Chooses a localized/string-table value for a UI property index and invokes
                       vfunc +0x14 to apply it, falling back to a caller-provided value or empty
                       string. Owning class is unknown. */
  if ((param_2 == 0) || ((&PTR_DAT_01b34f88)[param_3 * 4] == (undefined *)0x0)) {
    puVar1 = &DAT_0175b400;
  }
  else {
    puVar1 = (undefined1 *)FUN_00d517f0((&PTR_DAT_01b34f88)[param_3 * 4]);
    if (puVar1 == (undefined1 *)0x0) {
      (**(code **)(*param_1 + 0x14))(param_3,param_4);
      return;
    }
  }
  (**(code **)(*param_1 + 0x14))(param_3,puVar1);
  return;
}

