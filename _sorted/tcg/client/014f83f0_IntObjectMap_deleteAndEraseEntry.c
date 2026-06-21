// addr: 0x014f83f0
// name: IntObjectMap_deleteAndEraseEntry
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void IntObjectMap_deleteAndEraseEntry(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_8 [8];
  
                    /* Finds an integer-keyed rb-tree entry, calls the stored object's virtual
                       delete/destructor if present, clears it, then erases the tree node. */
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
    if (*(undefined4 **)(iVar2 + 0x10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar2 + 0x10))(1);
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    *(undefined4 *)(iVar2 + 0x10) = 0;
    FUN_014f71a0(local_8,puVar1,iVar2);
  }
  return;
}

