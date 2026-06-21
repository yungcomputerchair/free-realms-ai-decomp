// addr: 0x00fdf050
// name: FUN_00fdf050
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 * __thiscall FUN_00fdf050(int param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 auStackY_100 [188];
  undefined4 uStackY_44;
  void *pvStackY_40;
  size_t sStackY_3c;
  undefined4 uStackY_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163029b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_2 == (void *)0x0) || ((int)param_3 < 1)) {
    puVar3 = auStackY_100;
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      pvVar1 = Mem_Alloc(0x60);
      local_4 = 0;
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        pvVar1 = AppPhysics_MeshData_ctor(pvVar1);
      }
      *(void **)(param_1 + 4) = pvVar1;
    }
    local_4 = 0xffffffff;
    uVar4 = ~-(uint)(*(int *)(*(uint *)(param_1 + 4) + 4) != 0) & *(uint *)(param_1 + 4);
    pvVar1 = (void *)FUN_01160bf0();
    uStackY_38 = 0xfdf0dc;
    _memcpy(pvVar1,param_2,param_3);
    DAT_01cb56f8 = DAT_01cb56f8 + param_3;
    uStackY_38 = 0;
    sStackY_3c = param_3;
    uStackY_44 = 0xfdf0eb;
    pvStackY_40 = pvVar1;
    uVar2 = thunk_FUN_01132fb0();
    *(undefined4 *)(uVar4 + 0x50) = uVar2;
    puVar3 = (undefined1 *)0x1;
    *(size_t *)(uVar4 + 0x4c) = param_3;
    *(undefined1 *)(uVar4 + 0x43) = 1;
  }
  ExceptionList = local_c;
  return puVar3;
}

