// addr: 0x013aca90
// name: FUN_013aca90
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int lookupEnabledTripleValueSum(int object_, undefined4 key_) */

int __fastcall lookupEnabledTripleValueSum(int object_,undefined4 key_)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Looks up a key and returns the sum of enabled value fields from the matching
                       node, controlled by boolean flags at object+0x11..0x13. */
  FUN_013ac8f0(&local_8,&stack0x00000004);
  iVar1 = *(int *)(object_ + 8);
  if ((local_8 == 0) || (local_8 != object_ + 4)) {
    FUN_00d83c2d();
  }
  if (local_4 == iVar1) {
    iVar1 = 0;
  }
  else {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    iVar1 = 0;
    if (*(char *)(object_ + 0x11) != '\0') {
      iVar1 = *(int *)(local_4 + 0x10);
    }
    if (*(char *)(object_ + 0x12) != '\0') {
      iVar1 = iVar1 + *(int *)(local_4 + 0x14);
    }
    if (*(char *)(object_ + 0x13) != '\0') {
      return iVar1 + *(int *)(local_4 + 0x18);
    }
  }
  return iVar1;
}

