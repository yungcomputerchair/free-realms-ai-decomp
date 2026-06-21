// addr: 0x011fae80
// name: FUN_011fae80
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int FUN_011fae80(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint maxCount_;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int local_8;
  int iStack_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar2 = param_1;
  iStack_4 = 0x11fae8a;
  if (*(code **)(param_1 + 0x30) == (code *)0x0) {
    return 0;
  }
  maxCount_ = param_3;
  if (param_3 == 0xffffffff) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    maxCount_ = (int)pcVar3 - (int)(param_2 + 1);
  }
  iStack_4 = (**(code **)(param_1 + 0x30))(param_1,0,&local_8,0);
  iVar6 = 0;
  if (0 < iStack_4) {
    do {
      (**(code **)(iVar2 + 0x30))(iVar2,&param_1,0,*(undefined4 *)(local_8 + iVar6 * 4));
      pcVar3 = *(char **)(param_1 + 0xc);
      pcVar4 = pcVar3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (((int)pcVar4 - (int)(pcVar3 + 1) == maxCount_) &&
         (iVar5 = __strnicmp(pcVar3,param_2,maxCount_), iVar5 == 0)) {
        return param_1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iStack_4);
  }
  return 0;
}

