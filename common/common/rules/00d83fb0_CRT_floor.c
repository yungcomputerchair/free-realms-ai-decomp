// addr: 0x00d83fb0
// name: CRT_floor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: double CRT_floor(double value_) */

double __cdecl CRT_floor(double value_)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  float10 extraout_ST0;
  double dVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
                    /* Visual C++ CRT floor implementation, including special handling for
                       NaN/infinity and floating-point exception state. */
  if ((DAT_01cbf0a0 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)value_ >> 0x20);
    uVar1 = uVar2 >> 0x14;
    lVar6 = CONCAT44(_UNK_01844d84,_DAT_01844d80 - (uVar2 >> 0x14 & _DAT_01844db0));
    if ((uVar1 & 0x800) == 0) {
      if (uVar1 < 0x3ff) {
        return 0.0;
      }
      if (uVar1 < 0x433) {
        return (double)(((ulonglong)value_ >> lVar6) << lVar6);
      }
    }
    else {
      dVar5 = (double)(((ulonglong)value_ >> lVar6) << lVar6);
      if (uVar1 < 0xbff) {
        return (double)((-(ulonglong)(value_ < _DAT_01844da0) | (ulonglong)_DAT_01844da0) &
                       _DAT_01844d90);
      }
      if (uVar1 < 0xc33) {
        return dVar5 - (double)(-(ulonglong)(value_ < dVar5) & _DAT_01844d70);
      }
    }
    if (NAN(value_)) {
      ___libm_error_support(&value_,&value_,&value_,0x3ed);
    }
    return (double)CONCAT26(value_._6_2_,value_._0_6_);
  }
  uVar2 = __ctrlfp(DAT_01b84960,0xffff);
  if ((value_._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        fVar4 = (float10)(double)CONCAT26(value_._6_2_,value_._0_6_);
        goto LAB_00d95ebf;
      }
      if (iVar3 == 3) {
        fVar4 = (float10)__handle_qnan1();
        goto LAB_00d95ebf;
      }
    }
    dVar5 = (double)CONCAT26(value_._6_2_,value_._0_6_) + _DAT_01764658;
    uVar8 = CONCAT26(value_._6_2_,value_._0_6_);
    uVar7 = 8;
  }
  else {
    __frnd((double)CONCAT44((int)(CONCAT26(value_._6_2_,value_._0_6_) >> 0x20),(int)value_._0_6_));
    dVar5 = (double)extraout_ST0;
    if (((double)CONCAT26(value_._6_2_,value_._0_6_) == dVar5) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      fVar4 = (float10)dVar5;
      goto LAB_00d95ebf;
    }
    uVar8 = CONCAT26(value_._6_2_,value_._0_6_);
    uVar7 = 0x10;
  }
  fVar4 = (float10)__except1(uVar7,0xb,uVar8,dVar5,uVar2);
LAB_00d95ebf:
  return (double)fVar4;
}

