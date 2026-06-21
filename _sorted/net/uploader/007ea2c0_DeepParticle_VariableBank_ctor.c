// addr: 0x007ea2c0
// name: DeepParticle_VariableBank_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall DeepParticle_VariableBank_ctor(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Constructs a DeepParticle variable bank with arrays for bool, int, float, and
                       Vector4 values, then allocates and references a shared variable-bank object.
                       Evidence is SoeUtil::Array element-type vtables and DeepParticle
                       variable-bank context. */
  puStack_8 = &LAB_01564d2f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = SoeUtil::Array<bool,0,1>::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = SoeUtil::Array<int,0,1>::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = SoeUtil::Array<float,0,1>::vftable;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uStack_3 = 0;
  param_1[0xc] = SoeUtil::Array<SoeUtil::Math::Vector<float,4>,0,1>::vftable;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_4 = 3;
  pvVar1 = Mem_Alloc(0x334);
  _local_4 = CONCAT31(uStack_3,4);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeepParticle_VariableBank_Shared_dtor(pvVar1);
  }
  param_1[0x10] = pvVar1;
  if (pvVar1 != (void *)0x0) {
    LOCK();
    *(int *)((int)pvVar1 + 4) = *(int *)((int)pvVar1 + 4) + 1;
    UNLOCK();
  }
  ExceptionList = local_c;
  return param_1;
}

