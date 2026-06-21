// addr: 0x00dda270
// name: FUN_00dda270
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void FUN_00dda270(int arg1_, int arg2_, float amount_) */

void FUN_00dda270(int arg1_,int arg2_,float amount_)

{
  float fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clamps a float argument to the range 0..globalMax and forwards to
                       FUN_00e12db0 under an exception frame. No class or uploader evidence is
                       visible. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161c368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x14))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  fVar1 = 0.0;
  if ((amount_ <= 0.0) || (fVar1 = _DAT_0175b420, _DAT_0175b420 <= amount_)) {
    amount_ = fVar1;
  }
  FUN_00e12db0(arg1_,arg2_,amount_);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x18))();
  ExceptionList = local_c;
  return;
}

