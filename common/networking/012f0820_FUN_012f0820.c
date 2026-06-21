// addr: 0x012f0820
// name: FUN_012f0820
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall FUN_012f0820(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1c [6];
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)auStack_1c;
  iVar1 = *(int *)((int)param_1 + 0x48);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  _memcpy(&local_10,(void *)**(undefined4 **)(iVar1 + 0xc),(int)*(short *)(iVar1 + 10));
  local_14 = CONCAT22(local_14._2_2_,*(undefined2 *)(iVar1 + 8));
  uStack_16 = Ordinal_9();
  iVar1 = Ordinal_23((int)*(short *)(*(int *)((int)param_1 + 0x48) + 8),1);
  *(int *)((int)param_1 + 0x44) = iVar1;
  if ((iVar1 == -1) || (iVar1 = Ordinal_10(iVar1,0x8004667e,&stack0xffffffd8), iVar1 != 0)) {
    return 0xffffffff;
  }
  setsockopt(*(SOCKET *)((int)param_1 + 0x44),6,1,&stack0xffffffd4,4);
  iVar1 = Ordinal_4(*(undefined4 *)((int)param_1 + 0x44),&stack0xffffffdc,0x10);
  if (iVar1 < 0) {
    iVar2 = Ordinal_111();
    if ((iVar2 != 0x2734) && (iVar2 != 0x2733)) {
      WAErrorLog_write("FAILURE connect returned error #%d #%d");
      NetworkService_postConnectionError(param_1,0x2b);
      Ordinal_3(*(undefined4 *)((int)param_1 + 0x44));
      return 0xffffffff;
    }
    Ordinal_112(0);
  }
  return (uint)(iVar1 == 0);
}

