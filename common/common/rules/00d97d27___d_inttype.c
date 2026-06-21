// addr: 0x00d97d27
// name: __d_inttype
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: int __d_inttype(double value_) */

int __cdecl __d_inttype(double value_)

{
  double inputDouble_;
  uint uVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
                    /* Visual Studio 2005 CRT helper that classifies whether a double is an integer
                       and whether it is odd/even for pow edge cases. */
  uVar1 = __fpclass(value_);
  if ((uVar1 & 0x90) == 0) {
    __frnd(value_);
    if (extraout_ST0 == (float10)value_) {
      inputDouble_ = value_ * _DAT_01764650;
      __frnd(inputDouble_);
      if (extraout_ST0_00 == (float10)inputDouble_) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}

