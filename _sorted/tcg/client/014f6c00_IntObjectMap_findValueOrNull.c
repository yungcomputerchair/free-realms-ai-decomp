// addr: 0x014f6c00
// name: IntObjectMap_findValueOrNull
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 IntObjectMap_findValueOrNull(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_8 [8];
  
                    /* Looks up an integer key in global rb-tree DAT_01cbe974/DAT_01cbe978 via
                       lower_bound helper and returns node value at +0x10 or 0 if absent. */
  puVar4 = (undefined4 *)FUN_014f6880(local_8,&stack0x00000004);
  iVar3 = DAT_01cbe978;
  puVar1 = (undefined *)*puVar4;
  iVar2 = puVar4[1];
  if ((puVar1 == (undefined *)0x0) || (puVar1 != &DAT_01cbe974)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(iVar2 + 0x10);
  }
  return 0;
}

