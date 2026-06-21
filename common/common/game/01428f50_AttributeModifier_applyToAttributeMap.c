// addr: 0x01428f50
// name: AttributeModifier_applyToAttributeMap
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
AttributeModifier_applyToAttributeMap(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *extraout_EAX;
  undefined4 *puVar4;
  int *unaff_EDI;
  undefined1 *tree;
  undefined1 *outIter;
  undefined1 local_10 [4];
  int local_c;
  undefined1 local_8 [8];
  
                    /* Applies an attribute modifier to a keyed integer map, using operation modes
                       that set, add, take max, or take min. Evidence is the switch cases: 0
                       assigns, 1 adds, 2 updates only if larger, and 3 updates only if smaller. */
  iVar2 = *(int *)(param_1 + 0x14);
  piVar1 = (int *)FUN_01426c50(local_10,&param_3);
  if ((*piVar1 == 0) || (*piVar1 != param_1 + 0x10)) {
    FUN_00d83c2d();
  }
  if (piVar1[1] != iVar2) {
    iVar2 = FUN_01428e20(&param_2);
    local_c = *(int *)(iVar2 + 4);
    outIter = (undefined1 *)&param_3;
    tree = local_8;
    pvVar3 = (void *)FUN_01428e20(&param_2);
    StdRbTreeInt_find(pvVar3,tree,outIter,unaff_EDI);
    if ((*extraout_EAX == 0) || (*extraout_EAX != iVar2)) {
      FUN_00d83c2d();
    }
    piVar1 = &param_3;
    if (extraout_EAX[1] == local_c) {
      pvVar3 = (void *)FUN_01428e20(&param_2);
      piVar1 = IntDefaultMap_getOrInsert(pvVar3,piVar1);
      *piVar1 = param_4;
      return;
    }
    puVar4 = (undefined4 *)FUN_01427e80(piVar1);
    switch(*puVar4) {
    case 0:
      piVar1 = &param_3;
      pvVar3 = (void *)FUN_01428e20(&param_2);
      piVar1 = IntDefaultMap_getOrInsert(pvVar3,piVar1);
      *piVar1 = param_4;
      return;
    case 1:
      piVar1 = &param_3;
      pvVar3 = (void *)FUN_01428e20(&param_2);
      piVar1 = IntDefaultMap_getOrInsert(pvVar3,piVar1);
      iVar2 = *piVar1 + param_4;
      break;
    case 2:
      piVar1 = &param_3;
      pvVar3 = (void *)FUN_01428e20(&param_2);
      piVar1 = IntDefaultMap_getOrInsert(pvVar3,piVar1);
      iVar2 = param_4;
      if (param_4 <= *piVar1) {
        return;
      }
      break;
    case 3:
      piVar1 = &param_3;
      pvVar3 = (void *)FUN_01428e20(&param_2);
      piVar1 = IntDefaultMap_getOrInsert(pvVar3,piVar1);
      iVar2 = param_4;
      if (*piVar1 <= param_4) {
        return;
      }
      break;
    default:
      goto switchD_01429014_default;
    }
    piVar1 = &param_3;
    pvVar3 = (void *)FUN_01428e20(&param_2);
    piVar1 = IntDefaultMap_getOrInsert(pvVar3,piVar1);
    *piVar1 = iVar2;
  }
switchD_01429014_default:
  return;
}

