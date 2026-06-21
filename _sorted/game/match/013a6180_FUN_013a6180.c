// addr: 0x013a6180
// name: FUN_013a6180
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 lookupObjectEntryValue(int object_, undefined4 key_) */

undefined4 __fastcall lookupObjectEntryValue(int object_,undefined4 key_)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Looks up a key in a map/list at object+0x7c and returns the entry payload at
                       +0x10, or 0 if not found. */
  FUN_013a5bf0(&local_8,&stack0x00000004);
  iVar1 = *(int *)(object_ + 0x80);
  if ((local_8 == 0) || (local_8 != object_ + 0x7c)) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(local_4 + 0x10);
  }
  return 0;
}

