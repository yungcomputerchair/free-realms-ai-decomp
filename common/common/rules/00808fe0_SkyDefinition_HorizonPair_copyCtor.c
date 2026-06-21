// addr: 0x00808fe0
// name: SkyDefinition_HorizonPair_copyCtor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall SkyDefinition_HorizonPair_copyCtor(void *param_1,void *param_2)

{
  void *source;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a two-horizon blend object and copies its blend factor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567a43;
  local_c = ExceptionList;
  source = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  SkyDefinition_Horizon_copyCtor(param_1,param_2,source);
  local_4 = 0;
  SkyDefinition_Horizon_copyCtor((void *)((int)param_1 + 0x40),(void *)((int)param_2 + 0x40),source)
  ;
  *(undefined4 *)((int)param_1 + 0x80) = *(undefined4 *)((int)param_2 + 0x80);
  ExceptionList = local_c;
  return param_1;
}

