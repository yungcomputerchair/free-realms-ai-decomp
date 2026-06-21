// addr: 0x00d97d8b
// name: CRT_pow_specialCaseResult
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: int CRT_pow_specialCaseResult(int baseLow_, int baseHigh_, int expLow_, int
   expHigh_, double * outResult) */

int __cdecl
CRT_pow_specialCaseResult(int baseLow_,int baseHigh_,int expLow_,int expHigh_,double *outResult)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
                    /* Handles pow() special cases involving infinities, signed zero, and integer
                       exponent parity, writing a result when a special case applies. */
  dVar2 = 0.0;
  dVar1 = (double)CONCAT44(baseHigh_,baseLow_);
  if ((double)CONCAT44(baseHigh_,baseLow_) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar3 = _DAT_01b84fc0;
  if (expHigh_ == 0x7ff00000) {
    if (expLow_ == 0) {
      if ((dVar1 <= 1.0) && (dVar3 = 1.0, dVar1 < 1.0)) {
        dVar3 = dVar2;
      }
      goto LAB_00d97eb8;
    }
  }
  else if ((expHigh_ == -0x100000) && (expLow_ == 0)) {
    dVar3 = dVar2;
    if ((dVar1 <= 1.0) && (dVar3 = _DAT_01b84fc0, 1.0 <= dVar1)) {
      *outResult = _DAT_01b84fc8;
      return 1;
    }
    goto LAB_00d97eb8;
  }
  if (baseHigh_ == 0x7ff00000) {
    if (baseLow_ != 0) {
      return 0;
    }
    if (((double)CONCAT44(expHigh_,expLow_) <= 0.0) &&
       (dVar3 = dVar2, 0.0 <= (double)CONCAT44(expHigh_,expLow_))) {
      dVar3 = 1.0;
    }
  }
  else {
    if (baseHigh_ != -0x100000) {
      return 0;
    }
    if (baseLow_ != 0) {
      return 0;
    }
    iVar4 = __d_inttype((double)CONCAT44(expHigh_,expLow_));
    if ((double)CONCAT44(expHigh_,expLow_) <= 0.0) {
      if (0.0 <= (double)CONCAT44(expHigh_,expLow_)) {
        dVar3 = 1.0;
      }
      else {
        dVar3 = 0.0;
        if (iVar4 == 1) {
          dVar3 = _DAT_01b84fe0;
        }
      }
    }
    else {
      dVar3 = _DAT_01b84fc0;
      if (iVar4 == 1) {
        dVar3 = -_DAT_01b84fc0;
      }
    }
  }
LAB_00d97eb8:
  *outResult = dVar3;
  return 0;
}

