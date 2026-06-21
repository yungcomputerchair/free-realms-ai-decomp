// addr: 0x0080bb20
// name: SkyDefinition_sampleSatelliteTrack
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall SkyDefinition_sampleSatelliteTrack(int param_1,void *param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper that samples a wrapped satellite animation channel and constructs
                       a blended satellite pair. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01568389;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0080a490((void *)(param_1 + 0xdc4),param_2,param_3,
               (float)(DAT_01b839d8 ^ (uint)&stack0xffffffec));
  ExceptionList = local_c;
  return param_2;
}

