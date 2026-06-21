// addr: 0x01512140
// name: FUN_01512140
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_01512140(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte bVar5;
  int unaff_ESI;
  long local_10c;
  int local_108;
  undefined1 auStack_104 [256];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)&local_10c;
  param_2 = param_2 + param_1;
  local_108 = 1;
  if (*(int *)(unaff_ESI + 0x38) < param_2) {
    param_2 = *(int *)(unaff_ESI + 0x38);
  }
  if (param_1 < param_2) {
    local_10c = param_1 << 8;
    do {
      bVar5 = (byte)param_1 & 7;
      if ((1 << bVar5 & (int)*(char *)(*(int *)(unaff_ESI + 0x34) + (param_1 >> 3))) == 0) {
        local_108 = 1;
      }
      else {
        if (local_108 != 0) {
          iVar2 = _fseek(*(FILE **)(unaff_ESI + 0x10),local_10c,0);
          if (iVar2 != 0) {
            puVar3 = (undefined4 *)FUN_00d8e452();
            pcVar4 = _strerror((char *)*puVar3);
            FUN_01535eb0("fseeko(\"%s\"..): %s",*(undefined4 *)(unaff_ESI + 0x10),pcVar4);
          }
          iVar2 = _fseek(*(FILE **)(unaff_ESI + 0x30),local_10c,0);
          if (iVar2 != 0) {
            puVar3 = (undefined4 *)FUN_00d8e452();
            pcVar4 = _strerror((char *)*puVar3);
            FUN_01535eb0("fseeko(\"%s\"..): %s",*(undefined4 *)(unaff_ESI + 0x30),pcVar4);
          }
          local_108 = 0;
        }
        FUN_00d8ae0b(auStack_104,1,0x100,*(undefined4 *)(unaff_ESI + 0x10));
        _fwrite(auStack_104,1,0x100,*(void **)(unaff_ESI + 0x30));
        pbVar1 = (byte *)(*(int *)(unaff_ESI + 0x34) + (param_1 >> 3));
        *pbVar1 = *pbVar1 & ~('\x01' << bVar5);
      }
      local_10c = local_10c + 0x100;
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}

