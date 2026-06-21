// addr: 0x00e871c0
// name: FUN_00e871c0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00e871c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uVar7 = (uint)*(byte *)(param_1 + 0x19);
  iVar1 = FUN_00e86e30();
  if (iVar1 <= (int)uVar7) {
    iVar1 = FUN_00e86ea0();
    if (iVar1 < (int)uVar7) {
      uVar3 = FUN_00e86ea0();
      pcVar9 = "Macro has too many arguments (max. allowed is %d).";
    }
    else {
      uVar8 = 0;
      if (uVar7 != 0) {
        do {
          uVar4 = FUN_00e86ef0(uVar8);
          if (uVar4 == 0x400000) goto LAB_00e872aa;
          if ((*(int *)(param_1 + 0x1c) == 0) || (*(byte *)(param_1 + 0x19) <= uVar8)) {
            puVar5 = &DAT_01bfdd68;
          }
          else {
            puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + uVar8 * 4);
          }
          if (puVar5[1] == 0) {
            uVar6 = 1;
          }
          else {
            uVar6 = *(uint *)(puVar5[1] + 4);
          }
          if ((uVar4 & (puVar5[3] | uVar6)) == 0) {
            TextType_toString(uVar4);
            StringUtil_vsnprintf
                      (&DAT_01bfdd78,0xff,
                       "Invalid argument type is used at %dth argument. Expected type is %s.",uVar8)
            ;
            return 0x5c65;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar7);
      }
      uVar7 = FUN_00e86ef0(uVar8);
      if (((uVar7 == 0x400000) || ((uVar7 & 1) != 0)) || ((uVar7 & 0x200000) != 0)) {
        return 0;
      }
      uVar3 = FUN_00e86ea0();
      pcVar9 = "Macro has too many arguments (%d is max.)";
    }
    StringUtil_vsnprintf(&DAT_01bfdd78,0xff,pcVar9,uVar3);
    return 0x5c68;
  }
  iVar1 = FUN_00e86e30();
  iVar2 = FUN_00e86ea0();
  if (iVar1 == iVar2) {
    uVar3 = FUN_00e86e30();
    pcVar9 = "Macro should have exact %d arguments.";
  }
  else {
LAB_00e872aa:
    uVar3 = FUN_00e86e30();
    pcVar9 = "Macro should have at least %d arguments.";
  }
  StringUtil_vsnprintf(&DAT_01bfdd78,0xff,pcVar9,uVar3);
  return 0x5c67;
}

