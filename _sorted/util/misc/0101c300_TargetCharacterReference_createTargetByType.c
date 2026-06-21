// addr: 0x0101c300
// name: TargetCharacterReference_createTargetByType
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * TargetCharacterReference_createTargetByType(undefined4 param_1,int *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory for TargetCharacterReference target variants; allocates and
                       constructs TargetCharacterGuid, TargetLocation, TargetCharacterBone,
                       TargetCharacterBoneId, an unknown type-5 target, or TargetActorBoneId based
                       on the type id. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01634ce2;
  local_c = ExceptionList;
  switch(param_1) {
  case 1:
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x30);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      puVar2 = TargetCharacterGuid_ctor(pvVar1,param_2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x40);
    local_4 = 1;
    if (pvVar1 != (void *)0x0) {
      puVar2 = TargetLocation_ctor(pvVar1,param_2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x40);
    local_4 = 2;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)TargetCharacterBone_ctor(param_2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x40);
    local_4 = 3;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)TargetCharacterBoneId_ctor(param_2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x40);
    local_4 = 4;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_0101c230(param_2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x30);
    local_4 = 5;
    if (pvVar1 != (void *)0x0) {
      puVar2 = TargetActorBoneId_ctor(pvVar1,param_2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  default:
    return (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

