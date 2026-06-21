// addr: 0x00460a45
// name: FUN_00460a45
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00460a45(int *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*param_2 == 0) {
    if (*param_1 != 0) {
      if ((int *)param_1[1] != (int *)0x0) {
        (**(code **)(*(int *)param_1[1] + 8))(param_1);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  else {
    if (*param_1 == 0) {
      pvVar2 = Mem_Alloc(0x98);
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        *(undefined1 *)((int)pvVar2 + 0x10) = 0;
      }
      *param_1 = (int)pvVar2;
    }
    _memcpy((void *)*param_1,(void *)*param_2,0x98);
  }
  iVar1 = param_2[1];
  param_1[1] = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

