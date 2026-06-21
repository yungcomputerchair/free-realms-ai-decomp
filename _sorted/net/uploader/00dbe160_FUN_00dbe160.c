// addr: 0x00dbe160
// name: FUN_00dbe160
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void submitClampedRenderScalar(void * arg1, void * arg2, float value_) */

void submitClampedRenderScalar(void *arg1,void *arg2,float value_)

{
  int in_ECX;
  float fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clamps a scalar to 0..1 and dispatches it through the guarded graphics path,
                       falling back when the global path is disabled. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161aed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01bf3db4 == 0) {
    FUN_00dda270((int)arg1,(int)arg2,value_);
    ExceptionList = local_c;
    return;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  fVar1 = 0.0;
  if ((value_ <= 0.0) || (fVar1 = _DAT_0175b420, _DAT_0175b420 <= value_)) {
    value_ = fVar1;
  }
  FUN_00de3860(*(void **)(*(int *)(in_ECX + 0x10) + 0x304),(int)arg1,(int)arg2,(int)value_);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_c;
  return;
}

