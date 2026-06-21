// addr: 0x013ada70
// name: FUN_013ada70
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int sum_selected_current_node_fields(int this_) */

int __fastcall sum_selected_current_node_fields(int this_)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Looks up the current node in a tree/map-like member at this+4 and returns the
                       sum of node fields +0x10 and/or +0x14 depending on flags at this+0x11 and
                       this+0x12. No class-identifying strings or RTTI are present. */
  FUN_013ad8d0(&local_8,&stack0x00000004);
  iVar1 = *(int *)(this_ + 8);
  if ((local_8 == 0) || (local_8 != this_ + 4)) {
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
    if (*(char *)(this_ + 0x11) != '\0') {
      iVar1 = *(int *)(local_4 + 0x10);
    }
    if (*(char *)(this_ + 0x12) != '\0') {
      return iVar1 + *(int *)(local_4 + 0x14);
    }
  }
  return iVar1;
}

