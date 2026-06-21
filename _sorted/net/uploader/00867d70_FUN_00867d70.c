// addr: 0x00867d70
// name: FUN_00867d70
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00867d70(undefined4 *param_1,undefined4 *param_2)

{
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01574231;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = (void *)FUN_007ce890(DAT_01b839d8 ^ (uint)&local_14);
  local_4 = 0;
  if (local_14 != (void *)0x0) {
    local_10 = local_14;
    DeepParticle_ParticleControllerInstance_ctor(local_14,(void *)*param_1,(void *)*param_2);
  }
  ExceptionList = local_c;
  return;
}

