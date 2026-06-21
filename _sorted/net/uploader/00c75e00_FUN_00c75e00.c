// addr: 0x00c75e00
// name: FUN_00c75e00
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00c75e00(int param_1,int param_2,int param_3,char param_4)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  char local_4;
  undefined1 local_3;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if ((param_1 != 0) && (param_2 != 0)) {
    local_14 = param_2;
    local_c = param_2;
    local_8 = param_2 + param_3;
    local_10 = param_3;
    local_4 = '\0';
    local_3 = 0;
    FUN_00c71d90(&local_14);
    if (*(void **)(param_1 + 0xc) != (void *)0x0) {
      FUN_00b33020(*(void **)(param_1 + 0xc),&local_14);
    }
    if ((local_4 == '\0') && ((param_4 != '\0' || (local_8 - local_c < 1)))) {
      return 1;
    }
  }
  return 0;
}

