// addr: 0x01251e30
// name: PackedActionId_isHighBitsNotInTable
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool PackedActionId_isHighBitsNotInTable(undefined4 actionId_) */

bool PackedActionId_isHighBitsNotInTable(undefined4 actionId_)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
                    /* Scans a sentinel-terminated global integer table and returns false when
                       PackedActionId_getHighBits(actionId) is present, true otherwise. */
  piVar2 = &DAT_018cbab0;
  iVar3 = 0;
  do {
    iVar1 = PackedActionId_getHighBits(actionId_);
    if (iVar1 == *piVar2) {
      return false;
    }
    iVar3 = iVar3 + 1;
    piVar2 = &DAT_018cbab0 + iVar3;
  } while ((&DAT_018cbab0)[iVar3] != 0);
  return true;
}

