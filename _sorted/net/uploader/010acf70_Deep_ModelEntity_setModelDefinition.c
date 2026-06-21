// addr: 0x010acf70
// name: Deep_ModelEntity_setModelDefinition
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
Deep_ModelEntity_setModelDefinition(int param_1,int param_2,int param_3,void *param_4)

{
  void *arg;
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces a ModelEntity model-definition slot and records an error if the
                       supplied ModelDefinition is invalid. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0164728b;
  local_c = ExceptionList;
  arg = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x134) < param_3 + 1) {
    puVar1 = (undefined4 *)FUN_010accd0(param_3);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x130) + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 8) != 0)) {
    uVar3 = 0;
  }
  else {
    pvVar2 = Mem_Alloc(0x90);
    uStack_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
      uStack_4 = 0xffffffff;
    }
    else {
      uVar3 = FUN_010a7bc0(param_2,0);
      uStack_4 = 0xffffffff;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x130) + param_3 * 4) = uVar3;
  if ((param_4 != (void *)0x0) && (*(int *)(*(int *)(param_1 + 0x130) + param_3 * 4) != 0)) {
    FUN_010ac5b0(*(void **)(*(int *)(param_1 + 0x130) + param_3 * 4),param_4,arg);
  }
  if ((param_2 != 0) && (*(int *)(param_2 + 8) != 0)) {
    *(char **)(param_1 + 0x1ac) =
         "Invalid ModelDefinition (check ModelDefinition.GetError() more information)";
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 1;
}

