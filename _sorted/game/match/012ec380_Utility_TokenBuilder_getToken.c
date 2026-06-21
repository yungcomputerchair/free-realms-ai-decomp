// addr: 0x012ec380
// name: Utility_TokenBuilder_getToken
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall Utility_TokenBuilder_getToken(int param_1,uint param_2)

{
                    /* Returns the token string at index if present; otherwise returns the
                       TokenBuilder fallback/empty string at this+0x30. */
  if (*(int *)(param_1 + 8) != 0) {
    if (param_2 < (uint)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x1c)) {
      if ((*(int *)(param_1 + 8) == 0) ||
         ((uint)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x1c) <= param_2)) {
        FUN_00d83c2d();
      }
      return *(int *)(param_1 + 8) + param_2 * 0x1c;
    }
  }
  return param_1 + 0x30;
}

