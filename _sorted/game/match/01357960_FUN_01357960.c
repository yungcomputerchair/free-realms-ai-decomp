// addr: 0x01357960
// name: FUN_01357960
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01357960(int param_1)

{
  uint local_10;
  int local_c;
  undefined1 local_8 [4];
  int local_4;
  
                    /* Removes or disables the first entry in the tree/list at +0x80. If flag +0x1fc
                       is set it clears node field +0xc instead of erasing; otherwise it erases the
                       node. Returns whether an entry was handled. */
  FUN_01354f70(&local_10,&stack0x00000004);
  local_4 = *(int *)(param_1 + 0x84);
  if ((local_10 == 0) || (local_10 != param_1 + 0x80U)) {
    FUN_00d83c2d();
  }
  if (local_c != local_4) {
    if (*(char *)(param_1 + 0x1fc) == '\x01') {
      if (local_10 == 0) {
        FUN_00d83c2d();
      }
      if (local_c == *(int *)(local_10 + 4)) {
        FUN_00d83c2d();
      }
      *(undefined4 *)(local_c + 0xc) = 0;
      return 1;
    }
    FUN_013548c0(local_8,local_10,local_c);
    return 1;
  }
  return 0;
}

